#include<stdio.h>
int main()
{
	int num,count=0;
	printf("Enter the number:");
	scanf("%d",&num);
	
	while(num>0)
	{
		num=num/10;
		count++;
	}
	printf("The length or count of digits in a number is %d",count);
	return 0;
}
