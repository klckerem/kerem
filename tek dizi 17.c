#include <stdio.h>
#include <stdlib.h>



int main() {
int saat,dakika,saniye,islem;

	printf("Saat bilgisini AA:BB:CC formatinda giriniz:");
	scanf("%d:%d:%d",&saat,&dakika,&saniye);
	
	islem=((saat*60)+(dakika)+(saniye/60));
	
	printf("Toplam %d dakika..",islem);

	
}
