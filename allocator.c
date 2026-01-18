#include <stdio.h>
#include <stdlib.h>
int main() {
    int *p = malloc(sizeof(int));
    if(p) {
        *p = 42;
        printf("Memory check: %d\n", *p);
        free(p);
    }
    return 0;
}
