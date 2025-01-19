

#include <stdio.h>
int myNumbers[] = {10,25,50,75,100};

int main(){
    printf("%d\n",sizeof(myNumbers)); // returns 20 because 5 elements * 4 bytes of int size
    printf("%d\n",sizeof(myNumbers[0])); // return number of elements starting to count from 0 to 4
    int length = sizeof(myNumbers)/sizeof(myNumbers[0]);
    printf("%d", length); // total length of the array
}
