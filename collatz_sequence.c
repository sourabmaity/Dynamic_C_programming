#include<stdio.h>
int collatz(int val)
{
	int temp;
	printf("%d ",val);
	if(val==1)
	{
		return(1);
	}
	else
	{
		if(val%2==1)
		{
			temp=3*val+1;
		}
		else
		{
			temp=val/2;
		}
		collatz(temp);
	}
}
int main()
{
	int i;
	printf("Enter your value: ");
	scanf("%d",&i);
	collatz(i);
}
