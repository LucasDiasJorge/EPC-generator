#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random 96-bit EPC
void generateEPC(char* epc) {
    for (int i = 0; i < 12; ++i) {
        sprintf(epc + i * 2, "%02X", rand() % 256);
    }
}

int main() {
    // Seed for the random number generator
    srand((unsigned int)time(NULL));

    // Number of EPCs to generate
    int numEPCs = 5;

    for (int i = 0; i < numEPCs; ++i) {
        char epc[25];  // Each byte represented by two characters, plus a null terminator
        generateEPC(epc);
        printf("EPC %d: %s\n", i + 1, epc);
    }

    return 0;
}
