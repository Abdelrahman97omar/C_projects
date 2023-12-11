#include<stdio.h>

    void print_longst_word(char* main_string,int indix_of_first_char,char* empty_string,int 
    number_of_chars)
    {   
        int empty_string_indix=0;
        int i=0;
        for(; i <number_of_chars; i++)
        {
            empty_string[i]=main_string[indix_of_first_char+i];
        }
        empty_string[empty_string_indix+i]='\0';

        printf("longest word is %s \n",empty_string);
    }


