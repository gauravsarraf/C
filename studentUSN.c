#include <stdio.h> 
int main()
{
	FILE *fp1,*fp2,*fp3; 
	char usn[20], name[20]; 
	fp1=fopen("studname.txt", "r");
	
	if(fp1 == NULL)
		printf(" File not found"); 
	fp2=fopen("studusn.txt", "r"); 
	
	if(fp2 == NULL)
		printf(" File not found"); 
	fp3=fopen("output.txt","w"); 
	
	while( !feof(fp1) && !feof(fp2) )
	{
		fscanf(fp1,"%s",name);
		fscanf(fp2,"%s",usn);
		fprintf(fp3,"%15s %10s\n", name, usn);
	}
	
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	fp3=fopen("output.txt","r");
	
	printf("\n----------------------------\n");
	printf(" Name USN \n");
	printf("----------------------------\n");
	
	while(!feof(fp3))
	{
		fscanf(fp3,"%s",name); 
		fscanf(fp3,"%s \n",usn); 
		printf("%-15s %10s \n", name,usn);
	}
	
	fclose(fp3);
}