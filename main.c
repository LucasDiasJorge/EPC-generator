#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

// Function to generate a random 96-bit EPC
void generateEPC(char* epc) {
    for (int i = 0; i < 12; ++i) {
        sprintf(epc + i * 2, "%02X", rand() % 256);
    }
}

int main() {
    struct timeval  tv;

    if(gettimeofday(&tv, NULL) == -1){
        return 1;
    }
    
    double time_in_mill = (tv.tv_sec) * 1000 + (tv.tv_usec) / 1000 ;
    
    srand((unsigned int)time_in_mill);

    char epc[25];  // Each byte represented by two characters, plus a null terminator
    generateEPC(epc);
    printf("%s\n", epc);

    return 0;
}