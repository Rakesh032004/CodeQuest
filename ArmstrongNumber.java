
import java.util.Scanner;

public class ArmstrongNumber {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = scanner.nextInt();
      

        int originalNum = num;
        int sum = 0;
        int digitCount = 0;
        int temp = num;

        while (temp != 0) {
            temp /= 10;
            digitCount++;
        }

        temp = num;
        while (temp != 0) {
            int digit = temp % 10;
            sum += (int) Math.pow(digit, digitCount);
            temp /= 10;
        }

        if (sum == originalNum) {
            System.out.println(originalNum + " is an Armstrong number.");
        } else {
            System.out.println(originalNum + " is not an Armstrong number.");
        }
    }
}
