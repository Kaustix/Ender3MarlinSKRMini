/*****************
 * language_en.h *
 *****************/

/****************************************************************************
 *   Written By Marcio Teixeira 2019 - Aleph Objects, Inc.                  *
 *                                                                          *
 *   This program is free software: you can redistribute it and/or modify   *
 *   it under the terms of the GNU General Public License as published by   *
 *   the Free Software Foundation, either version 3 of the License, or      *
 *   (at your option) any later version.                                    *
 *                                                                          *
 *   This program is distributed in the hope that it will be useful,        *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of         *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          *
 *   GNU General Public License for more details.                           *
 *                                                                          *
 *   To view a copy of the GNU General Public License, go to the following  *
 *   location: <http://www.gnu.org/licenses/>.                              *
 ****************************************************************************/

#pragma once

// The list LANGUAGE_STRINGS should define all the strings used in the default
// language (Language_en). Translations do *not* need to re-define this.

#define LANGUAGE_STRINGS \
  LANGUAGE, \
  YES, \
  NO, \
  BACK, \
  COLOR_TOUCH_PANEL, \
  ABOUT_ALEPH_OBJECTS, OKAY, \
  FIRMWARE_FOR_TOOLHEAD, \
  AUTO_HOME, \
  CLEAN_NOZZLE, \
  CHANGE_FILAMENT, \
  ADVANCED_SETTINGS, \
  PRINTER_STATISTICS, \
  ABOUT_PRINTER, \
  MOTORS_OFF, \
  ZPROBE_ZOFFSET, \
  STEPS_PER_MM, \
  HOME_SENSE, \
  TOOL_OFFSETS, \
  MOTOR_CURRENT, \
  FILAMENT, \
  ENDSTOPS, \
  X_MAX, \
  X_MIN, \
  Y_MAX, \
  Y_MIN, \
  Z_MAX, \
  Z_MIN, \
  Z_PROBE, \
  RUNOUT_1, \
  RUNOUT_2, \
  SOFT_ENDSTOPS, \
  DISPLAY_MENU, \
  INTERFACE_SETTINGS, \
  RESTORE_DEFAULTS, \
  VELOCITY, \
  VMAX_X, \
  VMAX_Y, \
  VMAX_Z, \
  VMAX_E1, \
  VMAX_E2, \
  VMAX_E3, \
  VMAX_E4, \
  ACCELERATION, \
  ACCEL_PRINTING, \
  ACCEL_TRAVEL, \
  ACCEL_RETRACT, \
  AMAX_X, \
  AMAX_Y, \
  AMAX_Z, \
  AMAX_E1, \
  AMAX_E2, \
  AMAX_E3, \
  AMAX_E4, \
  JERK, \
  JUNCTION_DEVIATION, \
  BACKLASH, \
  MEASURE_AUTOMATICALLY, \
  H_OFFSET, \
  V_OFFSET, \
  TOUCH_SCREEN, \
  CALIBRATE, \
  HOME, \
  UNITS_MILLIAMP, \
  UNITS_MM, \
  UNITS_MM_S, \
  UNITS_MM_S2, \
  UNITS_STEP_MM, \
  UNITS_PERCENT, \
  UNITS_C, \
  TEMP_IDLE, \
  MATERIAL_PLA, \
  MATERIAL_ABS, \
  MATERIAL_HIGH_TEMP, \
  AXIS_X, \
  AXIS_Y, \
  AXIS_Z, \
  AXIS_E, \
  AXIS_E1, \
  AXIS_E2, \
  AXIS_E3, \
  AXIS_E4, \
  AXIS_ALL, \
  HOTEND, \
  HOTEND1, \
  HOTEND2, \
  HOTEND3, \
  HOTEND4, \
  BED, \
  SMOOTHING, \
  CORRECTION, \
  PRINTING, \
  SET_MAXIMUM, \
  RUNOUT_SENSOR, \
  DETECTION_THRESHOLD, \
  DISTANCE, \
  TEMPERATURE, \
  COOLDOWN, \
  FAN_SPEED, \
  PRINT_SPEED, \
  SPEED, \
  MOVE_AXIS, \
  LINEAR_ADVANCE, \
  LINEAR_ADVANCE_K, \
  LINEAR_ADVANCE_K1, \
  LINEAR_ADVANCE_K2, \
  LINEAR_ADVANCE_K3, \
  LINEAR_ADVANCE_K4, \
  NUDGE_NOZZLE, \
  ADJUST_BOTH_NOZZLES, \
  SHOW_OFFSETS, \
  INCREMENT, \
  ERASE_FLASH_WARNING, \
  ERASING, \
  ERASED, \
  CALIBRATION_WARNING, \
  ABORT_WARNING, \
  EXTRUDER_SELECTION, \
  CURRENT_TEMPERATURE, \
  REMOVAL_TEMPERATURE, \
  HEATING, \
  CAUTION, \
  HOT, \
  UNLOAD_FILAMENT, \
  LOAD_FILAMENT, \
  MOMENTARY, \
  CONTINUOUS, \
  PLEASE_WAIT, \
  PRINT_MENU, \
  FINE_MOTION, \
  MEDIA, \
  ENABLE_MEDIA, \
  INSERT_MEDIA, \
  MENU, \
  LCD_BRIGHTNESS, \
  SOUND_VOLUME, \
  SCREEN_LOCK, \
  BOOT_SCREEN, \
  INTERFACE_SOUNDS, \
  EEPROM_RESTORED, \
  EEPROM_RESET, \
  EEPROM_SAVED, \
  EEPROM_SAVE_PROMPT, \
  EEPROM_RESET_WARNING, \
  OPEN_DIR, \
  PRINT_FILE, \
  PRINT_STARTING, \
  PRINT_FINISHED, \
  PRINT_ERROR, \
  PASSCODE_REJECTED, \
  PASSCODE_ACCEPTED, \
  PASSCODE_SELECT, \
  PASSCODE_REQUEST, \
  PRINTER_HALTED, \
  PLEASE_RESET, \
  CLICK_SOUNDS, \
  INFO_PRINT_COUNT, \
  INFO_COMPLETED_PRINTS, \
  INFO_PRINT_TIME, \
  INFO_PRINT_LONGEST, \
  INFO_PRINT_FILAMENT, \
  RESUME_PRINT, \
  PAUSE_PRINT, \
  STOP_PRINT, \
  TOUCH_CALIBRATION_START, \
  TOUCH_CALIBRATION_PROMPT \
  LULZBOT_BIOPRINTER_STRINGS

