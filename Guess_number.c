
#include <stdlib.h>
#include <stdio.h>
 #include<time.h>
 
int main () {
    int user_number;
    srand(time(0));

    int Guessed_number = (rand() % 20) + 1;
    
    printf("This is a guessing game. \nI have chosen a number between 0 and 20 which you must guess to survive\n");

    int tries = 5;

    while ( tries > 0)
    {
        printf("Enter a guess : ");
        scanf("%d",&user_number);

        if (user_number == Guessed_number){
            printf("You have guessed it !!");
            break;
        }

        else if ( user_number > Guessed_number)
        {
           printf("Sorry, %d is wrong.My number is less than that\n",user_number);
        }
        else {
            printf("Sorry, %d is wrong.My number is more than that\n",user_number);
        }
        tries--;
        if ( tries == 0){
            printf("FUCK OFF");
        }
        else
        {
        printf("You have %d tries\n",tries);
        }        
    }
}
