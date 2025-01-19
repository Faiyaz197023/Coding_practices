#include <stdio.h>

int main() {
    enum Weekday{Monday,Tuesday,Wednesday,Sunday,Friday,Thursday};
    enum Weekday today= Monday;
    switch (today)
    {
    case Sunday:
        printf("Today is Sunday");
        break;
    
    default:
        printf("Whatever");
    }
}

