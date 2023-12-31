#ifndef PINOUT_KNOMI_V1_H
#define PINOUT_KNOMI_V1_H

#define BOOT_PIN        0

// knomi v1
#define GC9A01_MOSI_PIN 11 // In some display driver board, it might be written as "SDA" and so on.
#define GC9A01_SCLK_PIN 13
#define GC9A01_CS_PIN   10 // Chip select control pin
#define GC9A01_DC_PIN   12 // Data Command control pin
#define GC9A01_RST_PIN  14 // Reset pin (could connect to Arduino RESET pin)

// LED
#define RGB_LED_PIN     48

// PWM
#define LCD_BL_PIN      20

#endif
