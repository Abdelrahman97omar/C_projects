#include<stdio.h>

void remove_function(char* str,char* copy)
{
    char check[256]={0};
    int counter_for_copy_string=0; /*becuase copy strinig is asigned by 0, so if 
    we found a repeted number it won't copy the letter in the copy string and this indix will
    be 0 and when i try to print copy string it will stop at the first 0 "null char"
    it met so i had to create a different counter for the copy string so it won't 
    change the indix unless it will put in it a char*/

    for(int i=0; str[i];i++)
    {
        check[str[i]]++;

        if(check[str[i]]<2)
        {
            copy[counter_for_copy_string]=str[i];
            counter_for_copy_string++;
        }

    printf("loop number: %d \n",i);
    }   
}