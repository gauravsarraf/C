//Read int,char and float values and print.
#include<stdio.h>
main()
{
          int a,b;
          float d,c;
          char e,f;
          printf("Enter two Integer values:");
          scanf("%d%d",&a,&b);
          printf("Enter two Float values:");
          scanf("%f%f",&c,&d);
          getchar();
          printf("Enter two Char values:");
          scanf("%c%c",&e,&f);
          printf("The Integer values are:%d %d \n",a,b);
          printf("The Float values are:%f %f \n",c,d);
          printf("The Char values are:%c %c \n",e,f);
}
          
