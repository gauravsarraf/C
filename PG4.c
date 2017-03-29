//Read 3 subs and display pass or fail
#include<stdio.h>
main()
{
          float math, eng, sci;
          printf("Enter Math marks:");
          scanf("%f",&math);
          printf("Enter English marks:");
          scanf("%f",&eng);
          printf("Enter Science marks:");
          scanf("%f",&sci);
          
          if(math>=45.0)
                    printf("Math=Pass \n");
          else
                    printf("Math=Fail \n"); 
                    
          if(eng>=45.0)
          printf("English=Pass \n");
          else
                    printf("English=Fail \n"); 
                    
          if(sci>=45.0)
          printf("Science=Pass \n");
          else
                    printf("Science=Fail \n");
}
          
