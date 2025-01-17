#include <stdio.h>

#define MAX_SIZE 10

int main() {
    char A[MAX_SIZE] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'}; 
    char C;
    int count = 0;

    printf("Masukkan karakter: ");
    scanf(" %c", &C); // Memastikan membaca karakter dengan spasi di depan

    printf("Array: ");
    for (int i = 0; i < MAX_SIZE; i++) {
        printf("%c ", A[i]);
    }
    printf("\n");

    // karakter cek
    for (int i = 0; i < MAX_SIZE; i++) {
        if (A[i] == C) {
            count++;
        }
    }

    if (count > 0) {
        printf("ADA\nJumlah karakter yang sama: %d\n", count);
    } else {
        printf("TIDAK ADA\n");
    }

    return 0;
}

