#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *front,*rear,*ptr;
void insert()
{
	if(rear->data!=NULL)
	{
		printf("Queue is full\n");
	}
	else
	{
		printf("Enter your value: ");
		scanf("%d",&rear->data);
		rear=rear->next;
	}
}
void delet()
{
	if(front->data==NULL)
	{
		printf("Queue is empty\n");
	}
	else
	{
		printf("%d is deleted",front->data);
		front->data=NULL;
		front=front->next;
	}
}
void printQ()
{
	ptr=front;
	printf("Queue : ");
	while(1)
	{
		if(ptr->next==rear)
		{
			printf("%d ",ptr->data);
			break;
		}
		else
		{
			printf("%d ",ptr->data);
			ptr=ptr->next;
		}
	}
	printf("\n");
}
int main()
{
	int n,i,temp;
	printf("Enter your size of the queue: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		ptr=(struct node*)malloc(sizeof(struct node));
		ptr->data=NULL;
		if(rear!=NULL)
		{
			rear->next=ptr;
			rear=ptr;
		}
		if(front==NULL)
		{
			front=ptr;
			rear=ptr;
		}
	}
	rear->next=front;
	rear=front;
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
				exit(0);
			default:
				printf("Wrong input\n");
		}
	}while(temp!=4);
	return(0);
}
