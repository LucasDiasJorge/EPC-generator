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

    srand((unsigned int)time(NULL));

    char epc[25];  // Each byte represented by two characters, plus a null terminator
    generateEPC(epc);
    printf("%s\n", epc);

    return 0;
}
