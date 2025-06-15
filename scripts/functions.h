// utils.h
#ifndef FUNCTIONS_h
#define FUNCTIONS_h

// Function to clear the terminal screen
void clear_screen();

// Convert string to uppercase
void to_upper(char* s);

// Get option letter (0 -> A, 1 -> B, ...)
const char* option_letter(int index);

// Slowly print text character by character
void print_slow(const char* text, int delay_us);

// Exploration node handler
void run_exploration_node(int base_node_id, int option_count, int next_node_id);

// Node handler
void run_node(int start_id);

#endif
