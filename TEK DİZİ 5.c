#include <stdio.h>
#include <stdlib.h>



int main(){
	int n,A[100],B[100],i,x;
	
	printf("diziniz kac elemanli olsun?");
	scanf("%d",&n);
	
	for (i=0;i<n;i++)
	{
		printf("%d. dizi elemanini giriniz:",i+1);
		scanf("%d",&A[i]);
	}
	x=n-1;
	for (i=0;i<n;i++)
	{
		B[i]=-A[x];
		x--;
	}
	
	
}

	
