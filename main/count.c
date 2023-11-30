#include<stdio.h>

int count(char* arr, int* no_chars)

{
    printf("second function:\n");
    int address_of_1st = 0;
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
                address_of_1st= &(arr[i-*no_chars]);
            }
        }
    }
    printf("%d",(i-*no_chars));
    return address_of_1st;
}