#include <stdio.h>

int main()
{
	int celcius;
	float fahrenheit, reamur;
	printf("Masukan suhu dalam celcius  : " );
	scanf("%d", &celcius);
	fahrenheit = (celcius * 9.0 / 5.0 ) + 32;
	reamur = celcius * 4.0 / 5.0;
	printf("Suhu dalam fahrenheit  : %.2f\n",fahrenheit);
	printf("Suhu dalam reamur  : %.2f\n",reamur);
	
	return 0;
}
