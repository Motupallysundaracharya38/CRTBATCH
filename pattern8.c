#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=7;i>=1;i--)
	{
       for(k=7;k>i;k--)
       {
       	printf("");
	   }
       for(j=1;j<=i;j++)
		{
			printf("%c",j+64);
		}
		
		printf("\n");
	}
	
}
