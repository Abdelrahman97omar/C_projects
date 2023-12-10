#include<stdio.h>

void scanstring(char* scan_string)
{
    int i=0;
    printf("enter number \n");
    scanf("%c",&scan_string[i]);

    for(; scan_string[i]!='\n';)
    {
        i++;
        scanf("%c",&scan_string[i]);
    }
    scan_string[i]='\0';
    
    printf("The string you enterd is: %s \n",scan_string);
}