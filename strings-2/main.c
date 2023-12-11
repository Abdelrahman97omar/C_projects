#include<stdio.h>

void scanstring();
int  str_to_int();
int  remove_prime();

int main()
{
    char scaned_string[100]="";
    int converted_number=0;
    int final_number_without_primes;
    int number_of_digits_in_final_number=0;


    scanstring(scaned_string);
    converted_number= str_to_int(scaned_string, &number_of_digits_in_final_number);
        printf("converted number is: %d \n",converted_number);
    final_number_without_primes = remove_prime(converted_number, &number_of_digits_in_final_number);
    printf("final number without prims: %d", final_number_without_primes);
}