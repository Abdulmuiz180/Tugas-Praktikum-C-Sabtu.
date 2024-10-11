#include<stdio.h>
#include<math.h>
int main()
{
	float alas, tinggi, miring;
	
	printf("Masukan sisi alas segitiga (cm)  : ");
	scanf("%f",&alas);
	printf("Masukan sisi tinggi segitiga (cm  : ");
	scanf("%f",tinggi);
	
	miring=sqrt((alas/2)*(alas/2)+tinggi*tinggi);
	
	printf("Sisi miring segitiga adalah  : %.2f cm\n",miring);
	
	return 0;
}
