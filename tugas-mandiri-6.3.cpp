#include <stdio.h>

int main() {
    
    int i;

    int nilai = 1;

    for (i = 0; i < 11; i++) {
        printf("%d ", nilai);
        nilai *= 2;
    }

    printf("\n");

    return 0;
}

