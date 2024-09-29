#include <stdio.h>

int main()
{

	
	float diameter = 15.0;
	float r = diameter/2.0;
	float volume;
	
	printf("==========Program Mencari Volume Bangun Ruang Berbentuk Bola==========\n");
	printf("Di Ketahui Diameter dari Sebuah bangun ruang berbentuk bola adalah 15CM\n ");
	printf(" 4/3 x 3.14 x 7.5 x 7.5 x 7.5 = ");
	volume =(4.0 / 3.0)*3.14* (r*r*r) ;
	printf("%.2f cm^3",volume);
	
	
}
