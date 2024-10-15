/*A parking lot in a mall has RxC number of parking spaces. 
Each parking space will either be  empty(0) or full(1). 
The status (0/1) of a parking space is represented as the element of the matrix. 
The task is to find which row in the parking lot that has the most of the parking spaces full(1).

Note :
RxC- Size of the matrix
Elements of the matrix M should be only 0 or 1.

Example 1:
Input :
3   -> Value of R(row)
3    -> value of C(column)
[ 0 1 0 
  1 1 0 
  1 1 1
] 

Output :
3  -> Row 3 has maximum number of 1’s

Example 2:
input :
4 -> Value of R(row)
3 -> Value of C(column)

[ 0 1 0 
  1 1 0 
  1 0 1 
  1 1 1
] 
Output :
4  -> Row 4 has maximum number of 1’s */
import java.util.*;
public class Parking_Slot {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int R,C,count=0,max=0,i,j,index=0;
        int M[][]=new int[50][50];
        System.out.println("Enter Row & Column size");
        R=sc.nextInt();
        C=sc.nextInt();
        System.out.println("Enter the status of the parking slot");
        for(i=0;i<R;i++){
            for(j=0;j<C;j++){
                M[i][j]=sc.nextInt();
            }
        }
        for(i=0;i<R;i++){
            for(j=0;j<C;j++){
                if(M[i][j]==1)
                    count++;
            }
            if(count>max){
                max=count;
                index=i;
                count=0;
            }
        }
        System.out.println(index+1);

    }
    
}
