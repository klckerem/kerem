#include <stdio.h>
#include <stdlib.h>



int main() {
	int i=0,k=0,girilensayi,temp;
float kalan;
	printf("Sayiyi giriniz:");
	scanf("%d",&girilensayi);
	temp=girilensayi;
	
	while (girilensayi>0)
	{
		kalan=girilensayi%10;
		girilensayi=(girilensayi-kalan)/10;
		i++;
	}
	
	for(k=0;k<i;k++)
	{
		kalan=temp%10;
		printf("%d.basamak sonucu:%.2f\n",k+1,kalan/i);
		temp=(temp-kalan)/10;
	}
	
	
}
