#include<stdio.h>
int main()
{
    int M,N;
    scanf("%d%d",&M,&N);
    int maxruns=6*6*N;
    {
        if(maxruns>=M)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
}