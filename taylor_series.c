//write a program for taylors series.
#include<stdio.h>
#include<math.h>
#include<float.h>
void main()
{
          int n, temp, i;
          float term, fact, x, try, sinx=0;
          printf("Enter the value of x (in degrees)\n");
          scanf("%f", &x);
          temp = x;
          x = x*(3.142/180.0);
          term=x;
          sinx=term;
          n=1;
          for(i=0;i<2*n;i++)
          {
                    fact = 2*n*(2*n+1);
                    term = - term * x * x /fact;
                    sinx = sinx + term;
          }
          try=sin(x);
          printf ("Sum of the sine series without using library function sin(%d)= %f\n", temp, sinx);
          printf ("Sum of the sine series with using library function sin(%d) = %f\n", temp, try);
}
