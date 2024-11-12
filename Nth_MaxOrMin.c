#include<stdio.h>
void main(){
int i,j,a[100],min_ele[50],max_ele[50],n,k,l,min,max,flag[100],gate;
printf("Enter the no of array elements\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<n;i++){
            scanf("%d",&a[i]);
    }
     printf("The array elements\n");
    for(i=0;i<n;i++){
            printf("%d",a[i]);
    }
    printf("\nEnter the value of k:");
    scanf("%d",&k);
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
                if(a[j]<a[min])
                        min=j;
        }
        if(min!=i){
                int temp=a[i];
                a[i]=a[min];
                a[min]=temp;
        }
    }
     for(i=0;i<n;i++){
            printf("%d",a[i]);
     }
    printf("the kth min is %d\nKth max is %d",a[k-1],a[n-k]);
}