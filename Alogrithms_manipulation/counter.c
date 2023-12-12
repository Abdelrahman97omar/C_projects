#include<stdio.h>

int find_number(int* arr,int size,int needed_number)

{   int indix;
    int max_limit=(size-1);
    int min_limit=0;
    int loop=0;

    do
    {  
         printf("loop: %d \n",loop);
        indix=(max_limit+min_limit)/2;
        printf("indix:%d \n",indix);

        if (arr[indix]==needed_number)
        {
            return indix;
        }

        else if(needed_number>arr[indix])
        {
            min_limit=indix+1;
        }
        else if(needed_number<arr[indix])
        {
            max_limit=indix-1;
        }

        loop++;
    } 

    while (max_limit>=min_limit);
    return -1;
   
}