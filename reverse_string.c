#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    char rev[100];
    printf("Enter the sentence you are thinking ");
    scanf("%s",s); /* When using scanf to read a string, 
    you don't need to use the & operator because 
    the variable s is already a pointer to the first character of the array. So, 
    it should be scanf("%s", s); instead of scanf("%s", &s);.*/
    int i;
    for (i=0;s[i] !=0 ;i++)
    {
        rev[i]=s[i];
    }
    rev[i] = '\0';

    int x = strlen(rev)-1;
    /*When you use the strlen() function, it counts how many things (like letters) are inside the row, but it doesn’t count the special marker (\0) that tells us where the word ends. So, if your string has 5 letters, strlen() will tell you 5, 
    but the last letter is actually in Box 4 (because we start counting from 0)*/
    while ( x>=0)
    {
        printf("%c",rev[x]);

        x--;
    }

    
}