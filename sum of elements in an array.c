#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[100],size,i,sum=0;
	printf("enter the array size\n");
	scanf("%d",&size);
	printf("enter array elements \n");
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<size;i++)
	sum=sum+arr[i];
	printf("sum of the array =%d\n",sum);
	getch();
}
