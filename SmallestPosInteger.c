#include<stdio.h>
void main(){
    int n,res,i=1;
    printf("Enter a number:");
    scanf("%d",&n);
        if(n%2==0){
            printf("The Smallest multiple of both %d and %d is :%d",n,2,n);
            //break;
        } 
        else    
            printf("The Smallest multiple of both %d and %d is : %d",n,2,n*2);
} 