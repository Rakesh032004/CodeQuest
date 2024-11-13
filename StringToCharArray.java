import java.util.Scanner;

public class StringToCharArray{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a string:");
        String input = scanner.nextLine();

        for (char c : input.toCharArray()) {
            System.out.println(c);
        }
    }
}

