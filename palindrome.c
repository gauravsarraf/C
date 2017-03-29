//program to check if a number is palindrome
#include<stdio.h>
int main()
{
          int n,tempo,digit,rev=0;
          printf("Enter the Number to be checked:");
          scanf("%d",&n);
          tempo=n;
          while(n!=0)
          {
                    digit=n%10;
                    n=n/10;
                    rev=digit+(rev*10);
          }
          
          if(tempo==rev)
          printf("The number is Palindrome!\n");
          
          else
          printf("The number is not Palindrome!\n");
          
          return 0;
}
