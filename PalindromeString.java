import java.util.Scanner;

public class PalindromeString{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = scanner.nextLine();

        int left = 0;
        int right = str.length() - 1;

        while (left < right) {
            if (str.charAt(left) != str.charAt(right)) {
                System.out.println(str + " is not a palindrome.");
                return;
            }
            left++;
            right--;
        }

        System.out.println(str + " is a palindrome.");
    }
}
