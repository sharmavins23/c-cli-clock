#include "cli.h"

// Clear the CLI screen
void cli_clear(void) {
    // Use an ANSI escape regex to clear screen
    printf("\e[1;1H\e[2J");
}

// Hide the CLI cursor
void cli_hide_cursor(void) {
    // ANSI escape character for hiding the cursor
    printf("\x1b[?25l");
}

// Move the CLI cursor to the top left corner of the screen
void cli_move_cursor_top_left(void) {
    // ANSI escape character for moving the cursor
    printf("\x1b[7A");
}