#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){

char karakterler[8],A,B,C,D,E,F,temp2[10];
int i,boyut,toplam,n;

	printf("Sayiyi giriniz:");
	scanf("%s",karakterler);
	
	boyut=strlen(karakterler);
	n=boyut;
	
	//elemanlari ters cevirme
			
	for(i=0;i<=boyut;i++)
	{
		temp2[i]=karakterler[n-1];
		n--;
	}
	
	for(i=0;i<=boyut;i++)
	{
		karakterler[i]=temp2[i];
	}
	
	//ters cevirme islemi bitti 
	
	
	
	toplam=0;
	
	for(i=0;i<boyut;i++)
	{
		if(karakterler[i]=='A' || karakterler[i]=='B' || karakterler[i]=='C' || karakterler[i]=='D' || karakterler[i]=='E' || karakterler[i]=='F')
		{
			switch (karakterler[i])
			{
				case 'A': toplam+=10*pow(16,i); break;
				case 'B': toplam+=11*pow(16,i); break;
				case 'C': toplam+=12*pow(16,i); break;
				case 'D': toplam+=13*pow(16,i); break;
				case 'E': toplam+=14*pow(16,i); break;
				case 'F': toplam+=15*pow(16,i); break;
			}
		}
		else
		{
			switch (karakterler[i])
			{
				case '1': toplam+=1*pow(16,i); break;
				case '2': toplam+=2*pow(16,i); break;
				case '3': toplam+=3*pow(16,i); break;
				case '4': toplam+=4*pow(16,i); break;
				case '5': toplam+=5*pow(16,i); break;
				case '6': toplam+=6*pow(16,i); break;
				case '7': toplam+=7*pow(16,i); break;
				case '8': toplam+=8*pow(16,i); break;
				case '9': toplam+=9*pow(16,i); break;
			}
		}
	}
	
	printf("%d",toplam);
	


	return 0;
}
