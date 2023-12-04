#include<stdio.h>

void intToString( char* empty_str)
{
    char temp_string[100];
    int user_number;
    int reminder;
    int result=0;
    int indix=0;
    int counter_to_find_no_of_digits=0;
    int temp=0;
    int counter=0;

    //scan number and then reverse it and put it back in the main empty string
    printf("enter intiger number to convert to string \n");
    scanf("%d",&user_number);

    for(;user_number>0;indix++)
    {
        reminder=user_number%10;
        temp_string[indix]=reminder+'0';
        user_number=user_number/10;
        counter_to_find_no_of_digits++;
    }
    indix++;
    temp_string[indix]='\0';
    //printf("new is %s",temp_string);

    //to reverse it and put it back in the main empty string

    while (counter_to_find_no_of_digits>=0)
    {   
        empty_str[counter]=temp_string[counter_to_find_no_of_digits]+'0';
        counter_to_find_no_of_digits--;
        counter++;
    }
    counter++;
    empty_str[counter]='\0';
    printf("final string of numbers is: %s",empty_str);

}