//To find square root of a number without the sqrt() function
#include<stdio.h>
main()
{
          float n,s;
          int i;
          
          printf("\nEnter the number to find the Square Root:\n");
          scanf("%f", &n);
          
          if(n>0.0)
          {
                    s=n/2;
                    for(i=0; i<n; i++)
                              s=((s+(n/s))/2);
                              printf("The roots are:%f\n",s);
          }
          
          else 
                    printf("The roots for the entered values is not possible\n");
}