#ifndef LULZBOT_USE_BIOPRINTER_UI
  #define LULZBOT_BIOPRINTER_STRINGS
#else
  #define LULZBOT_BIOPRINTER_STRINGS ,\
    MAIN_MENU, \
    UNLOCK_XY_AXIS, \
    LOAD_SYRINGE, \
    BED_TEMPERATURE, \
    LOADING_WARNING, \
    HOMING_WARNING
#endif

#include "language.h" // This must be included after LANGUAGE_STRINGS

// The string table for this language.

namespace Language_en {
  PROGMEM Language_Str LANGUAGE                 = u8"English";

  PROGMEM Language_Str YES                      = u8"Yes";
  PROGMEM Language_Str NO                       = u8"No";
  PROGMEM Language_Str BACK                     = u8"Back";
  PROGMEM Language_Str OKAY                     = u8"Okay";
  PROGMEM Language_Str MENU                     = u8"Menu";
  PROGMEM Language_Str MEDIA                    = u8"Media";

  PROGMEM Language_Str AUTO_HOME                = u8"Auto Home";
  PROGMEM Language_Str CLEAN_NOZZLE             = u8"Clean Nozzle";
  PROGMEM Language_Str MOVE_AXIS                = u8"Move Axis";
  PROGMEM Language_Str MOTORS_OFF               = u8"Motors Off";
  PROGMEM Language_Str TEMPERATURE              = u8"Temperature";
  PROGMEM Language_Str CHANGE_FILAMENT          = u8"Change Filament";
  PROGMEM Language_Str ADVANCED_SETTINGS        = u8"Advanced Settings";
  PROGMEM Language_Str ABOUT_PRINTER            = u8"About Printer";
  PROGMEM Language_Str PRINTER_STATISTICS       = u8"Printer Statistics";

