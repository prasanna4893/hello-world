/* Fibonacci Series c language */
#include<stdio.h>

int main()
{
   int n=10, first = 0, second = 1, next, c;

  // printf("Enter the number of terms\n");
   //printf("Enter the number of terms\n");
   //scanf("%d",&n);
      printf("First %d terms of Fibonacci series are :=\n",n);
   for ( c = 0 ; c < n ; c++ )
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      printf("\n %d",next);
   }

   return 0;
}
