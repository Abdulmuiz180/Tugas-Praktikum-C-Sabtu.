#include <stdio.h>

int main() {
    double saldo = 1000000;
    double bunga = 0.02; 
    int bulan = 10; 

    // Hitung saldo setiap bulan
    for (int i = 1; i <= bulan; i++) {
        saldo += saldo * bunga; 
        printf("Saldo setelah bulan ke-%d: Rp%.2f\n", i, saldo);
    }

    return 0;
}

