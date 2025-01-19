#include <stdio.h>

int number=1234578;
int reverse=0;
int main()
{
    while (number)
    {
        reverse=reverse*10+number%10;

        number=number/10;
    }

    printf("%d",reverse); 
}
