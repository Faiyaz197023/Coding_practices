// program arguments 

// main() is called by the runtime system two arguments are actually passed to the function
//first argument is an integer value that specifies the number of arguments type on the command line 


#include <stdio.h>


int main(int argc , char*argv[])
{
    int numberofArguments = argc;
    char *argument1 =argv[0];
    char *argument2 = argv[1];

    printf("Number of Arguments: %d",numberofArguments);
    printf("Argument 1 is the program name: %s",argument1);
    printf("Arguments 2 is command line arguments %s",argument2);


    return 0;
}