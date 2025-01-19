#include <stdio.h>
// = and == is used for comparison
int main(){
    int number_of_test, remainder;
    printf("Enter the number to be tested : ");
    scanf("%i",&number_of_test);
    remainder = number_of_test % 2;
    if ( remainder = 0){
        printf("The number if even.\n");

    }
    else {
        printf("The number is odd.\n");
    }

    return 0;
}