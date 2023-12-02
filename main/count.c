#include<stdio.h>
int count(char* arr, int* no_chars)
{
    printf("second function:\n");
    int indix=0;
    int counter=0;
    for(int i=0; arr[i];i++)
    {
        if(arr[i]!=32)
        {
            counter++;
        }

        else
        {
            if(counter>*no_chars)
            {
                *no_chars=counter;
                counter=0;
                indix=i;
            }
        }
    }

    return indix;
}