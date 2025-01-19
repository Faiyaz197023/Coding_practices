#include <stdio.h>
#include <string.h>
// strchr() and strstr()
//strchr() searches a given string for a specified character
// breaking a sentence into words is called tokenizing
// strtok()

// Islower(),isupper(),isalpha(),isdigit()

int main(){
    char str[]="The quick mofo fox";
    char str_1[80]="HELLO HOW ARE YOU - my name is - Jason";
    const char s[2]="-";
    char *token;
    
    token = strtok(str,s);
    printf("%s",token);
    char ch ='q';
    char word[] ="fox";

    char *pGET_char = NULL;
    pGET_char=strchr(str,ch);

    char *pGet_STRING= NULL;
    pGet_STRING = strstr(str,word); 


    }