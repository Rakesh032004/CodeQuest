
import java.util.Scanner;

public class ValidString{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String input = scanner.nextLine();

        if (isValid(input)) {
            System.out.println("The string is valid.");
        } else {
            System.out.println("The string is not valid.");
        }

        scanner.close();
    }

    public static boolean isValid(String str) {
        int starCount = 0;
        int hashCount = 0;

        for (char c : str.toCharArray()) {
            if (c == '*') {
                starCount++;
            } else if (c == '#') {
                hashCount++;
            }
        }

        return starCount == hashCount;
    }
}
