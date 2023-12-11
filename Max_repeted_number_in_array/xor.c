#include<stdio.h>
int main()
{
    int N1,N2,result,max=0,maxN1,maxN2,loopN=1;
    scanf("%d %d",&N1, &N2);

    for(int i=N1;i<=N2;i++)
    {
        printf("loop: %d \n",loopN);
        for(int j=i;j<=N2;j++)
        {
            result=j^i;
            if(result>max)
            {
            max=result;
            maxN1=i;
            maxN2=j;
            }
            printf("the result of %d and %d is: %d \n",i,j,result);
        }
        loopN++;
    }
    printf("%d %d %d \n",max, maxN1, maxN2);

return 0;
}