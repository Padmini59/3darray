#include<stdio.h>
main()
{
	int a[3][3],i,j,sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		
			printf("Enter element a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("The matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",a[i][j]);
			if((i+j)%2==0)
			{
				sum=sum+a[i][j];
			}
		}
		printf("\n");
	}
	printf("The sum of diagonals is:%d",sum);
}
