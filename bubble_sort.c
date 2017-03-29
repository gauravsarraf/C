//traditional bubble sort
#include<stdio.h>
void main()
{
          int num[0], n, i, j, temp;
          printf("\n\n Enter the number of elements in the array...:"); 
          scanf("%d",&n);
          num[n];
          printf("\n\n Enter %d integer numbers...",n); 
          for(i = 0; i < n; i++)
          {
                    printf("\n num[%d]:",i+1);
                    scanf("%d",&num[i]);
          }

          printf("\n\n The unsorted/input array is...\n"); 
          for(i = 0; i < n; i++)
          printf("%d\t",num[ i]);

          for(i = 0; i < n-1; i++)
          {
                    for(j = 0; j < (n-i-1); j++)
                    {
                              if( num[j] > num[j+1] )
                              {
                                        temp = num[j];
                                        num[j] = num[j+1];
                                        num[j+1] = temp;
                              }
                    }
          }

          printf("\n\n The sorted / output array is...\n");
          for(i = 0; i < n; i++)
          printf( "%d\t",num[ i ] );
} 
