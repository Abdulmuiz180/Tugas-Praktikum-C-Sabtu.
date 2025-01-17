#include <stdio.h>

int main() {
    int A[11] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35}; 
    int i, j = 0;  //j digunakan untuk indeks array baru untuk menyimpan nilai genap
    int arrayGenap[11]; 

    printf("Nilai genap yang ditemukan dalam array:\n");
    for (i = 0; i < 11; i++) {
        if (A[i] % 2 == 0) { 
            arrayGenap[j] = A[i]; 
            printf("%d ", arrayGenap[j]); 
            j++;  
        }
    }

    return 0;
}

