#include<stdio.h>

/*
el fekra hena eny 3mal akteb 7arf fl string fl indix i bs abl ma ye-check el 7arf 
dh enter wla l2 howa by3ml i++ we yero7 ye-check 3l i el gededa heya enter wla l2
bs since enha i ma3molha ++ faheya mafehash enter fa lazem a-check awl
mada5l raqam we abl ma3ml i++ 

*/
void scanString(char* empty_string)

    {
    printf("scan string function \n");
    printf("Enter a string \n");   
    int i = 0;
    scanf("%c",&empty_string[i]);
    for (; empty_string[i] != '\n';) 
    {   
        i++;
        scanf("%c", &empty_string[i]);
    }
    empty_string[i] = '\0';
    printf("The string you entered is %s\n", empty_string);

}