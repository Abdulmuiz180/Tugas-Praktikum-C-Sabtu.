#include<stdio.h>

int main(){
	int bilangan;
	//input bilangan positif 
	printf("Masukan bilangan bulat positif  : " );
	scanf("%d", &bilangan);
	// memeriksa apakah bilangan tersebut genap atau ganjil
	if (bilangan < 0){
		printf("Silahkan masukan bilangan bulat positif.\n");
	}else if (bilangan %2 == 0){
		printf("GENAP.\n");
	}else{
		printf("GANJI.\n");
	}
	return 0;
}
