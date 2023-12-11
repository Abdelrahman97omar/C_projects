#include<stdio.h>

void calculation(int* arr, int size)
{
    int counter=0;
    int max=0,num;

for(int i=0;i<size;i++)
    {   
        counter=0;
        for(int j=i;j<=size;j++)
        {
           if (arr[j]==arr[i])
           {
                counter++;
           }
        }
        if(max<counter)
        {
            max=counter;
            num=arr[i];
        }
    }
    printf("%d %d the number of elements: %d \n",max,num);
}
  