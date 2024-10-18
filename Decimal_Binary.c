#include<stdio.h>
#include<stdlib.h>
void decimal_binary(int decimal){
    char binarynumber[50];
    itoa(decimal,binarynumber,2);
    printf("The binary Number is : %s",binarynumber);
}
void main(){
    int decimal;
    printf("enter the decimal number :\n");
    scanf("%d",&decimal);
    decimal_binary(decimal);
}