#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void main(){
    char Password[50];
    int Upper=0,lower=0,special=0;
    printf("Enter the password\n");
    scanf("%s", Password);
    if(strlen(Password)<8){
        printf("Password is too short\n");
        exit(0);
    }
    for(int i=0;i<strlen(Password);i++){
        if(isupper(Password[i])){
            Upper=1;
        }
          if(islower(Password[i])){
            lower=1;
        }
          if(!isalnum(Password[i])){
            special=1;
        }
    }
    if(Upper&&lower&&special)
        printf("Your Password is strong\n");
    else 
        printf("Your Password is not strong\n");

}