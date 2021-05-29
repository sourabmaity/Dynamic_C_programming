#include <stdio.h> 
#include <stdlib.h> 
int *arr, n; 
void find(int min, int max)
{
	if(min==max)
	{
		if(*(arr+min) == n)
		{
			printf ("Value found in index no %d", min);
		}
		else
		{
			printf("Value not found");
		}
	}
	else
	{
		int temp = (min+max)/2;
		if (*(arr + temp) == n)
		{
			printf ("value found in index no %d",temp);
		}
		else
		{
			if(*(arr+temp)>n)
			{
				if(temp-1<min)
				{
					printf("Value not found");
				}
				else
				{
					find(min,temp-1);
				}
			}
			else
			{
				find(temp+1,max);
			}
		}
	}
}
int main()
{
	int i,k=6;
	arr=(int*)malloc(k*sizeof(int));
	for(i=0;i<k;i++)
	{
		scanf("%d",&arr[i]);//arr[i]=i+1;
	}
	printf("Array contain:\n");
	for(i=0;i<k;i++)
	{
		printf("%d ",*(arr+i));
	}
	printf("\nPress 0 for exit\n");
	do
	{
		printf("\nWhich value do you want to search: ");
		scanf("%d",&n);
		if(n==0)
		{
			break;
		}
		find(0,k-1);
	}while(1);
	free(arr);
	return(0);
}








