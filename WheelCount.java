#include<stdio.h>
void main(){
    int FW,TW,V,T;
    printf("Enter the numner of vehicles : ");
    scanf("%d",&V);
     printf("Enter the numner of Tyres : ");
    scanf("%d",&T);
    int M =V*2;
    FW=(T-M)/2;
    TW=V-FW;
    printf("Total 4wheel vehicles are : %d\nTotal 2Wheel vehicles are : %d",FW,TW);
}
