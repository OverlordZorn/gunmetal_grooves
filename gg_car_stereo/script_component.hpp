#define COMPONENT car_stereo
#define COMPONENT_BEAUTIFIED Car Stereo
#include "\x\gg\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_CAR_STEREO
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_CAR_STEREO
    #define DEBUG_SETTINGS DEBUG_SETTINGS_CAR_STEREO
#endif

#include "\x\gg\addons\main\script_macros.hpp"

#include "\a3\ui_f\hpp\defineResincl.inc"
#include "\a3\ui_f\hpp\defineCommonGrids.inc"

// GUI Defines
#define POS_X(N) ((N) * GUI_GRID_W + GUI_GRID_CENTER_X)
#define POS_Y(N) ((N) * GUI_GRID_H + GUI_GRID_CENTER_Y)
#define POS_W(N) ((N) * GUI_GRID_W)
#define POS_H(N) ((N) * GUI_GRID_H)

#define BODY_PIXEL_W 2048
#define BODY_PIXEL_H 1024

#define BODY_SIZE 40
#define BODY_SIZE_RATIO (BODY_PIXEL_H / BODY_PIXEL_W)
#define BODY_SIZE_W POS_W(BODY_SIZE)
#define BODY_SIZE_H POS_H(BODY_SIZE * BODY_SIZE_RATIO)

#define POS_BODY_W(N) ((N) / BODY_PIXEL_W * BODY_SIZE_W)
#define POS_BODY_H(N) ((N) / BODY_PIXEL_H * BODY_SIZE_H)

#define SCREEN_PIXEL_X 830
#define SCREEN_PIXEL_Y 439
#define SCREEN_PIXEL_W 805
#define SCREEN_PIXEL_H 148

#define POS_SCREEN_W(N) ((N) * POS_BODY_W(SCREEN_PIXEL_W))
#define POS_SCREEN_H(N) ((N) * POS_BODY_H(SCREEN_PIXEL_H))

#define MOUSE_LMB 0
#define MOUSE_RMB 1
#define MOUSE_MMB 2

// Interface IDCs
#define IDC_BODY              100
#define IDC_BODY_GLOW         101
#define IDC_EJECT             102
#define IDC_INSERT            103
#define IDC_SOURCE            104
#define IDC_BASS_BOOST        105
#define IDC_VOLUME_UP         106
#define IDC_VOLUME_DOWN       107
#define IDC_REWIND            108
#define IDC_FASTFORWARD       109
#define IDC_PLAY_PAUSE        110
#define IDC_RANDOM_MODE       111
#define IDC_REPEAT_MODE       112
#define IDC_CD_GROUP          113
#define IDC_CD_LIST           114
#define IDC_CD_NONE           115
#define IDC_CD_CONFIRM        116
#define IDC_CD_CANCEL         117
#define IDC_SCREEN            118
#define IDC_SCREEN_MAIN       119
#define IDC_SCREEN_TIME       120
#define IDC_SCREEN_PLAYING    121
#define IDC_SCREEN_TRACK_TIME 122
#define IDC_SCREEN_BASS       123
#define IDC_SCREEN_VOLUME     124
#define IDC_SCREEN_MODE       125

#define IDCS_SCREEN_CONTROLS [\
    IDC_SCREEN_MAIN,\
    IDC_SCREEN_TIME,\
    IDC_SCREEN_PLAYING,\
    IDC_SCREEN_TRACK_TIME,\
    IDC_SCREEN_BASS,\
    IDC_SCREEN_VOLUME,\
    IDC_SCREEN_MODE\
]

// General
#define STEREO_MODE_OFF       0
#define STEREO_MODE_CD_PLAYER 1

#define PLAY_MODE_REPEAT 0
#define PLAY_MODE_RANDOM 1

#define TRACK_PREFIX 0
#define TRACK_NAME   1
#define TRACK_LENGTH 2

#define TRACKING_THREAD_DELAY 2

// Loading
#define LOADING_TIME_MIN       4
#define LOADING_TIME_MAX       20
#define LOADING_TIME_PER_TRACK 0.1

// Volume Control
#define VOLUME_MIN       1
#define VOLUME_MAX       10
#define VOLUME_DEFAULT   5
#define VOLUME_STEP_SIZE 1

// Bass Boost
#define DISTANCE_NORMAL       100
#define DISTANCE_BASS_BOOSTED 200

// Body
#define STEREO_BODY_VARIANTS ["red", "green", "amber"]

#define BODY_MIN_BRIGHTNESS 0.1
#define BODY_GLOW_THRESHOLD 0.75

// Screen Text
#define SCREEN_TEXT_SCROLL_DELAY 1
#define SCREEN_TEXT_SCROLL_SPEED 4
