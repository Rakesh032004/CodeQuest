#include<stdio.h>
int max(int a,int b) {
	return a>b? a:b;
}

int knapsack(int n,int capacity,int w[100],int v[100]){
	int F[n][capacity+1],i,j;
	for(i=0;i<=n;i++) {
	F[i][0] = 0;
	F[0][i] = 0;
	}
	for(i=1;i<=n;i++) {
		for(j=1;j<=capacity;j++) {
			if(j-w[i]>=0) {
				F[i][j] = max(F[i-1][j],(v[i]+F[i-1][j-w[i]]));
			} else {
				F[i][j] = F[i-1][j];
			}
		}
	}
	printf("Table :\n");
	for(i=0;i<=n;i++) {
		for(j=0;j<=capacity;j++) {
		printf("%d\t",F[i][j]);
		}
	printf("\n");
	}
	return F[n][capacity];
}
			

void main() {
	int n,capacity,i,w[100],v[100];
	printf("ENTER THE NUMBER OF ITEMS:");
	scanf("%d",&n);
	printf("ENTER THE KNAPSCAK CAPACITY :");
	scanf("%d",&capacity);
	printf("ENTER THE WEIGHTS AND VALUES \n");
	for(i=1;i<=n;i++) {
		printf("ITEM %d WEIGHT :",i);
		scanf("%d",&w[i]);
		printf("ITEM %d VALUE :",i);
		scanf("%d",&v[i]);
	}
	printf("ITEM\tWEIGHT\tVALUE\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\t%d\t%d\n",i+1,w[i],v[i]);
	}
	int max = knapsack(n,capacity,w,v);
	printf("OPTIMAL SOLUTION : %d \n",max);
}
	
	
