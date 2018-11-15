#include<stdio.h>
main()
{
int x[10],i,j,temp;
printf("elements\n");
for(i=0;i<10;i++)
scanf("%d",&x[i]);
for(i=0;i<10;i++)
{
for(j=0;j<9;j++)
{
if(x[j]>x[j+1])
{
temp=x[j];
x[j]=x[j+1];
x[j+1]=temp;
}}}
printf("sorted elements are");
for(i=0;i<10;i++)
printf("%d ",x[i]);
}
