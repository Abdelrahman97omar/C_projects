/*this code is to remove any repeated char in string*/

#include<stdio.h>

void remove_function();

int main()
{
    char str[]="abdelrahman omar abdelaziz taha ";
    char copy[100]="0";    


    remove_function(str,copy);

    printf("%s \n",copy);

    return 0;
}