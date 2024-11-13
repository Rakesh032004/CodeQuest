 #include<stdio.h>
 #include<stdlib.h>
 void main(){
    int n,i,j,a[100][100],k;
    printf("Number Of Vertices :\n");
    scanf("%d",&n);
    int indegree[10];
   /* for(i=0;i<n;i++){
       res[i]=0; 
    }*/
    
    printf("Enter the adjacency matrix :\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]==1)
                indegree[j]+=1;
        }
    }
    int seq[n],visited[n];
  for(i=0;i<n;i++){
        visited[i]=0;
  }
  i=0,j=0,k=0;
  int count=0;
  while(k<n){
    count=0;
    i=0;
    while(i<n){
        if(indegree[i]==0 && visited[i]==0){
            count++;
            for(j=0;j<n;j++){
                if(a[i][j]==1){
                    a[i][j]--;
                    indegree[j]--;
                }
                
            }
            visited[i]=1;
            seq[k++]=i+1;
        }
        i++;
    }
    if(count==0){
                printf("ERROR !\nGraph Contains Loop...\n");
                return;
        }
  }
if(count!=0){
  printf("The Sequence is:");
   for(j=0;j<n;j++){
        printf("%d ",seq[j]);
   }
 }
 }