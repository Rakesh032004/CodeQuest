#include<stdio.h>
void main(){
    int Num,count;
    printf("Enter a number\n");
    scanf("%d",&Num);
    for(int j=Num+1;;j++){
        count=0;
    for(int i=2;i<=j;i++){
        if(j%i==0){
            count++;
        }
    }
        if(count==1){
            printf("The Next prime number of  %d is :%d",Num,j);
           break;
      }
    }
}
