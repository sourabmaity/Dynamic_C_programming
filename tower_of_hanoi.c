#include<stdio.h>
void towerOfHanoi(int disk,char source,char dest,char aux)
{
	if(disk==1)
	{
		printf("Move %d from %c to %c\n",disk,source,dest);
		return;
	}
	towerOfHanoi(disk-1,source,aux,dest);
	printf("Move %d from %c to %c\n",disk,source,dest);
	towerOfHanoi(disk-1,aux,dest,source);
}
int main()
{
	towerOfHanoi(3,'a','b','c');
}
