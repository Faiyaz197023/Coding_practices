
#include <stdio.h>
#include <string.h>


// strcmp return values 

// <0 if the 1st non-matching char has a lower ascii value in s1 than s2
// 0 if the strings are equal 

// >0 if the 1st non-matching char has a higher ascii value in s1 than s2


int main() 
{   
    char c[100][100];
    int x;

    printf("Enter the number of strings you want to compare  " );
    scanf("%d",&x);

    for (int i=0;i<x;i++)
    {   
        printf("Enter the %d string ",i);
        scanf("%s",c[i]); // if i use c it intends to store it in the whole array
    }
/* In the printing loop, we use x (the number of strings entered) instead of sizeof(c)/sizeof(c[0])
 since x represents the number of strings we want to print.*/
    
    for (int i =0; i<x;i++)
    {
        
        for (int j=0;j<x-1;j++)
        {
            if (strcmp(c[j],c[j+1])>0)
            {
                char temp[100]; // temp should be an array, not a single character
                strcpy(temp, c[j]);
                strcpy(c[j],c[j+1]);
                strcpy(c[j+1],temp); 
            }
        }
    }

    for (int i=0 ; i<x ; i++)
    {
        printf(" %s\n",c[i]);
    }
    
    
}
    

