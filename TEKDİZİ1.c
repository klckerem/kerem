#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ifade[100];
int sayac=0,l,m;

		printf("Dizi elemanlarini giriniz:");
		gets(ifade);
		
		for(int i=0;ifade[i]!='\0';i++)
		{
			m=0;
			if(i>0)
			{
				l=i-1;
				while (l>=0)
				{
					if(ifade[i]==ifade[l])
					{
						m++;
					}
					l--;
				}
			}
			
			
			if(m<=0)
			{
				for(int k=0;ifade[k]!='\0';k++)
				{
					if(ifade[i]==ifade[k])
					{
						sayac++;
					}
				}
				printf("%c den %d tane var..\n",ifade[i],sayac);
			}
			sayac=0;
			
		
		}
	return 0;
}
