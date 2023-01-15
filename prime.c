//Write a program that finds if a given number is a prime number

#include<stdio.h>
int main()
{
	int num,i,c=1;
	printf("Enter a number : ");
	scanf("%d",&num);
	for(i=1;i<=num/2;i++)
	{
		if(num%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		printf("%d num is prime ",num);
	}
	else
	{
		printf("%d is not prime",num);
	}
	
	return 0;
}
