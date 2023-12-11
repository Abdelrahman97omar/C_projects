    #include<stdio.h>
    
    int str_to_int(char* strinToConvert, int* no_of_digits)
    {
        printf("convert string to int \n");

        int counter=0;
        int final_int_number=0;
        int single_int=0;
        int checker=0;
        for (; strinToConvert[counter]; counter++)
        {   
            if(strinToConvert[counter]>='0' && strinToConvert[counter]<='9')
            {
            final_int_number=final_int_number*10;
            single_int=strinToConvert[counter]-'0';
            final_int_number=(final_int_number+single_int);
            }
        }
        
        checker=final_int_number;

        for(;checker>0;)
        {
            checker=checker/10;
            *no_of_digits=*no_of_digits+1;
        }
        printf("number of digits is: %d \n",*no_of_digits); 
        return final_int_number;
    }