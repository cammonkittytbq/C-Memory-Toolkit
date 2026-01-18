#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Custom memory allocation utility
void check_memory() {
    size_t size = 1024;
    char *buffer = (char *)malloc(size);

    if (buffer != NULL) {
        strcpy(buffer, "Memory status: OK");
        printf("%s\n", buffer);
        free(buffer);
    } else {
        printf("Allocation failed!\n");
    }
}

int main() {
    printf("Initializing Memory Toolkit...\n");
    check_memory();
    return 0;
}
