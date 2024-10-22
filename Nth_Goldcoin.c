#include<stdio.h>
#include<time.h>
void main(){
    double start=clock();
    int i,j,n,arr[100],sum1=0,sum2=0;
    printf("N: ");
    scanf("%d",&n);
    printf("Give the Remaining coins\n");
    for(i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
    }
    sum1=(n*(n+1))/2;
    for(i=0;i<n-1;i++){
       sum2+=arr[i];
    }
    printf("The lost coin is:%d\n",sum1-sum2);
    double end=clock();
    printf("%lf",(end-start)/CLOCKS_PER_SEC);
}