#ifndef PINS_DIMO_H
#define PINS_DIMO_H


/****************************************************************************************
* Arduino Mega pin assignment
*
****************************************************************************************/
#if MOTHERBOARD == 39 
#define KNOWN_BOARD 1

//////////////////FIX THIS//////////////
#ifndef __AVR_ATmega1280__
 #ifndef __AVR_ATmega2560__
 #error Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu.
 #endif
#endif


// uncomment one of the following lines for RAMPS v1.3 or v1.0, comment both for v1.2 or 1.1
// #define RAMPS_V_1_3
// #define RAMPS_V_1_0


  #define LARGE_FLASH true
  

    #define X_STEP_PIN          5
    #define X_DIR_PIN           6
    #define X_ENABLE_PIN        7
    #define X_MIN_PIN           4
    #define X_MAX_PIN           3   //2 //Max endstops default to disabled "-1", set to commented value to enable.

    #define Y_STEP_PIN         58
    #define Y_DIR_PIN          59
    #define Y_ENABLE_PIN        2
    #define Y_MIN_PIN          14
    #define Y_MAX_PIN          15   //15

    #define Z_STEP_PIN         18
    #define Z_DIR_PIN          17
    #define Z_ENABLE_PIN       16
    #define Z_MIN_PIN          19
    #define Z_MAX_PIN          38

    #define Y2_STEP_PIN        -1
    #define Y2_DIR_PIN         -1
    #define Y2_ENABLE_PIN      -1

    #define Z2_STEP_PIN        -1
    #define Z2_DIR_PIN         -1
    #define Z2_ENABLE_PIN      -1

    #define E0_STEP_PIN        66
    #define E0_DIR_PIN         67
    #define E0_ENABLE_PIN      68

    #define E1_STEP_PIN        65
    #define E1_DIR_PIN         64
    #define E1_ENABLE_PIN      63

    #define SDPOWER            -1
    #define SDSS               -1//53
    #define LED_PIN            13

    //#define BEEPER             33    

    #define FAN_PIN            12 // IO pin. Buffer needed

  

    //#define CONTROLLERFAN_PIN  10 //Pin used for the fan to cool controller


  #define PS_ON_PIN          -1
  #define KILL_PIN           -1

  #define HEATER_0_PIN        8   // EXTRUDER 1
  #define HEATER_1_PIN        9
  #define HEATER_2_PIN       -1 

  #define TEMP_0_PIN          2   // ANALOG NUMBERING
  #define TEMP_1_PIN          1   // ANALOG NUMBERING
  #define TEMP_2_PIN         -1   // ANALOG NUMBERING

  #define HEATER_BED_PIN     10    // NO BED

  #define TEMP_BED_PIN        0   // ANALOG NUMBERING


  #ifdef NUM_SERVOS
    #define SERVO0_PIN         11

    #if NUM_SERVOS > 1
      #define SERVO1_PIN         6
    #endif

    #if NUM_SERVOS > 2
      #define SERVO2_PIN         5
    #endif

    #if NUM_SERVOS > 3
      #define SERVO3_PIN         4
    #endif
  #endif

  #ifdef TEMP_STAT_LEDS

      #define STAT_LED_RED       6
      #define STAT_LED_BLUE     11

  #endif

      #define LCD_PINS_RS 45 
      #define LCD_PINS_ENABLE 44
      #define LCD_PINS_D4 46
      #define LCD_PINS_D5 47 
      #define LCD_PINS_D6 48
      #define LCD_PINS_D7 49

        #define BEEPER 43

        #define BTN_EN1 61
        #define BTN_EN2 60
        #define BTN_ENC 62

        #define SDCARDDETECT 69

// SPI for Max6675 Thermocouple 

#ifndef SDSUPPORT
// these pins are defined in the SD library if building with SD support  
  #define MAX_SCK_PIN          50
  #define MAX_MISO_PIN         51
  #define MAX_MOSI_PIN         52
  #define MAX6675_SS       53
#else
  #define MAX6675_SS       53
#endif

#endif //MOTHERBOARD == 3 || MOTHERBOARD == 33 || MOTHERBOARD == 34 || MOTHERBOARD == 35 || MOTHERBOARD == 77



#endif 

