#include <stdio.h>
#include <math.h>

int main(){
	
	float alas, tinggi, luas, keliling, sisiMiring;
	printf("Masukan Panjang alas segitiga (cm)  : ");
	scanf("%f",&alas);
	printf("Masukan tinggi segitiga (cm)  : ");
	scanf("%f",&tinggi);
	luas=0.5*alas*tinggi;
	sisiMiring=sqrt((alas/2)*(alas/2)+tinggi*tinggi);
	keliling = alas+2*sisiMiring;
	printf("Luas seegitiga  : %.2f cm^2\n",luas);
	printf("Keliling segitiga  : %.2f cm\n",keliling);
	
	return 0;
}
