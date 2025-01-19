// A DATATYPE THAT ALLOWS TO DEFINE A VARIABLE AND SPECIFY THE VALID VALUES 

#include <stdio.h>

int main (){
    enum primaryColor {mycolor ,gregsColor};
    enum month {Jan,Feb,March}; // first one is 0
    enum direction { up,down,left =10 ,right}; // up = 0 because it appears first in the list ,1 is down,10 to left 11 to right 
    char broiled;
    broiled='T';
    enum TrafficLight {
    RED = 1,
    YELLOW = 2,
    GREEN = 3
};

    enum TrafficLight signal = GREEN;

    printf("Current signal: %d\n", signal);
    return 0;

    // Escape characters
    char x = '\n'; 
}

