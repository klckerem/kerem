#include <stdio.h>
#include <stdlib.h>



int main() {
	char cumle[100];
int i,m=0;
	
	printf("cumleyi giriniz:");
	gets(cumle);
	
	for(i=0;cumle[i]!='\0';i++)
	{
		if((cumle[i]==' ')&&(cumle[i-1]=='a'))
		{
			m++;
		}
		if ((cumle[i+1]=='\0')&&(cumle[i]=='a'))
		{
			m++;
		}
	}
	printf("%d",m);
	
	
}
