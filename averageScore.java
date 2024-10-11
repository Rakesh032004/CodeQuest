/*There are three rounds in an interview 
All n students will appear for all three rounds 
 Your task is to output average score for each candidate.

Each round is out of 100.

Example:
Total students: n: 2
Interview marks: 90 95 96
 90 91 88

Output: 92 91*/
import java.util.*;
public class AverageInterviewScore{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Total Students: ");
        int n=sc.nextInt();
        System.out.print("Interview Marks: ");
        int[] marks = new int[n*3];
        for(int i=0;i<n*3;i++){
            marks[i]=sc.nextInt();
        }
        int avg;
        for(int i=0;i<n;i++){
            avg=0;
            int count=0;
            /*for(int j=i+0;;j=j+n){
                avg+=marks[j];
                count++;
                if(count==3)
                    break;  
            }*/
            int j=i+0;
            while(count<3){
                avg+=marks[j];
                count++;
                j+=n;
            }
            System.out.println(avg/3);
           
        }
    }
}
