#include <stdio.h>
#include <stdlib.h>



int main() {
	char aylar[12][10]={"ocak","subat","mart","nisan","mayis","haziran","temmuz","agustos","eylul","ekim","kasim","aralik"};
char girilenay[100];
int i,a;

	printf("Ayi giriniz:");
	gets(girilenay);
	
	
	for(i=0;i<=12;i++)
	{
		a=strcmp(aylar[i],girilenay);
		
		if(a==0)
		{
			printf("%s yilin %d.ayidir.",aylar[i],i+1);
		}
	}
	
}
