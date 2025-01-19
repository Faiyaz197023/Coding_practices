// toupper()
// tolower()
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char text[100];
    char ssubstring[40];
    
    printf("Enter the string to be searched (less than %d characters):\n",100);
    scanf("%s",text);

    printf("\nEnter the string sought(less than %d characters) :\n",40);
    scanf("%s",ssubstring);

    printf("\nFirst_string\n",text);
    printf("Second string entered\n",ssubstring);


    // Conver to uppercase

    for (int i=0;(text[i]=(char)toupper(text[i])) !='\0';i++);
      for (int i=0;(ssubstring[i]=(char)toupper(text[i])) !='\0';i++);

      printf("The second string %s found in the first \n ",((strstr(text,ssubstring)==NULL)? "was not":"was"));

}