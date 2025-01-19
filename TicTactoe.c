#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

void reset_Board();
void print_Board();
void check_Freespace();
void player_Move();
void computer_Move();
void checkWinner();
void printWinner(char);
int board[3][3];
char winner =' ';
const char PLAYER = 'X';
void main()
{
    

    reset_Board();
    while (winner == ' '&& check_Freespace!=0)
    {
        print_Board();
        player_Move();
        winner = checkWinner();
    }
    
}

void reset_Board()
{
    for (int i =0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            board[i][j]=' ';
        }
    }
}

void print_Board(){
    printf(" %c | %c | %c ",board[0][0],board[0][1],board[0][2]);

    printf("\n---|---|---\n");

    printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);

    printf("\n---|---|---\n");

    printf(" %c | %c | %c ", board[2][0], board[2][1], board[2][2]);

   
}

void check_Freespace(){
    int freespace = 9;
    for (int i =0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
           if (board[i][j] != ' ')
           {
            freespace --;
           }
        }
    }
    return freespace;
}

void playerMove() {
    int x;
    int y;
    do {
        printf("Enter row :");
    scanf("%d", &x);
    x--;
    printf("Enter column :");
    scanf("%d",&y);
    y--;

    if (board[x][y] != ' ')
    {
        printf("INVALID MOVE");
    }
    else{
        board[x][y] = PLAYER;
        break;
    }

    }
    while ( board[x][y] != ' ');
    
    
}

void checkWinner(){

    

}