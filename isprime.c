#include<stdio.h>
int isprime(int); 
void main()
{
	int num, res,a,b,i,f=0;
	printf("\n Enter the range of integer number to generate prime numbers:\n"); 
	scanf("%d%d",&a,&b);
	for(i=a; i<=b;i++)
	{
		res = isprime(i); 
		if ( res == 1)
		{
			printf("\t%d",i);
			f=1;
		}
	} 
	if(f==0)
		printf("No prime numbers exists\n"); 
}

int isprime(int n)
{
	int j;
	for(j = 2 ; j<= n / 2 ;j++)
	{
		if ( n % j == 0)
		return 0; 
	}
	return 1; 
}