#include <stdio.h>
#include <stdbool.h>
// printf function can display as output the values of variables 
// %i --> for integer
// %f --> float
// %e --> double
//%g --> double 
// %c --> character 


void main() {
    int sum = 89;
    double doubleVar = 8.44e+11;
    float floatVar = 3.321;
    bool boolVar = 0;
    printf("integerVar = %i and %f\n",sum,floatVar);
    printf("Float:::%2.f\n",floatVar);
    printf("Float:::%.2f\n",floatVar);
    printf("The sum is %d\n",sum);
    printf("Double:::%g\n",doubleVar);
     printf("Boolean:::%i\n",boolVar);
}