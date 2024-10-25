#include <stdio.h>

int main() {
    int N;
    // input dari pengguna
    printf("Masukkan sebuah bilangan : ");
    scanf("%d", &N);
    // Cek kondisi
    if (N > 50) {
        N = N - 25;
        N = N + 10;
    } else {
        N = N + 10;
    }
    // Output hasil
    printf(" N = %d\n", N);
    
    return 0; 
}

