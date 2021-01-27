#include<stdio.h>
#include<stdlib.h>
int i=-1,max,temp,*arr;
void insert()
{
	if(i==max-1)
	{
		printf("Queue is full\n");
	}
	else
	{
		printf("Enter your value: ");
		scanf("%d",&arr[++i]);
	}
}
void delet()
{
	if(i==-1)
	{
		printf("Queue is empty\n");
	}
	else
	{
		int k;
		printf("%d is deleted\n",*(arr));
		for(k=0;k<i;k++)
		{
			temp=*(arr+k+1);
			arr[k]=temp;
		}
		i--;
	}
}
void printQ()
{
	for(temp=0;temp<=i;temp++)
	{
		printf("%d|",*(arr+temp));
	}
}
int main()
{
	printf("Enter the size of the Queue: ");
	scanf("%d",&max);
	arr=(int*)malloc(max*sizeof(int));
	do
	{
		printf("Enter 1:for insert, 2:for delete, 3:for print Queue, 4:for exit\n");
		scanf("%d",&temp);
		switch(temp)
		{
			case 1:insert();
				break;
			case 2:delet();
				break;
			case 3:printQ();
				break;
			case 4:
				break;
			default:
				printf("Wrong input\n");
		}
	}while(temp!=4);
	return(0);
}
