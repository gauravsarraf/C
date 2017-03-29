//multiplication of two 2D arrays
#include<stdio.h> 
#include<stdlib.h>
void main()
{
          int m,n,p,q,i,k,j;
          printf("\n Enter the order of matrix A(m and n)…"); 
          scanf("%d%d", &m,&n);
          printf("\n Enter the order of matrix B(p and q)…"); 
          scanf("%d%d", &p,&q);
          int A[m][n]; 
          int B[p][q]; 
          int C[n][p];

          if(n!=p)
          {
                    printf("Matrix multiplication is not possible…Try again");
                    exit(0); 
          }
          else
          {
                    
                    
                    printf("\n Enter the elements of matrix A(m * n)…\n"); 
                    for(i=0;i<m;i++)
                    {
                              for(j=0;j<n;j++)
                              scanf("%d", &A[i][j]);
                    }
                    

                    printf("\n Enter elements of matrix B(p * q)…\n"); 
                    for(i=0;i<p;i++)
                    {
                              for(j=0;j<q;j++)
                              scanf("%d", &B[i][j]);
                    }

                    for(i=0;i<m;i++) 
                    { 
                              for(j=0;j<q;j++)
                              {
                                        C[i][j]=0; 
                                        for(k=0;k<n;k++)
                                        C[i][j]= C[i][j] + A[i][k] * B[k][j];
                              } 
                    }
          }
                                       
          printf("\n\n The Matrix A is…\n"); 
          for(i=0;i<m;i++)
          {
                    for(j=0;j<n;j++) 
                    printf("%4d", A[i][j]);
                    printf("\n"); 
          }
          
          printf("\n\n The Matrix B is…\n"); 
          for(i=0;i<p;i++)
          {
                    for(j=0;j<q;j++) 
                    printf("%4d", B[i][j]);
                    printf("\n"); 
          }
          
          printf("\n\n The Resultant Matrix C is…\n"); 
          for(i=0;i<m;i++)
          {
                    for(j=0;j<q;j++) 
                    printf("%4d", C[i][j]);
                    printf("\n");       
          }
}                                       
