// Type Conversions 

// Do not mix types 

#include <stdio.h>
// Use sizeof whereever possible to having to avoid to calculate hard code
// * is an operator that represents a pointer to a variable
// ? is an operator used for comparison
int main(){
    int x;
    printf("Enter the number of minutes : ");
    scanf("%d",&x);
    double No_of_days = x / 1440;
    printf("No of days : %lf\n",No_of_days);
    double Year = x / 525960;
    printf("No of years : %lf\n",Year);
}