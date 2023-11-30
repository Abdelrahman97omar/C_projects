#include<stdio.h>

    void print_longst_word(unsigned long long address_of_first_letter,int no_of_chars)
    {   
        printf("third function:\n");
        char* x;
        x=address_of_first_letter;

        for(int i=0 ; i < no_of_chars ; i++)
        {
            printf("%c",*(x+i));
        }
    }

