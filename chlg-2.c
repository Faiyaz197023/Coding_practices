#include <stdio.h>

int main(){
    enum Company {GOOGLE,FACEBOOK,XEROX,YAHOO,EBAY,MICROSOFT};
    
    enum Company company1=GOOGLE;
    enum Company company2=XEROX;
    enum Company company3=EBAY;

    printf("The current order is \n* %d   \n* %d  \n* %d",company2,company1,company3);


}