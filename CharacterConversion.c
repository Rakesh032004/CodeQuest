/*Input:
hiii
 2
Output 
jkk

Input
zebra
3

Output 
cheud

Note: all charecters are lowercase*/

#include<stdio.h>
void main(){
    char str[20],str2[20];
    int b;
    printf("input: ");
    scanf("%s",str);
    scanf("%d",&b);
    //printf("%c",str[0]+b);
     for(int i=0;str[i]!='\0';i++){
        if(str[i]+b>=122){
            str2[i]=96+b;
        }
        else
            str2[i]=str[i]+b;
    }
    printf("%s",str2);
}