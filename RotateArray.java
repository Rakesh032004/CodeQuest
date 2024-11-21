import java.util.Scanner;

class RotateArray{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of array elements");
        int n = sc.nextInt();

        int arr[] = new int[n];

        System.out.println("Enter array elements");
        for(int i =0; i<n; i++)
        {
            arr[i] = sc.nextInt();
        }

        System.out.println("Original Array is ");

        for(int i=0; i<n; i++)
            System.out.print(arr[i]+" ");

        for(int i=0, j=n-1; i<=j; i++, j--)
        {
           int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        System.out.println();
        System.out.println("Rotated Array is ");

        for(int i=0; i<n; i++)
            System.out.print(arr[i]+" ");

    }
}
