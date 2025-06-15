#include <stdio.h>
#include <string.h>
#include "nodes.h"
#include "functions.h"

void run_game() {
    int current = 0;
    char input[16];

    while (1) {
        clear_screen();
        print_slow(nodes[current].text, 50000);  // 75 ms per character

        // Display available options
        for (int i = 0; i < MAX_OPTIONS; i++) {
            if (nodes[current].options[i] != NULL) {
                printf("%s. %s\n", option_letter(i), nodes[current].options[i]);
            }
        }

        int matched = 0;

        while (!matched)
        {
        printf("\n> ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0';
        to_upper(input);

        // Match input with valid options
        for (int i = 0; i < MAX_OPTIONS; i++) {
            if (nodes[current].options[i] == NULL) continue;

            if (strcmp(input, option_letter(i)) == 0) {
                int next = nodes[current].next[i];
                if (next == -1) {
                    printf("\nThe story ends here. Thank you for playing.\n");
                    return;
                }
                current = next;
                matched = 1;
                break;
            }
        }

        if (!matched) {
            printf("\nInvalid choice. Try again.\n");
        }
    }
    }
}

int main() {
    printf("=== Terminal Survival ===\n");
    run_game();
    return 0;
}
