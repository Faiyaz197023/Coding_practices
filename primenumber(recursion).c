#include <stdio.h>

int primenumber(int k);

int main(){
    int x=2;
    
    printf("Prime numbers  are %d",primenumber(x));
}

int primenumber(int k ){
    int count = 0;
    if (k%2 ==0 ){
        
        return primenumber(k);

    }
    else{
        return 0;

    }
}