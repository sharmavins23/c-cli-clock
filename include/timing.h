#pragma once

// Function inclusions
#include "utils.h"

// ===== Function hoists =======================================================

// Get the current time as a tm struct
struct tm *timing_get_current_time(void);

// Given a tm struct, convert timing to a HH:MM:SS string
char *timing_convert_time_to_string(struct tm *time_struct);

// Free a time string
void timing_free_time_string(char *time_string);

// Delay the program for a given number of milliseconds
void timing_delay_ms(int milliseconds);