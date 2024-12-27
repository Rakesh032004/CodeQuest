
import java.util.Scanner;

public class FindOccurence {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the number of elements: ");
        int n = scanner.nextInt();

        int[] arr = new int[n];
        System.out.println("Enter " + n + " elements: ");
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }

        System.out.println("Enter the key: ");
        int key = scanner.nextInt();

        int count = 0;
        for (int num : arr) {
            if (num == key) {
                count++;
            }
        }
        System.out.println("Number of occurrences: " + count);
    }
}
