#include<stdio.h>
char finder(char* str, char* letter)
{
    char counter[256]={0};

    for (int i = 0;str[i]; i++)
    {
       counter[str[i]]++;
       if(counter[str[i]]==2)
       {
        *letter=str[i];
        return *letter;
       }
    }         

    return 0;
}