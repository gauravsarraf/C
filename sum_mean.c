#include<stdio.h>
#include<math.h> 
void main()
{
	float *ptr, mean, std, sum=0, sumstd=0; 
	int n,i;
	printf("\nEnter the no of elements:"); 
	scanf("%d",&n);
	
	float a[n];
	
	printf("\nEnter the array elements:\n"); 
	
	for(i=0;i<n;i++)
		scanf("%f",&a[i]);
		
	ptr=a;
	
	for(i=0;i<n;i++)
	{
		sum=sum+ *ptr; 
		ptr++;
	}
	
	mean=sum/n;
	ptr=a;
	
	for(i=0;i<n;i++)
	{
		sumstd=sumstd + pow((*ptr - mean),2); 
		ptr++;
	}
	
	std= sqrt(sumstd/n); 
	printf("\nSum=%.3f\t",sum); 
	printf("\nMean=%.3f\t",mean); 
	printf("\nStandard deviation=%.3f\t",std);
}