  PROGMEM Language_Str ZPROBE_ZOFFSET           = u8"Z Offset";
  PROGMEM Language_Str STEPS_PER_MM             = u8"Steps/mm";
  PROGMEM Language_Str TOOL_OFFSETS             = u8"Tool Offsets";
  PROGMEM Language_Str VELOCITY                 = u8"Velocity";
  PROGMEM Language_Str VMAX_X                   = u8"Vmax X";
  PROGMEM Language_Str VMAX_Y                   = u8"Vmax Y";
  PROGMEM Language_Str VMAX_Z                   = u8"Vmax Z";
  PROGMEM Language_Str VMAX_E1                  = u8"Vmax E1";
  PROGMEM Language_Str VMAX_E2                  = u8"Vmax E2";
  PROGMEM Language_Str VMAX_E3                  = u8"Vmax E3";
  PROGMEM Language_Str VMAX_E4                  = u8"Vmax E4";
  PROGMEM Language_Str ACCELERATION             = u8"Acceleration";
  PROGMEM Language_Str ACCEL_PRINTING           = u8"Printing";
  PROGMEM Language_Str ACCEL_TRAVEL             = u8"Travel";
  PROGMEM Language_Str ACCEL_RETRACT            = u8"Retraction";
  PROGMEM Language_Str AMAX_X                   = u8"Amax X";
  PROGMEM Language_Str AMAX_Y                   = u8"Amax Y";
  PROGMEM Language_Str AMAX_Z                   = u8"Amax Z";
  PROGMEM Language_Str AMAX_E1                  = u8"Amax E1";
  PROGMEM Language_Str AMAX_E2                  = u8"Amax E2";
  PROGMEM Language_Str AMAX_E3                  = u8"Amax E3";
  PROGMEM Language_Str AMAX_E4                  = u8"Amax E4";
  PROGMEM Language_Str JERK                     = u8"Jerk";
  PROGMEM Language_Str JUNCTION_DEVIATION       = u8"Junc Dev";
  PROGMEM Language_Str BACKLASH                 = u8"Backlash";
  PROGMEM Language_Str SMOOTHING                = u8"Smoothing";
  PROGMEM Language_Str CORRECTION               = u8"Correction";
  PROGMEM Language_Str MOTOR_CURRENT            = u8"Currents";
  PROGMEM Language_Str FILAMENT                 = u8"Filament";
  PROGMEM Language_Str ENDSTOPS                 = u8"Endstops";
  PROGMEM Language_Str SOFT_ENDSTOPS            = u8"Soft Endstops";
  PROGMEM Language_Str RESTORE_DEFAULTS         = u8"Restore Defaults";

  PROGMEM Language_Str HOTEND                   = u8"Hot End";
  PROGMEM Language_Str HOTEND1                  = u8"Hot End 1";
  PROGMEM Language_Str HOTEND2                  = u8"Hot End 2";
  PROGMEM Language_Str HOTEND3                  = u8"Hot End 3";
  PROGMEM Language_Str HOTEND4                  = u8"Hot End 4";
  PROGMEM Language_Str BED                      = u8"Bed";
  PROGMEM Language_Str AXIS_X                   = u8"X";
  PROGMEM Language_Str AXIS_Y                   = u8"Y";
  PROGMEM Language_Str AXIS_Z                   = u8"Z";
  PROGMEM Language_Str AXIS_E                   = u8"E";
  PROGMEM Language_Str AXIS_E1                  = u8"E1";
  PROGMEM Language_Str AXIS_E2                  = u8"E2";
  PROGMEM Language_Str AXIS_E3                  = u8"E3";
  PROGMEM Language_Str AXIS_E4                  = u8"E4";
  PROGMEM Language_Str AXIS_ALL                 = u8"All";
  PROGMEM Language_Str HOME                     = u8"Home";

  PROGMEM Language_Str FAN_SPEED                = u8"Fan Speed";
  PROGMEM Language_Str RUNOUT_SENSOR            = u8"Runout Sensor";

  PROGMEM Language_Str OPEN_DIR                 = u8"Open";
  PROGMEM Language_Str PRINT_FILE               = u8"Print";

  PROGMEM Language_Str RESUME_PRINT             = u8"Resume Print";
  PROGMEM Language_Str PAUSE_PRINT              = u8"Pause Print";
  PROGMEM Language_Str STOP_PRINT               = u8"Stop Print";

  PROGMEM Language_Str PRINT_STARTING           = u8"Print starting";
  PROGMEM Language_Str PRINT_FINISHED           = u8"Print finished";
  PROGMEM Language_Str PRINT_ERROR              = u8"Print error";

  PROGMEM Language_Str INFO_PRINT_COUNT         = u8"Print Count";
  PROGMEM Language_Str INFO_COMPLETED_PRINTS    = u8"Total Prints";
  PROGMEM Language_Str INFO_PRINT_TIME          = u8"Total Print Time";
  PROGMEM Language_Str INFO_PRINT_LONGEST       = u8"Longest Print";
  PROGMEM Language_Str INFO_PRINT_FILAMENT      = u8"Filament Used";

