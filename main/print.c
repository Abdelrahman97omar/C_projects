#include<stdio.h>

    void print_longst_word(char* main_string,int indix_of_first_char,char* empty_string,int 
    number_of_chars)
    {   
        printf("third function:\n");
        int empty_string_indix=0;
        for(int i=0 ; i <number_of_chars; i++)
        {
            empty_string[i]=main_string[indix_of_first_char+i];
            printf("%c",empty_string[i]);
        }
        empty_string[empty_string_indix+1]='\0';
        printf("\n");
    }


