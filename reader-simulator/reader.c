#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>

void generateEPC(char* epc) {
    for (int i = 0; i < 12; ++i) {
        sprintf(epc + i * 2, "%02X", rand() % 256);
    }
}

int main() {
    while (1) {
        struct timeval tv;

        if (gettimeofday(&tv, NULL) == -1) {
            return 1;
        }

        double time_in_mill = (tv.tv_sec) * 1000 + (tv.tv_usec) / 1000;

        srand((unsigned int)time_in_mill);

        char epc[25];
        generateEPC(epc);

        // Construct the JSON
        printf("[{\"epc\":\"%s\",\"readingDate\":%.0f,\"antenna\":1}]\n", epc, time_in_mill);

        // TO-DO cURL :

        sleep(1);
    }

    return 0;
}
