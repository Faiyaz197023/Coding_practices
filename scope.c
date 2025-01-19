#include <stdio.h>

int t=10; // Global variable 
void myFunction(){
    int x=5 ; // local variable
    printf("%d\n",x);
}
/**If you operate with the same variable name inside and outside of a function,
 *  C will treat them as two separate variables; One available in the global scope
 *  (outside the function) and one available in the local scope (inside the function):
 * 
 */
int main(){
    myFunction();
   
    printf("Global variable is %d\n",t);
    return 0;
}

