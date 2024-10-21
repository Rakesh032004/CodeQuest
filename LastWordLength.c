#include<stdio.h>
#include<ctype.h>
void main() 
{
  char s[199],q[100];
  int count=0,i,k=0,j,revcount=0;
  printf("Enter a string\n");
  scanf(" %[^\n]",s);
  for(i=0;s[i]!='\0';i++){
    count++;
  }
  printf("%d\n",count);
  j=count;
  while(s[j]!=32){
      if(isalpha(s[j]))
       revcount++;
    j--;
  }
  /*for(i=revcount;s[i]!='\0';i++)
   q[k++]=s[i];*/
  printf("%d",revcount);
}
