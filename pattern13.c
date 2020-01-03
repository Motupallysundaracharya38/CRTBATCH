#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=1;j--)
		{
			if(j<=i)
			{
				printf("%d",i);
			}
			else
				{
					printf("%d",j);
				}
		
		}
		for(i=2;i<=n;i++)
		{
	
		for(j=2;j<=n;j++)
		{
			if(j<=i)
			{
				printf("%d",i);
			}
			else
				{
					printf("%d",j);
				}
			}
			printf("\n");
	}
}
}
