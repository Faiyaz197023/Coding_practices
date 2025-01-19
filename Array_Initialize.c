#include <stdio.h>

int main()
{
    int counter[5] = { [2]=500,[1]=100,[0]=300}; 
    int i;

    for (i=0;i<5;i++)
    {
        printf("Index: %d Value: %d\n",i,counter[i]);
    }

}