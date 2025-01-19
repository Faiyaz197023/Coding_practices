#include <stdio.h>

int main()
{   int count =5;
    for (int i=1;i<=count;++i){
        int sum = 0;

        for (int j=1;j<=i;++j){
            sum+=j;
        }
        printf("%d",sum);
    }
    
}