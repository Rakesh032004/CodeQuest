#include<stdio.h>
#define max 100

void warshall(int n,int adj[max][max]) {
	int i,j,k;
	for(k=0;k<n;k++) {
		for(i=0;i<n;i++) {
			for(j=0;j<n;j++) {
				adj[i][j] = adj[i][j] || (adj[i][k] && adj[k][j]);
				}
			}
		}
	printf("-----DISPLAY-----\n");
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			printf("%d\t",adj[i][j]);
			}
		printf("\n");
		}
	}

 void main() {
	int n,adj[max][max];
	printf("ENTER THE NUMBER OF VERTICES :\n");
	scanf("%d",&n);
	printf("ENTER THE ADJACENCY MATRIX :\n");
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			scanf("%d",&adj[i][j]);
		}
	}
	warshall(n,adj);
}
