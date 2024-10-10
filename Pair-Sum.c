#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int A=N/100;
    int B=(N/10)%10;
    int C=(N%100)/10;
    int D=N%10;
    int pairsum=(A*10+B)+(C*10+D);
    printf("%d",pairsum);


}