#include <stdio.h>
#include <stdbool.h>


int compare(const char str1[],const char str2[]);

int main() 
{
    char word[20]="MANHWA HENTAI";
    char gain[10]="Hello";

    printf("%s",compare(word,gain));
}


int compare(const char str1[],const char str2[])
{
    int length;
    int length_2;
    int i;
    int j;

    for (i =0 ;str1[i]!=0;i++){
        length++;  // using size of for finding length will only give you the size of the pointer
    }
    for (j=0;str2[j]!=0;j++)
    {
        length_2++;
    }

    if (length == length_2)
    {
        printf("THE VALUES ARE EQUAL");
    }

    else{
        printf("No they are not in value");
    }
}
     
     