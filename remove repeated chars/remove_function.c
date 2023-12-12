#include<stdio.h>

void remove_function(char* str)
{
    char check[256]={0};

    for(int i=0; str[i];i++)
    {
        check[str[i]]++;

        if(check[str[i]]>1)
        {
            str[i]=' ';
        }

    }   
}