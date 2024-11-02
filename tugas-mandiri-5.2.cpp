#include <iostream>
using namespace std;

int main() {
    int kode;
    char jenis;
    float harga, diskon, hargaSetelahDiskon;
    cout << "Masukkan kode barang: ";
    cin >> kode;
    cout << "Masukkan jenis barang (A/B/C): ";
    cin >> jenis;
    cout << "Masukkan harga barang: ";
    cin >> harga;

    switch(jenis) {
        case 'A':
        case 'a':
            diskon = 0.10; 
            break;
        case 'B':
        case 'b': 
            diskon = 0.15; 
            break;
        case 'C':
        case 'c': 
            diskon = 0.20; 
            break;
        default:
            cout << "Jenis barang tidak valid!" << endl;
            return 1;
    }

    // Menghitung harga setelah diskon
    hargaSetelahDiskon = harga - (harga * diskon);

    // Menampilkan hasil
    cout << "Jenis barang " << jenis << " mendapat diskon = " << (diskon * 100) << "%, "
         << "Harga setelah didiskon = " << hargaSetelahDiskon << endl;

    return 0;
}

