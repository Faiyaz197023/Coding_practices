#include <stdio.h>

int fibonnaci_number(int n);

int main ()
{
   printf("%d",fibonnaci_number(4)) ;
}

int fibonnaci_number(int n)
{   
    int board[50]={0,1};

    if ( n == 1)
    {
        return board[0];
    }

    else if ( n == 2)
    {
        return board[1]; 
    }

    else {
        
      for ( int i =2 ; i<n ;i++)
        {
            board[i] = board[i-1] +board[i-2];
           
            
        }
      for ( int f =0 ;f<n;f++)
      {
        printf("%d",board[f]);
      }

    
    return board[n-1];
        

    }


    

}

