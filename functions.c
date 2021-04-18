#include<stdio.h>
int sum(int a);
int main()
{
	int x;
	printf("Enter a number:");
	scanf("%d",&x);
	int z=sum(x);
	printf("Sum of digits of the number:%d",z);
	return 0;
}
int sum(int p)
{
	if(p==0)
	{
		return 0;
	}
	else
	{
		return p%10+sum(p/10);
	}
}
