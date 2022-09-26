#include "timing.h"
// * Handles all timing control and timekeeping, as well as time conversions

// Get the current time as a tm struct
struct tm *timing_get_current_time(void) {
    // Get the current time
    time_t current_time = time(NULL);

    // Convert the time to a struct
    struct tm *current_time_struct = localtime(&current_time);

    // Return the struct
    return current_time_struct;
}

// Given a tm struct, convert timing to a HH:MM:SS string
char *timing_convert_time_to_string(struct tm *time_struct) {
    // Create a string to hold the time
    char *time_string = malloc(9 * sizeof(char));

    // Convert the time to a string
    strftime(time_string, 9, "%H:%M:%S", time_struct);

    // Return the string
    return time_string;
}

// Free a time string
void timing_free_time_string(char *time_string) {
    // Free the string
    free(time_string);
}

// Delay the program for a given number of milliseconds
void timing_delay_ms(int milliseconds) {
    // Convert milliseconds to microseconds
    int microseconds = milliseconds * 1000;

    // Delay the program
    usleep(microseconds);
}