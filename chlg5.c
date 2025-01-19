#include <stdio.h>

int main()
{
   int i;
   int j;
   for (i=2;i<100;i++){
      for ( j=0;j<i;j++){
         if (j%i == 0){
            printf("%d",j);
         }
         
      }
   }
}