#include<stdio.h>
#include<stdlib.h>

int main()
{
    int max[10][10], need[10][10], alloc[10][10] , avail[10], completed[10], safeseq[10];
    int p,r,i,j,process,count=0;

    printf("Enter the Number of Process :- ");
    scanf("%d",&p);

    for(i=0; i<p; i++)
      completed[i]=0;

    printf("\n Enter the number of resources :-");
    scanf("%d",&r);

    printf("\n Enter the Max matrix :- ");
    for(i=0;i<p;i++)
    {
      printf("\n For process %d : ",i+1);
      for(j=0;j<r;j++) 
      {
        scanf("%d",&max[i][j]);
      }
    }

    printf("\n Enter the allocation : ");
    for(i=0;i<p;i++)
    {
      printf("\n For process %d : ",i+1);
      for(j=0;j<r;j++) 
      {
        scanf("%d",&alloc[i][j]);
      }
    }

    printf("\n Enter the available resources : ");
    for(i=0;i<r;i++) 
    {
      scanf("%d",&avail[i]);
    }

   // printf("The Need Matrix\n");
    for(i=0;i<p;i++) 
    {
      for(j=0;j<r;j++) 
      {
        need[i][j] = max[i][j]-alloc[i][j];
      }
    }
  do
  {
    printf("\n Max Matrix :\t\t\t\t\t\t\t\t Allocation Matrix : \n");
    for(i=0;i<p;i++)
    {
      for(j=0;j<r;j++)
        printf("\t%d\t",max[i][j]);
        printf("\t\t");
      for(j=0;j<r;j++)
        printf("\t%d\t",alloc[i][j]);
        printf("\n");
      /*for(j=0;j<r;j++)
        printf("\t%d\t",need[i][j]);
        printf("\n");*/
    }
    process = -1;
    for(i=0;i<p;i++)
    {
      if(completed[i]==0)
      {
        process = i;
        for(j=0;j<r;j++)
        {
          if(avail[j]<need[i][j])
          {
            process = -1;
            break;
          }
        }
      }
      if(process!=-1)
      {
        break;
      }
    }
    if(process!=-1)
    {
      safeseq[count] = process + 1;
      count++;
      for(j=0;j<r;j++)
      {
        avail[j] += alloc[process][j];
        alloc[process][j] = 0;
        max[process][j] = 0;
        completed[process] = 1;
      }
    }
     
  }while(count!=p && process != -1);
     
  if(count == p)
  {
    printf("The System is in Safe State..\n");
    printf("Safe Sequence :- ");
    for(i=0;i<p;i++) 
    {
      printf("%d > ",safeseq[i]);
    }
  }
  else
  {
    printf("System is not in Safe state");
  }
}
