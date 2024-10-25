#include <stdio.h>

int main() {
    int N;

    // Input dari pengguna
    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &N);

    // cek kondisi
    if (N > 50) {
        N = N - 25;
    } else {
        N = N + 10;
    }

    // Menampilkan hasil akhir
    printf("N = %d\n", N);

    return 0;
}

