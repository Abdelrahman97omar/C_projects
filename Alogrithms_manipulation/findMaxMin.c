#include<stdio.h>
void find_max_min(int*arr, int size, int* max,int* min)
{
    for (int i = 0; i < size; i++)
    {
       if (arr[i]>*max)
       {
        *max=arr[i];
       }
       if (arr[i]<*min)
       {
        *min=arr[i];
       }
       
       
    }
    
}