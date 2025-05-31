#include <stdio.h>
#include <ctype.h>

// Clear the terminal screen
void clear_screen() {
    printf("\033[2J\033[H");
}

// Convert input to uppercase
void to_upper(char* s) {
    for (int i = 0; s[i]; i++) {
        s[i] = toupper(s[i]);
    }
}

// Get the letter label for option index (0 = A, 1 = B, ...)
const char* option_letter(int index) {
    static const char* letters[] = {"A", "B", "C", "D"};
    return letters[index];
}