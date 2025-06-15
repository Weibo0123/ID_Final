#include <stdio.h>
#include <ctype.h>
#include <unistd.h>  // for usleep()
#include <string.h>
#include "nodes.h"

void run_node(int start_id);

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

// Slowly print text character by character
void print_slow(const char* text, int delay_us) {
    for (int i = 0; text[i]; i++) {
        putchar(text[i]);
        fflush(stdout);  // force display immediately
        usleep(delay_us);
    }
}

// Exploration node handler
void run_exploration_node(int base_node_id, int option_count, int next_node_id) {
    int visited[4] = {0};
    int remaining = option_count;
    int first_time = 1;

    while (remaining > 0) {
        clear_screen();
    
        if (first_time) {
            print_slow(nodes[base_node_id].text, 50000);
            first_time = 0;
        } else {
            printf("You have more to explore here. What do you want to check?\n\n");
        }

        for (int i = 0; i < option_count; i++) {
            if (!visited[i] && nodes[base_node_id].options[i] != NULL) {
                printf("%s. %s\n", option_letter(i), nodes[base_node_id].options[i]);
            }
        }

        char input[16];
        int matched = 0;

        while (!matched) {
            printf("\n> ");
            fgets(input, sizeof(input), stdin);
            input[strcspn(input, "\n")] = '\0';
            to_upper(input);

            for (int i = 0; i < option_count; i++) {
                if (visited[i] || nodes[base_node_id].options[i] == NULL) continue;

                if (strcmp(input, option_letter(i)) == 0) {
                    int next = nodes[base_node_id].next[i];

                    clear_screen();
                    print_slow(nodes[next].text, 50000);
                    printf("\n(Press Enter to continue...)");
                    fgets(input, sizeof(input), stdin);

                    visited[i] = 1;
                    remaining--;
                    matched = 1;
                    break;
                }
            }

            if (!matched) {
                printf("Invalid choice. Try again.\n");
            }
        }
    }

    clear_screen();
    printf("You have finished exploring.\n(Press Enter to continue...)\n");
    getchar();
    run_node(next_node_id);
}

// Node handler
void run_node(int start_id) {
    int current = start_id;
    char input[16];

    while (1) {
        if (current == 1) {
            run_exploration_node(1, 4, 11); // Forest exploration -> node 20
            return;
        } else if (current == 2) {
            run_exploration_node(2, 4, 12); // Farm exploration -> node 21
            return;
        }

        clear_screen();
        print_slow(nodes[current].text, 50000);

        for (int i = 0; i < MAX_OPTIONS; i++) {
            if (nodes[current].options[i] != NULL) {
                printf("%s. %s\n", option_letter(i), nodes[current].options[i]);
            }
        }

        int matched = 0;
        while (!matched) {
            printf("\n> ");
            fgets(input, sizeof(input), stdin);
            input[strcspn(input, "\n")] = '\0';
            to_upper(input);

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
