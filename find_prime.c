#include <stdio.h>

int main()
{   
    int prime_number[100];
    int index ; 
    int count;
   
    for (int i =2;i < 100;i++)
    {   
        count=0;

        for ( int j=1;j<=i;j++)
        {
           if ( i % j == 0 ){


            count ++;
            

           }
           
        } 
        if ( count > 2)
        {
           // printf("%d is a composite number \n",i);
        }
        else 
        {
            prime_number[index]=i;
            index++;
        }
        

        


        
    } 
    for(int i =0 ; i<index;i++)
    {   
        printf("%d\n",prime_number[i]);

    }
    
}
