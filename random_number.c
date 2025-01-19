#include <time.h>
#include <stdio.h>
#include <stdlib.h>


int main ()
{
    srand(time(0));

    int number1 = (rand() % 20) + 1; // 0 1 2 3 4 5 6 rand gives number from 0 to 32767/ %20 depends on how many numbers you need 

    printf("%d",number1);
    return 0;
}


