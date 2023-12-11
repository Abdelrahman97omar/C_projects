#include<stdio.h>
int main()
{
    int x;
    int y;
    signed int z;
    int t=0;
    int p=0;

    printf("please enter two numbers \n");
    scanf("%d",&x);
    scanf("%d",&y);
    z=x-y;
    if (z<0)
    {
        z=z*(-1);
    }
    t=(x+y)*((z+2)/2);

    printf("%d",t);

    for(int i=x;i<=y;i++)
    {
        p=p+i;
    }
    printf("%d",p);
    return 0;
}