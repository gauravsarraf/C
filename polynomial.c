#include<stdio.h>

main()
{
          float coe[10], x, fx=0; 
          int i;
          printf("\n Enter the coefficients of a given polynomial (i.e.,a0,a1,a2,a3,a4)\n"); 
          
          for(i = 0 ; i <= 4 ; i++)
          {
                    printf("\n coe %d =",i); 
                    scanf("%f", &coe[i] );
          }
          
          printf("\n Enter the value of 'x':"); 
          scanf("%f",&x);
          
          for( i = 4 ; i >= 0 ; i--) 
          fx = fx * x + coe[ i];
          
          printf("\nf(%f) = %f",x,fx); 
}
