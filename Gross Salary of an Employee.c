#include<stdio.h>
 int main()
 {
    float BS,HRA,DA;
    scanf("%f%f%f",&BS,&HRA,&DA);
    float PF=0.12*BS;
    float GS=BS+HRA+DA+PF;
    printf("%.2f\n%.2f",PF,GS);
 }