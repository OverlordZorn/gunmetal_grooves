#include "../script_component.hpp"

params ["_display", "_text", ["_forced", false]];

private _ctrlScreenMain = _display displayCtrl IDC_SCREEN_MAIN;

// Exit if the update is not forced and the given text is already being rendered
// The committed and waiting checks ensure the current scrolling animation is finished
// before the next one is started (creates the looping effect)
if (
    !_forced
    && {_text isEqualTo ctrlText _ctrlScreenMain}
    && {
        !ctrlCommitted _ctrlScreenMain
        || {_ctrlScreenMain getVariable [QGVAR(waiting), false]}
    }
) exitWith {};

_ctrlScreenMain ctrlSetText _text;

// Use a scrolling animation to support text bigger than the available screen space
private _textWidth = ctrlTextWidth _ctrlScreenMain;
private _ctrlWidth = POS_SCREEN_W(1);

if (_textWidth > _ctrlWidth) then {
    // If the given text matches the previously applied text, then loop the animation
    private _previousText = _ctrlScreenMain getVariable [QGVAR(previousText), ""];
    private _isLooping = _text isEqualTo _previousText;

    // Start off-screen at the right edge if looping and at the left edge otherwise
    private _startPos = parseNumber _isLooping;
    _ctrlScreenMain ctrlSetPositionX POS_SCREEN_W(_startPos);
    _ctrlScreenMain ctrlSetPositionW _textWidth;
    _ctrlScreenMain ctrlCommit 0;

    // Start the animation after a short delay if not looping
    // If the previous text was already waiting to animate, just increase the scroll delay
    // The already added WUAE will also handle the new text
    // Need to use separate waiting variable since PFHs run before WUAEs
    private _scrollDelay = _ctrlScreenMain getVariable [QGVAR(scrollDelay), 0];
    private _delay = [SCREEN_TEXT_SCROLL_DELAY, 0] select _isLooping;
    _ctrlScreenMain setVariable [QGVAR(scrollDelay), CBA_missionTime + _delay];
    _ctrlScreenMain setVariable [QGVAR(waiting), true];

    if (_scrollDelay < CBA_missionTime) then {
        [{
            isNull _this || {CBA_missionTime >= _this getVariable [QGVAR(scrollDelay), 0]}
        }, {
            if (!isNull _this) then {
                // Check if the current text still needs to be animated (could have changed during delay)
                if (ctrlTextWidth _this > POS_SCREEN_W(1)) then {
                    // Move the text completely off the left-hand side of the screen
                    private _scrollPosition = -ctrlTextWidth _this;
                    private _scrollDistance = (ctrlPosition _this select 0) - _scrollPosition;
                    private _commitTime = _scrollDistance / (POS_SCREEN_W(1) / SCREEN_TEXT_SCROLL_SPEED);
                    _this ctrlSetPositionX _scrollPosition;
                    _this ctrlCommit _commitTime;
                };

                _this setVariable [QGVAR(waiting), false];
            };
        }, _ctrlScreenMain] call CBA_fnc_waitUntilAndExecute;
    };
} else {
    // If the text fits the screen, the simply center it
    _ctrlScreenMain ctrlSetPositionX ((_ctrlWidth - _textWidth) / 2);
    _ctrlScreenMain ctrlCommit 0;
};

_ctrlScreenMain setVariable [QGVAR(previousText), _text];
