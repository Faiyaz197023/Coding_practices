#include <stdio.h>

int main() {
    printf("Variables of type char occupy %zd\n",sizeof(char));
    printf("Variables of type short occupy %zd\n",sizeof(short));
    printf("Variables of type long occupy %zd\n",sizeof(long));
    printf("Variables of type float  occupy %zd\n",sizeof(float));
    printf("Variables of type doubles occupy %zd\n",sizeof(double));
}