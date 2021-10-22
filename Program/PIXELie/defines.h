/* defines.h */

#define PROGRAM_NAME        "PIXELie"
#define PROGRAM_VERSION     "V0.1"

#define SCREEN_WIDTH        128     // OLED display width, in pixels
#define SCREEN_HEIGHT       64      // OLED display height, in pixels
 
#define OLED_RESET          -1      // Reset pin # (or -1 if sharing Arduino reset pin)

 
// Pin assignments for the Arduino (Make changes to these if you use different Pins)
#define SDssPin             53      // SD card CS pin
#define STRIP_LENGTH        144     // Set the number of LEDs the LED Strip
#define NPPin               6       // Data Pin for the NeoPixel LED Strip
#define AUXBUTTON           4       // Aux Select Button Pin
#define AUXBUTTONGND        5       // Aux Select Button Ground Pin
#define DEFAULT_BRIGHTNESS  90

// set addresses for save
#define ADDR_FRAMEDELAY     0       // default for the frame delay
#define ADDR_INITDELAY      20      // Variable for delay between button press and start of light sequence
#define ADDR_REPEAT         30      // Address for number of repeats to select auto repeat (until select button is pressed again)
#define ADDR_REPEATDELAY    400     // Variable for delay between repeats
#define ADDR_UPDATEMODE     50      // Variable to keep track of update Modes
#define ADDR_REPEATTIMES    60      // Variable to keep track of number of repeats
#define ADDR_BRIGHTNESS     70      // Variable and default for the Brightness of the strip

#define MYBMP_BF_TYPE       0x4D42
#define MYBMP_BF_OFF_BITS   54
#define MYBMP_BI_SIZE       40
#define MYBMP_BI_RGB        0L
#define MYBMP_BI_RLE8       1L
#define MYBMP_BI_RLE4       2L
#define MYBMP_BI_BITFIELDS  3L

// 5-way Joystick configuration
#define UP_PIN              22
#define DOWN_PIN            23
#define LEFT_PIN            24
#define RIGHT_PIN           25
#define ENTER_PIN           26