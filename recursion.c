// FUCK I HATE RECURSION
// But if done correctly we will get the best efficient code 
// recursion means function calling itself directly
#include <stdio.h>

int sum(int k);


int main(){
    int x=0;
    printf("%d",sum(x));
    return 0;

}

int sum (int k){

    if (  k == 10){
        return 0;
    }
    else{
        return k + sum(k+1);
    }


}