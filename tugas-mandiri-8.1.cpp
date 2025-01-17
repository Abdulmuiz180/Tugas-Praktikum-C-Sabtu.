#include <stdio.h>

#define MAX_SIZE 11 // Ukuran maksimum array A

int main() {
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999}; // Data yang diberikan
    int A[MAX_SIZE]; // Array A dengan ukuran 11
    int i, j;

    // Bagian a: Menyimpan semua data hingga array penuh atau menemukan 999
    for (i = 0; i < MAX_SIZE; i++) {
        if (data[i] == 999) break; // Berhenti jika menemukan 999
        A[i] = data[i];
    }
    printf("Bagian a:\nA: ");
    for (j = 0; j < i; j++) printf("%d ", A[j]);
    printf("\n\n");

    // Bagian b: Menyimpan hanya data > 9, sesuai posisi dalam data asli
    for (i = 0; i < MAX_SIZE; i++) A[i] = 0; // Reset array A ke 0
    for (i = 0; i < MAX_SIZE && data[i] != 999; i++) {
        if (data[i] > 9) A[i] = data[i];
    }
    printf("Bagian b:\nA: ");
    for (j = 0; j < MAX_SIZE; j++) printf("%d ", A[j]);
    printf("\n\n");

    // Bagian c: Menyimpan hanya data > 9, berurutan tanpa kosong
    for (i = 0; i < MAX_SIZE; i++) A[i] = 0; 
    j = 0; // Indeks untuk array A
    for (i = 0; i < MAX_SIZE && data[i] != 999; i++) {
        if (data[i] > 9) {
            if (j < MAX_SIZE) {
                A[j++] = data[i];
            } else {
                break;
            }
        }
    }
    printf("Bagian c:\nA: ");
    for (i = 0; i < MAX_SIZE; i++) printf("%d ", A[i]);
    printf("\n\n");

    // Bagian d: Menyimpan hanya nilai ganjil secara berurutan
    for (i = 0; i < MAX_SIZE; i++) A[i] = 0; 
    j = 0; // Indeks untuk array A
    for (i = 0; i < MAX_SIZE && data[i] != 999; i++) {
        if (data[i] % 2 != 0) { // Jika bilangan ganjil
            if (j < MAX_SIZE) {
                A[j++] = data[i];
            } else {
                break;
            }
        }
    }
    printf("Bagian d:\nA: ");
    for (i = 0; i < MAX_SIZE; i++) printf("%d ", A[i]);
    printf("\n\n");

    // Bagian e: Menyimpan hanya nilai ganjil sesuai posisi asli
    for (i = 0; i < MAX_SIZE; i++) A[i] = 0; 
    for (i = 0; i < MAX_SIZE && data[i] != 999; i++) {
        if (data[i] % 2 != 0) { 
            A[i] = data[i];
        }
    }
    printf("Bagian e:\nA: ");
    for (j = 0; j < MAX_SIZE; j++) printf("%d ", A[j]);
    printf("\n");

    return 0;
}


