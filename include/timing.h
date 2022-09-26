#pragma once

// Function inclusions
#include "utils.h"

// ===== Function hoists =======================================================

// Get the current time as a tm struct
struct tm *get_current_time(void);

// Given a tm struct, convert timing to a HH:MM:SS string
char *convert_time_to_string(struct tm *time_struct);

// Free a time string
void free_time_string(char *time_string);

// Delay the program for a given number of milliseconds
void delay_ms(int milliseconds);