  PROGMEM Language_Str PRINTER_HALTED           = u8"PRINTER HALTED";
  PROGMEM Language_Str PLEASE_RESET             = u8"Please reset";

  PROGMEM Language_Str COLOR_TOUCH_PANEL        = u8"Color Touch Panel";
  PROGMEM Language_Str ABOUT_ALEPH_OBJECTS      = u8"(C) 2019 Aleph Objects, Inc.\n\nwww.lulzbot.com";

  PROGMEM Language_Str FIRMWARE_FOR_TOOLHEAD    = u8"Firmware for toolhead:\n%s\n\n";

  PROGMEM Language_Str HOME_SENSE               = u8"Home Sense";
  PROGMEM Language_Str X_MAX                    = u8"X Max";
  PROGMEM Language_Str X_MIN                    = u8"X Min";
  PROGMEM Language_Str Y_MAX                    = u8"Y Max";
  PROGMEM Language_Str Y_MIN                    = u8"Y Min";
  PROGMEM Language_Str Z_MAX                    = u8"Z Max";
  PROGMEM Language_Str Z_MIN                    = u8"Z Min";
  PROGMEM Language_Str Z_PROBE                  = u8"Z Probe";
  PROGMEM Language_Str RUNOUT_1                 = u8"Runout 1";
  PROGMEM Language_Str RUNOUT_2                 = u8"Runout 2";
  PROGMEM Language_Str DISPLAY_MENU             = u8"Display";
  PROGMEM Language_Str INTERFACE_SETTINGS       = u8"Interface Settings";
  PROGMEM Language_Str MEASURE_AUTOMATICALLY    = u8"Measure automatically";
  PROGMEM Language_Str H_OFFSET                 = u8"H Offset";
  PROGMEM Language_Str V_OFFSET                 = u8"V Offset";
  PROGMEM Language_Str TOUCH_SCREEN             = u8"Touch Screen";
  PROGMEM Language_Str CALIBRATE                = u8"Calibrate";

  PROGMEM Language_Str UNITS_MILLIAMP           = u8"mA";
  PROGMEM Language_Str UNITS_MM                 = u8"mm";
  PROGMEM Language_Str UNITS_MM_S               = u8"mm/s";
  PROGMEM Language_Str UNITS_MM_S2              = u8"mm/s^2";
  PROGMEM Language_Str UNITS_STEP_MM            = u8"st/mm";
  PROGMEM Language_Str UNITS_PERCENT            = u8"%";
  #if defined(TOUCH_UI_USE_UTF8) && defined(TOUCH_UI_UTF8_WESTERN_CHARSET)
    PROGMEM Language_Str UNITS_C                = u8"??C";
  #else
    PROGMEM Language_Str UNITS_C                = u8" C";
  #endif
  PROGMEM Language_Str MATERIAL_PLA             = u8"PLA";
  PROGMEM Language_Str MATERIAL_ABS             = u8"ABS";
  PROGMEM Language_Str MATERIAL_HIGH_TEMP       = u8"High";
  PROGMEM Language_Str TEMP_IDLE                = u8"idle";

