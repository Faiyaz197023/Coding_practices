#include <stdio.h>


/*

DECLARE THE FUNCTIONS FIRST FOR BETTER ORGANIZING
AND THE WRITE THE PARAMETERS AND ARGUMENTS BELOW THE MAIN FUNCTION OR ELSE IT WILL CAUSE AN ERROR
*/
void printmessage();
int add_numbers(int x,int y);
void myArray(int myNumbers[6]);

void myFunction(char name[],int age);

int main()
{
    printmessage();
    
    myFunction("Faiyaz\n",10);
    int myNumbers[5]={1,2,3,4,5};
    myArray(myNumbers);
    return 0;

}

void printmessage()
{
    printf("Hello\n");
}

int add_numbers(int x,int y)
{
    int z=x+y;
    printf(" I AM IN ANOTHER FUNCTION AND MY Sum is %d\n",z);
}
void myFunction(char name[],int age){
    printf("Hello my name is %s and my age is %d\n",name,age);
    add_numbers(20,50); // FUNCTION CALLING AN ANOTHER FUNCTION 
}

void myArray(int myNumbers[6])
{
    for (int i=0;i<sizeof(myNumbers[0]);i++){
        printf("%d\n",myNumbers[i]);
    }
}


