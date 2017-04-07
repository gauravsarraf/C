#include<stdio.h>
#include<conio.h>
unsigned int rightshift(unsigned int, unsigned int); 
void main()
{
	unsigned int x,x1,n;
	printf("\nEnter the value of x (unsigned integer only):"); 
	scanf("%u",&x);
	printf("\nEnter the no of bits x will rotate right (n):");
	scanf("%u",&n);
	x1 = rightshift(x,n);
	printf("\n\nAfter rotating %d bits to the right, %u become -> %u", n, x, x1); 
}

unsigned int rightshift(unsigned int x,unsigned int n)
{
	unsigned int y,z,a; 
	a=x>>n; 
	z=x<<(16-n); 
	y=a|z;
	return(y); 
}