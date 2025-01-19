#include <stdio.h>

int main() 
{
int numbers = 123456789;
int rev = 0;

while (numbers) // since it's non-zero it runs
{
    rev = rev*10 + numbers%10; // rev = 9 at 1st loop 0*10 + 9 
    numbers = numbers/10;
}
 printf("%d", rev);

  return 0;

}