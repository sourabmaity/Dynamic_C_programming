#include<stdio.h>
int p=0,next=1;
void fib(int n)
{
	int temp;
	printf("%d ",p);
	if(n==1)
	{
		return;
	}
	else
	{
		temp=p+next;
		p=next;
		next=temp;
		fib(n-1);
	}
	
}
int main()
{
	int i;
	printf("Enter your value: ");
	scanf("%d",&i);
	fib(i);
}
