//accept two no. and find sum,diff, prod
#include<stdio.h>
main()
{
          int a,b,sum,diff,prod;
          printf("Enter no. 'A':");
          scanf("%d",&a);
          printf("Enter no. 'B':");
          scanf("%d",&b);
          sum=a+b;
          diff=a-b;
          prod=a*b;
          printf("The sum is:%d",sum);
          printf("The difference is:%d",diff);
          printf("The product is:%d",prod);
}
