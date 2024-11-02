#include <stdio.h>
int main ()
{
	int jamMasuk, jampulang;
	int lamabekerja;
	printf("Jam Masuk : ");
	scanf("%d", &jamMasuk);
	printf("Jam Pulang : ");
	scanf("%d", &jampulang);
	if(jampulang >= jamMasuk){
		lamabekerja = jampulang-jamMasuk;
	}else{
		lamabekerja = (12 - jamMasuk) + jampulang;
	}
	printf ("Lama bekerja %d Jam", lamabekerja);
	return 0;
}
