#include<stdio.h>
void main(){
        float Units,KWh,Rate,RuralRebate,Tax,Charge;
        printf("Enter the total units consumed\n");
        scanf("%f", &Units);
        printf("Enter the Rate per unit\n");
        scanf("%f",&Rate);
        printf("Enter the RuralRebate per unit\n");
        scanf("%f",&RuralRebate);
         printf("Enter the Tax Amount\n");
        scanf("%f",&Tax);
         if(Units<200)
          printf("You have Consumed less than 200 Units of power. So your Bill was paid by governament\n");
        else 
            Charge=(((Units-200)*Rate)+(RuralRebate*Units)+Tax);
            printf("Total Amount to be paid is : %0.2f",Charge);

}