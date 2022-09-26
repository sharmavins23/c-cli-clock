#include "main.h"
// * Main function and entrypoint for the program

int main() {
    // Clear screen and hide the cursor for printing
    cli_clear();
    cli_hide_cursor();

    // Loop forever
    for (;;) {
        // Get the current time as a tm struct
        struct tm *time_struct = timing_get_current_time();
        // Convert it to a HH:MM:SS string
        char *time_string = timing_convert_time_to_string(time_struct);

        // Print the time string
        printf("%s", time_string);

        // Wait for a short amount of time
        timing_delay_ms(1000);

        // Clear and move the cursor back to the top left corner of the screen
        cli_clear();
        cli_move_cursor_top_left();
    }

    return 0;  // Exit with no errors
}