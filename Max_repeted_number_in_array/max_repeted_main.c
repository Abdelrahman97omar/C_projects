#include<stdio.h>
void calculation();
int main()
{
    int arr[]={5,5,8,7,4,6,9,8,1,2,5,8,7,4,56,8,4,7,51};
    int size= sizeof(arr)/sizeof(arr[0]);

    void calculation(arr,size);
    return 0;    
}