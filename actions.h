enum {
  ENCODER_NO_ACTION=0,
  ENCODER_AF_GAIN,
  ENCODER_AF_GAIN_RX1,
  ENCODER_AF_GAIN_RX2,
  ENCODER_AGC_GAIN,
  ENCODER_AGC_GAIN_RX1,
  ENCODER_AGC_GAIN_RX2,
  ENCODER_ATTENUATION,
  ENCODER_COMP,
  ENCODER_CW_FREQUENCY,
  ENCODER_CW_SPEED,
  ENCODER_DIVERSITY_GAIN,
  ENCODER_DIVERSITY_GAIN_COARSE,
  ENCODER_DIVERSITY_GAIN_FINE,
  ENCODER_DIVERSITY_PHASE,
  ENCODER_DIVERSITY_PHASE_COARSE,
  ENCODER_DIVERSITY_PHASE_FINE,
  ENCODER_DRIVE,
  ENCODER_IF_SHIFT,
  ENCODER_IF_SHIFT_RX1,
  ENCODER_IF_SHIFT_RX2,
  ENCODER_IF_WIDTH,
  ENCODER_IF_WIDTH_RX1,
  ENCODER_IF_WIDTH_RX2,
  ENCODER_MIC_GAIN,
  ENCODER_PAN,
  ENCODER_PANADAPTER_HIGH,
  ENCODER_PANADAPTER_LOW,
  ENCODER_PANADAPTER_STEP,
  ENCODER_RF_GAIN,
  ENCODER_RF_GAIN_RX1,
  ENCODER_RF_GAIN_RX2,
  ENCODER_RIT,
  ENCODER_RIT_RX1,
  ENCODER_RIT_RX2,
  ENCODER_SQUELCH,
  ENCODER_SQUELCH_RX1,
  ENCODER_SQUELCH_RX2,
  ENCODER_TUNE_DRIVE,
  ENCODER_VFO,
  ENCODER_WATERFALL_HIGH,
  ENCODER_WATERFALL_LOW,
  ENCODER_XIT,
  ENCODER_ZOOM,
  ENCODER_ACTIONS
};

extern char *encoder_string[ENCODER_ACTIONS];

enum {
  NO_ACTION=0,
  A_TO_B,
  A_SWAP_B,
  AGC,
  ANF,
  B_TO_A,
  BAND_MINUS,
  BAND_PLUS,
  BANDSTACK_MINUS,
  BANDSTACK_PLUS,
  CTUN,
  DIVERSITY,
  FILTER_MINUS,
  FILTER_PLUS,
  FUNCTION,
  LOCK,
  MENU_BAND,
  MENU_BANDSTACK,
  MENU_DIVERSITY,
  MENU_FILTER,
  MENU_FREQUENCY,
  MENU_MEMORY,
  MENU_MODE,
  MENU_PS,
  MODE_MINUS,
  MODE_PLUS,
  MOX,
  MUTE,
  NB,
  NR,
  NUM_1,
  NUM_2,
  NUM_3,
  NUM_4,
  NUM_5,
  NUM_6,
  NUM_7,
  NUM_8,
  NUM_9,
  NUM_0,
  NUM_CLEAR,
  NUM_ENTER,
  PAN_MINUS,
  PAN_PLUS,
  PS,
  RIT,
  RIT_CLEAR,
  SAT,
  SNB,
  SPLIT,
  TUNE,
  TWO_TONE,
  XIT,
  XIT_CLEAR,
  ZOOM_MINUS,
  ZOOM_PLUS,
  SWITCH_ACTIONS
};

extern char *sw_string[SWITCH_ACTIONS];

typedef struct __ACTION {
  gint function;
  gint action;
  gint val;
} ACTION;

extern int rotary_action(void *data);
extern int switch_action(void *data);