  PROGMEM Language_Str PRINTING                 = u8"Printing";
  PROGMEM Language_Str SET_MAXIMUM              = u8"Set Maximum";
  PROGMEM Language_Str DETECTION_THRESHOLD      = u8"Detection Threshold";
  PROGMEM Language_Str DISTANCE                 = u8"Distance";
  PROGMEM Language_Str COOLDOWN                 = u8"Cooldown (All Off)";
  PROGMEM Language_Str PRINT_SPEED              = u8"Print Speed";
  PROGMEM Language_Str SPEED                    = u8"Speed";
  PROGMEM Language_Str LINEAR_ADVANCE           = u8"Linear Advance";
  PROGMEM Language_Str LINEAR_ADVANCE_K         = u8"K";
  PROGMEM Language_Str LINEAR_ADVANCE_K1        = u8"K E1";
  PROGMEM Language_Str LINEAR_ADVANCE_K2        = u8"K E2";
  PROGMEM Language_Str LINEAR_ADVANCE_K3        = u8"K E3";
  PROGMEM Language_Str LINEAR_ADVANCE_K4        = u8"K E4";
  PROGMEM Language_Str NUDGE_NOZZLE             = u8"Nudge Nozzle";
  PROGMEM Language_Str ADJUST_BOTH_NOZZLES      = u8"Adjust Both Nozzles";
  PROGMEM Language_Str SHOW_OFFSETS             = u8"Show Offsets";
  PROGMEM Language_Str INCREMENT                = u8"Increment";
  PROGMEM Language_Str ERASE_FLASH_WARNING      = u8"Are you sure? SPI flash will be erased.";
  PROGMEM Language_Str ERASING                  = u8"Erasing...";
  PROGMEM Language_Str ERASED                   = u8"SPI flash erased";
  PROGMEM Language_Str CALIBRATION_WARNING      = u8"For best results, unload the filament and clean the hotend prior to starting calibration. Continue?";
  PROGMEM Language_Str ABORT_WARNING            = u8"Are you sure you want to cancel the print?";
  PROGMEM Language_Str EXTRUDER_SELECTION       = u8"Extruder Selection";
  PROGMEM Language_Str CURRENT_TEMPERATURE      = u8"Current Temp";
  PROGMEM Language_Str REMOVAL_TEMPERATURE      = u8"Removal Temp";
  PROGMEM Language_Str HEATING                  = u8"Heating";
  PROGMEM Language_Str CAUTION                  = u8"Caution:";
  PROGMEM Language_Str HOT                      = u8"Hot!";
  PROGMEM Language_Str UNLOAD_FILAMENT          = u8"Unload";
  PROGMEM Language_Str LOAD_FILAMENT            = u8"Load/Extruder";
  PROGMEM Language_Str MOMENTARY                = u8"Momentary";
  PROGMEM Language_Str CONTINUOUS               = u8"Continuous";
  PROGMEM Language_Str PLEASE_WAIT              = u8"Please wait...";
  PROGMEM Language_Str PRINT_MENU               = u8"Print Menu";
  PROGMEM Language_Str FINE_MOTION              = u8"Fine motion";
  PROGMEM Language_Str ENABLE_MEDIA             = u8"Enable Media";
  PROGMEM Language_Str INSERT_MEDIA             = u8"Insert Media...";
  PROGMEM Language_Str LCD_BRIGHTNESS           = u8"LCD brightness";
  PROGMEM Language_Str SOUND_VOLUME             = u8"Sound volume";
  PROGMEM Language_Str SCREEN_LOCK              = u8"Screen lock";
  PROGMEM Language_Str BOOT_SCREEN              = u8"Boot screen";
  PROGMEM Language_Str INTERFACE_SOUNDS         = u8"Interface Sounds";
  PROGMEM Language_Str CLICK_SOUNDS             = u8"Click sounds";
  PROGMEM Language_Str EEPROM_RESTORED          = u8"Settings restored from backup";
  PROGMEM Language_Str EEPROM_RESET             = u8"Settings restored to default";
  PROGMEM Language_Str EEPROM_SAVED             = u8"Settings saved!";
  PROGMEM Language_Str EEPROM_SAVE_PROMPT       = u8"Do you wish to save these settings as defaults?";
  PROGMEM Language_Str EEPROM_RESET_WARNING     = u8"Are you sure? Customizations will be lost.";

  PROGMEM Language_Str PASSCODE_REJECTED        = u8"Wrong passcode!";
  PROGMEM Language_Str PASSCODE_ACCEPTED        = u8"Passcode accepted!";
  PROGMEM Language_Str PASSCODE_SELECT          = u8"Select Passcode:";
  PROGMEM Language_Str PASSCODE_REQUEST         = u8"Enter Passcode:";

  PROGMEM Language_Str TOUCH_CALIBRATION_START  = u8"Release to begin screen calibration";
  PROGMEM Language_Str TOUCH_CALIBRATION_PROMPT = u8"Touch the dots to calibrate";

  #ifdef LULZBOT_USE_BIOPRINTER_UI
    PROGMEM Language_Str MAIN_MENU              = u8"Main Menu";
    PROGMEM Language_Str UNLOCK_XY_AXIS         = u8"Unlock XY Axis";
    PROGMEM Language_Str LOAD_SYRINGE           = u8"Load Syringe";
    PROGMEM Language_Str BED_TEMPERATURE        = u8"Bed Temperature";
    PROGMEM Language_Str LOADING_WARNING        = u8"About to home to loading position.\nEnsure the top and the bed of the printer are clear.\n\nContinue?";
    PROGMEM Language_Str HOMING_WARNING         = u8"About to re-home plunger and auto-level. Remove syringe prior to proceeding.\n\nContinue?";
  #endif

  MAKE_LANGUAGE_STRINGS();
}; // namespace Language_en
