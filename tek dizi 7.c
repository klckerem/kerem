#include <stdio.h>
#include <stdlib.h>



int main() {
	int main() {

	char dizi[100];
	
	int k;
	
	printf("metni gir:");
	scanf("%s",&dizi);
	
	k=dizi[0];
	k-=32;
	dizi[0]=k;
	
	printf("%s",dizi);
}
