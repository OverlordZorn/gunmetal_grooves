class ctrlStatic;
class ctrlButton;
class ctrlXListbox;
class ctrlButtonPicture;
class ctrlStaticPictureKeepAspect;
class ctrlControlsGroupNoScrollbars;

class GVAR(button): ctrlButton {
    colorBackground[] = {0, 0, 0, 0};
    colorBackgroundActive[] = {0, 0, 0, 0};
    colorBackgroundDisabled[] = {0, 0, 0, 0};
    colorFocused[] = {0, 0, 0, 0};
    tooltipColorBox[] = {0, 0, 0, 0};
    tooltipColorText[] = {1, 1, 1, 1};
    tooltipColorShade[] = {0.5, 0.5, 0.5, 0.25};
    soundPush[] = {"", 0, 1};
    soundClick[] = {"", 0, 1};
    soundEnter[] = {"", 0, 1};
    soundEscape[] = {"", 0, 1};
};

class GVAR(dialog) {
    idd = -1;
    movingEnable = 1;
    enableSimulation = 1;
    onLoad = QUOTE(call FUNC(handleLoad));
    class controls {
        class Container: ctrlControlsGroupNoScrollbars {
            x = 0.5 - BODY_SIZE_W / 2;
            y = 0.5 - BODY_SIZE_H / 2;
            w = BODY_SIZE_W;
            h = BODY_SIZE_H;
            class controls {
                class Body: ctrlStaticPictureKeepAspect {
                    idc = IDC_BODY;
                    x = 0;
                    y = 0;
                    w = BODY_SIZE_W;
                    h = BODY_SIZE_H;
                };
                class BodyGlow: Body {
                    idc = IDC_BODY_GLOW;
                };
                class Eject: GVAR(button) {
                    idc = IDC_EJECT;
                    onButtonClick = QUOTE(call FUNC(handleEject));
                    tooltip = CSTRING(Eject);
                    x = POS_BODY_W(203);
                    y = POS_BODY_H(290);
                    w = POS_BODY_W(96);
                    h = POS_BODY_H(91);
                };
                class Insert: GVAR(button) {
                    idc = IDC_INSERT;
                    onButtonClick = QUOTE(call FUNC(handleInsert));
                    tooltip = CSTRING(Insert);
                    x = POS_BODY_W(358);
                    y = POS_BODY_H(310);
                    w = POS_BODY_W(1266);
                    h = POS_BODY_H(75);
                };
                class SrcOff: GVAR(button) {
                    idc = IDC_SOURCE;
                    onButtonClick = QUOTE(call FUNC(handleSource));
                    tooltip = CSTRING(SrcOff);
                    x = POS_BODY_W(184);
                    y = POS_BODY_H(403);
                    w = POS_BODY_W(87);
                    h = POS_BODY_H(94);
                };
                class BassBoost: GVAR(button) {
                    idc = IDC_BASS_BOOST;
                    onButtonClick = QUOTE(call FUNC(handleBassBoost));
                    tooltip = CSTRING(BassBoost);
                    x = POS_BODY_W(290);
                    y = POS_BODY_H(470);
                    w = POS_BODY_W(144);
                    h = POS_BODY_H(104);
                };
                class VolumeUp: GVAR(button) {
                    idc = IDC_VOLUME_UP;
                    onButtonClick = QUOTE(call FUNC(handleVolume));
                    tooltip = CSTRING(VolumeUp);
                    x = POS_BODY_W(582);
                    y = POS_BODY_H(391);
                    w = POS_BODY_W(105);
                    h = POS_BODY_H(258);
                };
                class VolumeDown: GVAR(button) {
                    idc = IDC_VOLUME_DOWN;
                    onButtonClick = QUOTE(call FUNC(handleVolume));
                    tooltip = CSTRING(VolumeDown);
                    x = POS_BODY_W(444);
                    y = POS_BODY_H(391);
                    w = POS_BODY_W(105);
                    h = POS_BODY_H(258);
                };
                class Rewind: GVAR(button) {
                    idc = IDC_REWIND;
                    onButtonClick = QUOTE(call FUNC(handleSeek));
                    tooltip = CSTRING(PreviousRewind);
                    x = POS_BODY_W(742);
                    y = POS_BODY_H(668);
                    w = POS_BODY_W(117);
                    h = POS_BODY_H(30);
                };
                class FastForward: GVAR(button) {
                    idc = IDC_FASTFORWARD;
                    onButtonClick = QUOTE(call FUNC(handleSeek));
                    tooltip = CSTRING(NextFastForward);
                    x = POS_BODY_W(862);
                    y = POS_BODY_H(668);
                    w = POS_BODY_W(117);
                    h = POS_BODY_H(30);
                };
                class PlayPause: GVAR(button) {
                    idc = IDC_PLAY_PAUSE;
                    onButtonClick = QUOTE(call FUNC(handlePlayPause));
                    tooltip = CSTRING(PlayPause);
                    x = POS_BODY_W(1337);
                    y = POS_BODY_H(668);
                    w = POS_BODY_W(87);
                    h = POS_BODY_H(30);
                };
                class RandomMode: GVAR(button) {
                    idc = IDC_RANDOM_MODE;
                    onButtonClick = QUOTE(call FUNC(handlePlayMode));
                    tooltip = CSTRING(RandomMode);
                    x = POS_BODY_W(1454);
                    y = POS_BODY_H(668);
                    w = POS_BODY_W(89);
                    h = POS_BODY_H(30);
                };
                class RepeatMode: GVAR(button) {
                    idc = IDC_REPEAT_MODE;
                    onButtonClick = QUOTE(call FUNC(handlePlayMode));
                    tooltip = CSTRING(RepeatMode);
                    x = POS_BODY_W(1558);
                    y = POS_BODY_H(668);
                    w = POS_BODY_W(89);
                    h = POS_BODY_H(30);
                };
                class CDGroup: ctrlControlsGroupNoScrollbars {
                    idc = IDC_CD_GROUP;
                    x = POS_BODY_W(600);
                    y = POS_BODY_H(320);
                    w = POS_BODY_W(820);
                    h = POS_BODY_H(50);
                    class controls {
                        class CDList: ctrlXListbox {
                            idc = IDC_CD_LIST;
                            x = 0;
                            y = 0;
                            w = POS_BODY_W(700);
                            h = POS_BODY_H(50);
                            colorActive[] = {1, 1, 1, 1};
                            colorSelect[] = {1, 1, 1, 1};
                        };
                        class CDNone: ctrlStatic {
                            idc = IDC_CD_NONE;
                            style = ST_CENTER + ST_UPPERCASE;
                            text = CSTRING(NoCDInventory);
                            x = 0;
                            y = 0;
                            w = POS_BODY_W(700);
                            h = POS_BODY_H(50);
                        };
                        class CDConfirm: ctrlButtonPicture {
                            idc = IDC_CD_CONFIRM;
                            onButtonClick = QUOTE(call FUNC(handleCDConfirm));
                            text = QPATHTOF(ui\icon_insert_ca.paa);
                            tooltip = CSTRING(Insert);
                            x = POS_BODY_W(710);
                            y = 0;
                            w = POS_BODY_W(50);
                            h = POS_BODY_H(50);
                            tooltipColorBox[] = {0, 0, 0, 0};
                            tooltipColorText[] = {1, 1, 1, 1};
                            tooltipColorShade[] = {0.5, 0.5, 0.5, 0.25};
                            soundPush[] = {"", 0, 1};
                            soundClick[] = {"", 0, 1};
                            soundEnter[] = {"", 0, 1};
                            soundEscape[] = {"", 0, 1};
                        };
                        class CDCancel: CDConfirm {
                            idc = IDC_CD_CANCEL;
                            onButtonClick = QUOTE(call FUNC(handleCDCancel));
                            text = "\a3\3den\data\displays\display3den\search_end_ca.paa";
                            tooltip = "$STR_Disp_Cancel";
                            x = POS_BODY_W(770);
                            colorBackground[] = {0, 0, 0, 0};
                            colorBackgroundActive[] = {0.85, 0, 0, 1};
                            colorFocused[] = {0.85, 0, 0, 1};
                        };
                    };
                };
                class Screen: ctrlControlsGroupNoScrollbars {
                    idc = IDC_SCREEN;
                    x = POS_BODY_W(SCREEN_PIXEL_X);
                    y = POS_BODY_H(SCREEN_PIXEL_Y);
                    w = POS_BODY_W(SCREEN_PIXEL_W);
                    h = POS_BODY_H(SCREEN_PIXEL_H);
                    class controls {
                        class Main: ctrlStatic {
                            idc = IDC_SCREEN_MAIN;
                            style = ST_LEFT;
                            font = QEGVAR(fonts,VCROSDMono);
                            colorText[] = {0.8, 0.8, 0.8, 1};
                            shadow = 0;
                            x = POS_SCREEN_W(0);
                            y = POS_SCREEN_H(0.2);
                            w = POS_SCREEN_W(1);
                            h = POS_SCREEN_H(0.6);
                            sizeEx = POS_SCREEN_H(0.6);
                        };
                        class Time: Main {
                            idc = IDC_SCREEN_TIME;
                            style = ST_RIGHT;
                            x = POS_SCREEN_W(0.6);
                            y = POS_SCREEN_H(0.05);
                            w = POS_SCREEN_W(0.4);
                            h = POS_SCREEN_H(0.15);
                            sizeEx = POS_SCREEN_H(0.15);
                        };
                        class Playing: ctrlStaticPictureKeepAspect {
                            idc = IDC_SCREEN_PLAYING;
                            x = POS_SCREEN_W(0.01);
                            y = POS_SCREEN_H(0.85) - pixelH; // for better alignment
                            w = POS_SCREEN_W(0.15 * (SCREEN_PIXEL_H / SCREEN_PIXEL_W));
                            h = POS_SCREEN_H(0.15);
                        };
                        class TrackTime: Main {
                            idc = IDC_SCREEN_TRACK_TIME;
                            x = POS_SCREEN_W(0.01 + 0.15 * (SCREEN_PIXEL_H / SCREEN_PIXEL_W));
                            y = POS_SCREEN_H(0.85);
                            w = POS_SCREEN_W(0.5);
                            h = POS_SCREEN_H(0.15);
                            sizeEx = POS_SCREEN_H(0.15);
                        };
                        class Bass: TrackTime {
                            idc = IDC_SCREEN_BASS;
                            style = ST_RIGHT;
                            w = POS_SCREEN_W(0.1);
                        };
                        class Volume: TrackTime {
                            idc = IDC_SCREEN_VOLUME;
                        };
                        class Mode: Volume {
                            idc = IDC_SCREEN_MODE;
                            style = ST_RIGHT;
                            x = POS_SCREEN_W(0.9);
                            w = POS_SCREEN_W(0.1);
                        };
                    };
                };
            };
        };
    };
};
