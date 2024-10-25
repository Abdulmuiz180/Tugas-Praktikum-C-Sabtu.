#include <stdio.h>
int main (){
	int angka;
	// input dari pengguna
	printf("Masukan bilangan bulat positif : ");
	scanf("%d", &angka);
	//cek apakah bilangan positif 
	if(angka < 0 ){
		printf("Silahkan masukan bilangan bulat positif.\n");
		return 1;//menghentikan program jika input tidak valid
	}
	//cek apakah bilangan genap atau ganjil 
	if (angka%2 == 0){
		printf("%d adalah GENAP.\n", angka);
	}else{
		printf("%d adalah GANJIL.\n", angka);
	}
	return 0;
	
}
