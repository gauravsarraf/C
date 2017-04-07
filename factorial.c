#include<stdio.h>
int factorial(int n);
float binomialCoeff(const float n, const float r) ; 
void main()
{
	int n,r,fact; 
	printf("Enter the value of n & r:\n"); 
	scanf("%d%d",&n,&r);
	printf("\nFactorial of %d = %d", n, factorial(n)); 
	printf("\nBinomial coefficient =%f",binomialCoeff(n,r));
}

int factorial(int n)
{
	if(n<=0) 
		return 1; 
	else
		return n*factorial(n-1);
}

float binomialCoeff(const float n, const float r)
{
	return factorial(n) / ( factorial(r) * factorial(n-r) );
}