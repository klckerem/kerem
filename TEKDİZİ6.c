#include <stdio.h>
#include <stdlib.h>



int main() {
	int n,i,A[100];
	
	printf(" DÝZÝ ELEMAN SAYÝSÝ(N)\n");
	scanf("%d",&n);
	

	for (i=0;i<n;i++)
	{
		if (i%2==0)
		{
			A[i]=1;
		}
		else 
		{
			A[i]=0;
		}
	}
	
	for (i=0;i<n;i++)
	{
		printf("%d",A[i]);
	}
	
	
}
