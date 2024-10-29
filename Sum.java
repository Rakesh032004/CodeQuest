import java.util.Scanner;
public class Sum
{
	public static void main(String[] args) {
	
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter array size");
		int n = sc.nextInt();
		
		int arr[] = new int[n];
		int oddSum = 0, evenSum = 0;
		
		for(int i =0; i<n; i++)
		{
		    arr[i] = sc.nextInt();
		    if(arr[i]%2 == 1)
		        oddSum+=arr[i];
		    else
		        evenSum+=arr[i];
		       
		}
		
		System.out.println("Sum of odd numbers is "+oddSum);
		System.out.println("Sum of even numbers is "+evenSum);
		
	}
