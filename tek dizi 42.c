#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char mesaj[100];
int i;
	
	printf("Mesaji giriniz:");
	gets(mesaj);
	
	printf("mesajinizin ascii kodu:\n");
	for(i=0;mesaj[i]!='\0';i++)
	{
		printf("%c karakteri %d \n",mesaj[i],mesaj[i]);
	}
	

{
