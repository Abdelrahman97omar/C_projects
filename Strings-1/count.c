#include<stdio.h>
int count(char* arr, int* number_of_chars)
{
    printf("count function:\n");
    int indix=0;
    int counter=0;
    for(int i=0; arr[i];i++)
    {
        if(arr[i]!=' ')
        {
            counter++;
        }
        else
        {
            if(counter>*number_of_chars)
            {
                *number_of_chars=counter;
                indix=i-(*number_of_chars);
            }
            counter=0;
         }
    } 
    printf("max number of chars is %d \n",*number_of_chars);

    return indix;
}