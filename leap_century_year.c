//check if its leap year or centurty year
#include<stdio.h>
main()
{
          int year=0;
          printf("Enter the Year:");
          scanf("%d",&year);
          if(year%400==0)
                    printf("It is a Leap Year as well as a Century Year!\n");
                    
          else if(year%100==0)
                    printf("It is a Century Year!\n");
                  
          else if(year%4==0)
                    printf("It is a Leap Year!\n");
                    
          else 
                    printf("Not a Leap Year or Century Year!");
}
          
                    
