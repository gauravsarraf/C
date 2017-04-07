#include<stdio.h>
#include<string.h>
struct student
{
	int rollno, marks;
	char name[20], grade;
}

int main()
{
	int i,n,found=0; 
	struct student s[10]; 
	char sname[20]; 
	printf("Enter the number of student details n="); 
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\Enter the %d student details \n",i+1); 
		printf("Enter the roll number:"); 
		scanf("%d",&s[i].rollno);
		
		printf("Enter the student name without white spaces:"); 
		scanf("%s", s[i].name);
		
		printf("Enter the marks : "); 
		gets(s[i].marks);
		
		printf("Enter the grade : "); 
		fflush(stdin); 
		scanf("%c",&s[i].grade);
	}
	
	printf("\nStudent details are \n"); 
	printf("\nRoll no.\tName\t\tMarks\tGrade\n"); 
	
	for(i=0;i<n;i++)
		printf("%d\t%s\t\t%d\t%c\n", s[i].rollno, s[i].name, s[i].marks, s[i].grade);
	
	printf("\nEnter the student name to print the marks:"); 
	scanf("%s", sname);
	
	for(i=0;i<n;i++)
	{
		if(strcmp(s[i].name,sname)==0)
			printf("\nMarks of the student is : %d",s[i].marks); 
		
	found=1;
	}
	
	if(found ==0)
		printf("Given student name not found\n"); 
}