#ifndef NODE_H
#define NODE_H

#define MAX_OPTIONS 4

// Define the structure for each game node
typedef struct {
    const char* text;                    // The main narrative text of the node
    const char* options[MAX_OPTIONS];   // Option texts (A, B, C, D)
    int next[MAX_OPTIONS];              // Indexes of the next node for each option
} Node;

extern Node nodes[];
extern int node_count;

#endif