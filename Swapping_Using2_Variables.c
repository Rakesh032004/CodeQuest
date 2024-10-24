#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter Two Numbers\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swapping a=%d b=%d",a,b);
}