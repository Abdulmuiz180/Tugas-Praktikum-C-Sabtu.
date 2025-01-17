#include <stdio.h>

#define MAX_SIZE 11

int main() {
    int A[MAX_SIZE] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19}; // Array data
    int N, found = 0;

    printf("Masukkan bilangan integer: ");
    scanf("%d", &N);

    printf("Array: ");
    for (int i = 0; i < MAX_SIZE; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // bilangan
    for (int i = 0; i < MAX_SIZE; i++) {
        if (A[i] == N) {
            if (!found) {
                printf("ADA\nLokasi bilangan yang sama: ");
                found = 1;
            }
            printf("%d ", i); // lokasi
        }
    }

    if (!found) {
        printf("TIDAK ADA");
    }
    printf("\n");

    return 0;
}

