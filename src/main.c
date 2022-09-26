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

        // Iterate through 0 to 5 (for each row that we're printing)
        for (int i = 0; i < 5; i++) {
            // Then, iterate through the digits in the time string
            for (int j = 0; j < 8; j++) {
                // Get the current digit
                char digit = time_string[j];
                // Get the index of the digit
                int digit_index = digits_get_digit_index(digit);
                // Get the splice for the digit
                const char *splice = digit_get_splice(digit_index, i);

                // Print the splice
                printf("%s ", splice);
            }
            // Print a newline to move to the next row
            printf("\n");
        }

        // Wait for a short amount of time
        timing_delay_ms(1000);

        // Clear and move the cursor back to the top left corner of the screen
        cli_clear();
        cli_move_cursor_top_left();
    }

    return 0;  // Exit with no errors
}