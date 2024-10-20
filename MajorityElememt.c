#include<stdio.h>
void main(){
    int num,count=0,maj=0,a[100],i,j,MajEle;
    printf("Enter the no of array elements\n");
    scanf("%d",&num);
    printf("Enter the array elements\n");
    for(i=0;i<num;i++){
            scanf("%d",&a[i]);
    }
     printf("The array elements\n");
    for(i=0;i<num;i++){
            printf("%d",a[i]);
    }
    for(i=0;i<num;i++){
        count=0;
        for(j=0;j<num;j++){
            if(a[i]==a[j])
                count++;
        }
        if(count>maj){
            MajEle=a[i];
            maj=count;
        }
    }
    printf("\nThe Majority element is %d",MajEle);
}
