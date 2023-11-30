#include <stdio.h>

int count();
void print_longst_word();

int main()

{   printf("first function:\n");
    char name[]="Abdelrahman omar abdelaziz taha";
    int Number_of_chars=0;
    unsigned long long address_of_first_letter;
    address_of_first_letter = count(name, &Number_of_chars); //to count max number
    printf("%d \n",Number_of_chars);
    printf("%d \n",address_of_first_letter);
    print_longst_word(address_of_first_letter , Number_of_chars);
    return 0;
}