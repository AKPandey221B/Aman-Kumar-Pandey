#include<stdio.h>
main()
{
	int arr[10][10];
	int i,j,m,n;
		printf("mandn\n");

		scanf("%d%d",&m,&n);
		printf("enter matrices");
		for(i=0;i<m;i++)
		{

		for(j=0;j<n;j++)
		{
		scanf("%d",&arr[i][j]);
		}}
		printf("the matrices \n");

		for(i=0;i<m;i++)
		{
		for(j=0;j<n;j++)
		{
		printf("%d ",arr[i][j]);
		}
		printf("\n");
		}

		printf("the transposse\n");

		for(j=0;j<n;j++)
		{
		for(i=0;i<m;i++)
		{
		printf("%d ",arr[i][j]);
		}

printf("\n");
}




}

