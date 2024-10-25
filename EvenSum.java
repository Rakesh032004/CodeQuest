import java.util.Scanner;

public class array {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the array size");
        int n = sc.nextInt();
        int nums[] = new int[n];
        System.out.println("Enter the array elements");
        int sum=0;
        for(int i=0; i<n; i++)
        {
            nums[i]=sc.nextInt();
            if(nums[i]%2==0)
                sum+=nums[i];

        }
         System.out.println("Sum of even numbers is  "+sum);
    }
}
