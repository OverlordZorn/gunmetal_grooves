
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
