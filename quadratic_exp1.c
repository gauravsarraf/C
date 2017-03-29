//Experiment 1:Find roots of quadratic equation
#include <stdio.h>
#include <math.h>
main()
{
          float r,r1,d;
          int a,b,c;
          printf("Enter 'A', 'B', 'C'");
          scanf("%d%d%d",&a,&b,&c);
          d=(b*b)-(4*a*c);
          
          if(d>0)
          {         
                    r=((-b+sqrt(d))/(2*a));
                    r1=((-b-sqrt(d))/(2*a));
                    printf("The roots are real and distinct:%f%f",r,r1);
          }
          
          else if(d==0)
          {
                    r=r1=-b/(2*a);
                    printf("The roots are real and equal:%f%f",r,r1);
          }
          
          else
          {
                    r=(-1*b)/(2*a);
                    r=(sqrt(fabs(d))/(2*a));
                    printf("The roots are imaginary:%f%f",r,r1);
          }
}                           
