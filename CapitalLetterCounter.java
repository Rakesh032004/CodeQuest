import java.util.Scanner;

public class CapitalLetterCounter {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a string:");
        String input = scanner.nextLine();
        scanner.close();

        int capitalCount = 0;
        for (char c : input.toCharArray()) {
            if (Character.isUpperCase(c)) {
                capitalCount++;
            }
        }
        System.out.println("Number of capital letters: " + capitalCount);
    }
}
