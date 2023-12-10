#include<stdio.h>
void counter(int* arr,int size)
{   
    int counter=0, max=0,temp=0;
    int counter_array[10]={0};

    for(int i=0;i<size;i++)
    {
        counter_array[arr[i]]++;
    }

    for(int i=0;i<10;i++)
    {
        printf("%d   ",counter_array[i]);
    }
    printf("\n");
}