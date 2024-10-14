#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    int lasttwodigits=year%100;
    printf("%02d",lasttwodigits);
}