#include <cstdio>

int main() {
    int jamMasuk, jamKeluar, lamaParkir, biaya;

    // Input jam masuk dan jam keluar
    printf("Masukkan jam masuk (1-12): ");
    scanf("%d", &jamMasuk);
    printf("Masukkan jam keluar (1-12): ");
    scanf("%d", &jamKeluar);

    // Menghitung lama parkir
    if (jamKeluar >= jamMasuk) {
        lamaParkir = jamKeluar - jamMasuk;
    } else {
        
        lamaParkir = (12 - jamMasuk) + jamKeluar;
    }

    // Menghitung biaya parkir
    if (lamaParkir <= 2) {
        biaya = 2000;
    } else {
        biaya = 2000 + (lamaParkir - 2) * 500;
    }

    // Menampilkan hasil
    printf("Lama parkir: %d jam\n", lamaParkir);
    printf("Biaya = %d rupiah\n", biaya);

    return 0;
}

