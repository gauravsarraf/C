#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
	int n, i, mid, low, high;
	printf("\n Enter the size of the array...:");
	scanf("%d", &n);
	char name[n][100], key[n];
	
	printf("\n Enter %d names in alphabetical order only", n);
	for(i = 0; i < n; i++)
	{
		printf("\n name[%d]:",i+1); 
		scanf("%s", name[i]);
	}
	
	printf("\n\n Enter the name to be searched: ");
	scanf("%s", key);
	
	low=0; 
	high=n-1;
	
	while(low<=high)
	{
		mid = (low+high)/2; 
		if(strcmp(key,name[mid])==0)
			break; 
		else
			if(strcmp(key,name[mid])>0)
				low = mid+1; 
			else
				high = mid-1; 
	}
	
	if(strcmp(key,name[mid])==0)
		printf("\n\n Search Successful:\n '%s' found at position:%d", key, mid+1);
	else
		printf("\n\n Search Unsuccessful:%s not found", key); 
}