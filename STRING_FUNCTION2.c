#include <stdio.h>
#include <string.h>

// C has no special variable type for strings 
// Strings are stored in an array of type char

char myString[20]; //19 character can be stored.

// Better no to specify size let the compiler figure out
//char s[100];
//s="hello";//doesnt work value required error

//strncpy() to assign a value to a char array after it has been declared or initialized
// %s for outputting a null-terminated string
// string cannot use == compare operators to 
// strcmp function used to compare
// "x" and 'x' is  NOT THE SAME 

#define TAXRATE 0.015 // Constant 
#define OOOps "Now you have done it"

const int MONTHS =12;
// ENUM IS THE THIRD WAY TO WRITE TO WRITE CONSTANT
int str_cat();
int str_copy();

int stringer();
int main()


{   
    //str_copy();
    

    //stringer();
    str_cat();
    
   // char myString[]="Yes my string";
    //printf("The length of this string is %d\n",strlen(myString));
    int y=15;

    float Summation= TAXRATE * y;
    //printf("%f\n",Summation);
}

// COMMON STRING FUNCTIONS
/*  strlen
    strcpy and strncpy
    strcmp() and strncmp()
*/

int str_cat()
{
    char myString[]=" Faiyaz ";
    char input[80];

    printf("Enter a string to be concatenated:");
    scanf("%s",input);

    printf("\n The string %s concatenated with %s is ::::\n",myString,input);
    printf("%s", strcat(input,myString));
}
int stringer()
{
    char src[40];
    char dest[12];
    memset(dest,'\0',sizeof(dest));
    strcpy(src,"Hello how are you doing u fuck?\n");
    strncpy(dest,src,10);
    printf("The length of the function is %d\n",strlen(dest));
    
    return 0;
}

int str_copy(){
    char src[50],dest[50];

    strcpy(src,"This is source");
    strcpy(dest,"This is destination"); //use strncpy to check whether it can be copied
    
    printf("%s\n",dest);
}