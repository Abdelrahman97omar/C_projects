#include<stdio.h>
int find_number();
int main()
{
    int random_array[]={ 17, 20, 34, 42, 54, 57, 68, 79, 92, 95, 108, 120, 135, 149, 158, 169, 174, 185, 198, 206,
    212, 223, 234, 241, 257, 269, 278, 284, 295, 305, 319, 327, 338, 342, 356, 368, 373, 381, 392, 402,
    410, 421, 438, 440, 452, 464, 479, 483, 498, 506, 512, 525, 533, 548, 554, 568, 578, 584, 590, 601,
              };

    int size=sizeof(random_array)/sizeof(random_array[0]);
    signed int needed_number;
    int indix_of_needed_number=0;


    printf("please enter the needed number \n");
    scanf("%d",&needed_number);

    indix_of_needed_number=find_number(random_array,size,needed_number);

    if (indix_of_needed_number==-1)
    {
        printf("not found \n");
    }
    else
    printf("The indix of the needed number is: %d \n",indix_of_needed_number);

    
    return 0;
}