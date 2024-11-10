#include<stdio.h>
void main(){
    int Marks[100],OutCnt=0,ExcCnt=0,VeryCnt=0,GoodCnt=0,HardCnt=0;
    printf("Enter the Maths marks of 10 Students\n");
    for(int i=0;i<10;i++){
        scanf("%d",&Marks[i]);
    }
    for(int i=0;i<10;i++){
        if(Marks[i]>=90){
            OutCnt++;
            printf("Marks=%d : Outstanding Performance\n",Marks[i]);
        }
        else if(Marks[i]>=80&&Marks[i]<=89){
            ExcCnt++;
            printf("Marks=%d : Excellent Performance\n",Marks[i]);
        }
        else if(Marks[i]>=70&&Marks[i]<=79){
            VeryCnt++;
            printf("Marks=%d : VeryGood Performance\n",Marks[i]);
        }       
         else if(Marks[i]>=60&&Marks[i]<=69){
            GoodCnt++;
            printf("Marks=%d : Good Performance\n",Marks[i]);
        }
        else if(Marks[i]<60){
            HardCnt++;
            printf("Marks=%d : StudyHard\n",Marks[i]);
        }
    }
    printf("%d Students Performed Outstanding\n",OutCnt);
    printf("%d Students Performed Excellent\n",ExcCnt);
    printf("%d Students Performed VeryGood\n",VeryCnt);
    printf("%d Students Performed Good\n",GoodCnt);
    printf("%d Students need to Study hard\n",HardCnt);
    }