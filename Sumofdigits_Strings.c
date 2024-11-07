/*Input:
String inp = sam5rt6h1

Output 
Sum of digits in input string 

12*/
#include<stdio.h>
#include<ctype.h>
void main(){
    char str[10];
    int sum=0;
    printf("Enter a string:");
    scanf(" %[^\n]",str);
    for(int i=0;str[i]!='\0';i++){
        if(isdigit(str[i])){
             sum+=str[i]-'0';
        }
    }
    printf("sum:%d",sum);
}