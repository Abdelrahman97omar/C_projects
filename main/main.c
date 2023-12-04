#include <stdio.h>

int count();
void print_longst_word();
void scanString();
void intToString();


int main()

{  
    char name[]="Abdelrahman omar abdelaziztaha ";
    char empty_string_to_scan[100]="0";
    char longst_string[100];
    char number_string[100];
    int  indix_of_last_letter;
    int  Number_of_chars=0;
    int  Number_to_string;

    
    indix_of_last_letter = count(name, &Number_of_chars); //function to count max number
    print_longst_word(name,indix_of_last_letter,longst_string,Number_of_chars); //function
    scanString(empty_string_to_scan);
    intToString(number_string);
    return 0;
}