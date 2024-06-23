#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void hexToASCII(const char *hexString, char *output) {
    while (*hexString) {
        // Convert first half of hex to decimal
        int high = (*hexString >= '0' && *hexString <= '9') ? *hexString - '0' : (*hexString - 'A' + 10);
        hexString++;

        // Convert second half of hex to decimal
        int low = (*hexString >= '0' && *hexString <= '9') ? *hexString - '0' : (*hexString - 'A' + 10);
        hexString++;

        // Combine the two halves and convert to ASCII
        *output++ = (high << 4) | low;
    }
    *output = '\0'; // Null-terminate the output string
}

int main() {
    char hexString[100];
    char asciiOutput[256]; // Adjust size according to your needs

    FILE *fp;

    fp = fopen("HEX.hex", "r");
    if (fp == NULL) {
        perror("Error opening the file");
        return 1;
    }

    // Read each line from the file
    while (fgets(hexString, sizeof(hexString), fp) != NULL) {
        // Remove the newline character if present
        size_t len = strlen(hexString);
        if (len > 0 && hexString[len - 1] == '\n') {
            hexString[len - 1] = '\0';
        }

        // Convert hex to ASCII
        hexToASCII(hexString, asciiOutput);

        // Print the ASCII result
        printf("ASCII Output: %s\n", asciiOutput);
    }

    fclose(fp);
    return 0;
}

