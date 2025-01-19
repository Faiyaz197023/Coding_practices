// shift and logical operators 
// AND = & OR = | 
// XOR = ^ 
// ~ = One's Complement
// << = LeftShift Operator 
// >> = RightShift Operator 

#include <stdio.h>

int main(){
    unsigned int a = 60; // 0011 1100
    unsigned int b =13; //0000 1101
    int result =0;
    int Second_Result=0;
    int result2=0;

    result = a & b; // 0000 1100
    Second_Result = a | b; // 0011 1101
    result2=a<<2; //0011 1101

    printf("THe result is %d",result);
    return 0;
}