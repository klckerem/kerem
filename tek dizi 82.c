#include <stdio.h>

int main() {

int elsayisi,ort,i,dizi[1000],eksikel,toplam=0;

printf("dizinin eleman sayisini giriniz: ");
scanf("%d",&elsayisi);
printf("dizinin ortalamasini giriniz: ");
scanf("%d",&ort);

if(elsayisi<1 )
    printf("hatali giris");
else
{
	printf("dizinin eleman sayisinin bir eksigi kadar eleman giriniz\n");

    for(i=0;i<elsayisi-1;i++)
	    scanf("%d",&dizi[i]);

    for(i=0;i<elsayisi-1;i++)
	    toplam+=dizi[i];

    eksikel=elsayisi*ort-toplam;
    printf("eksik eleman: %d",eksikel);
}
return 0;
}

