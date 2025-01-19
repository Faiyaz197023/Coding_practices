#include <stdio.h>

int concate(char result[],const char str1[],const char str2[]);


int main()
{
    const char str1[]="hello";
    const char str2[] =" FRIEND";
    char result[50];
    printf("%s",concate(result,str1,str2));

}

int concate(char result[],const char str1[],const char str2[])
{
    int i;
    for (i=0;str1[i]!=0;i++)
    {
        result[i]=str1[i];
    } 
    // AT the end of the loop remember the i value is stored not resetted
    int j;
    for ( j=0; str2[j]!=0;j++)
    {
        result[i+j]=str2[j];
    }
    result[i+j]='\0';

    printf("%s",result);
}