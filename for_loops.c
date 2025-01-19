#include <stdio.h>

int main() {
    for (int count = 1 ; count <=10; ++count)
    {
        printf("%d\n",count);
    }

    for (int i = 1 , j = 2 ; i<=5 ;++i,j = j +2)
    {
        printf(" %5d", i*j);
    }
}


