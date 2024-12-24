
import java.util.Scanner;

public class CharFreq {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter a string: ");
        String inputString = scanner.nextLine();

        System.out.println("Enter a character: ");
        char inputChar = scanner.next().charAt(0);

        int frequency = 0;
        for (char c : inputString.toCharArray()) {
            if (c == inputChar) {
                frequency++;
            }
        }

        System.out.println("Frequency of '" + inputChar + "' in the string: " + frequency);
    }
}
