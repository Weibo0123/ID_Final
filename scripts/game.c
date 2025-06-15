// game.c
#include <stdio.h>
#include <string.h>
#include "nodes.h"
#include "functions.h"

int main() {
    printf("=== Terminal Survival ===\n");
    run_node(0);  // Start from node 0 (intro)
    return 0;
}
