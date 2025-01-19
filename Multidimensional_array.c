#include <stdio.h>

int main()
{
    int matrix[4][5]={{1,2,3},
                    {4,5,6},
                    {7,8,9}};


    for (int i=0;i<4;i++)
    {
        for (int j =0 ;j<5;j++){
            printf("{%d}",matrix[i][j]);
        }
    }

}