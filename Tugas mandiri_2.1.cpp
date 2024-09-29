#include <stdio.h>

int main()
{
	
	float alas=8.0;
	float tinggi=5.0;
	float luas;
	
	printf("Diketahui Panjang Alas Segitiga 8 CM.\n");
	printf("Dan tinggi Segitiga 5 CM.\n");
	printf("Maka luas segitiga tersebut adalah...\n");
	
	luas=0.5*alas*tinggi;
	
	printf("1/2 x Alas x Tinggi = %2.fcm^2", luas);
	
	return 0;
}
