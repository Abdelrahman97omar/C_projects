    int counter=0;
    int final_int_number=0;
    int single_int=0;
    for (; x[counter]; counter++)
    {   
        final_int_number=final_int_number*10;
        single_int=x[counter]-'0';
        final_int_number=(final_int_number+single_int);
    }
    printf("%d \n",final_int_number);
    final_int_number=final_int_number+30;
    printf("%d \n",final_int_number);