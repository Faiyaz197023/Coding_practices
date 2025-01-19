#include <stdio.h>

int main() {
    int n = 26;
  
      if (n % 2 == 0)
      
        // jump to even
        goto even;
    else
      
        // Jump to odd
        goto odd;

even:
    printf("%d is even", n);
      return 0;
      
odd:
    printf("%d is odd", n);
    return 0;
}