#include <stdio.h>

int count();
//void print_longst_word();

int main()

{   printf("first function:\n");

    char name[]="Abdelrahman omar abdelaziz taha";
    int Number_of_chars=0;
    int indix_of_last_letter;

    indix_of_last_letter = count(name, &Number_of_chars); //to count max number


    printf("The number of letters in the longest string is: %d \n",Number_of_chars);
    printf("The indix of the last letter in the longest string is: %d \n",indix_of_last_letter);
    
    print_longst_word(name,indix_of_last_letter,Number_of_chars);
    return 0;
}