/*this code is to returnt the first
 letter to be repeated twice in a string*/

#include<stdio.h>

char finder();
int main()

{
    char str[]="abdelrahman omar abdelaziz taha";
    char letter;
    
    
    printf("%c \n",finder(str,&letter));

    return 0;
}