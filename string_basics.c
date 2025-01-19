#include <stdio.h>
/*
Unlike many other programming languages, C does not have a String type to easily create string variables. 
Instead, you must use the char type and create an array of characters to make a string in C:
*/
//every string is terminated by '/0'

int main() 
{

    char *ptr = "Hello World"; //ptr contains the pointer to the first character
                     // "Hello[1] = pointer to 'H'[1]"
    char s[20] ="abcdefghijkl";
    char t[20];

    int i;
    for (i =0;s[i] != '\0';i++)
    {
        t[i]=s[i];
    }
    t[i]='\0'; // MARKS THE END OF THE STRING LITERAL
    printf("%s\n",t);

    printf("%s","Hello You have to dream before your dreams can come true" 
    "--- APJ ABDUL KALAM");

}

// How string literals are stored ?
//Stored as array of characters and ended by '\0' we are passing a pointer to the first character of a string literal 
// using printf or scanf


// STRING LITERAL CANNOT BE MODIFIED THEY ARE CONSTANTS