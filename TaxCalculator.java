import java.util.Scanner;

public class TaxCalculator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the cost of pencil: ");
        float a = sc.nextFloat();
        System.out.print("Enter the cost of pen: ");
        float b = sc.nextFloat();
        System.out.print("Enter the cost of eraser: ");
        float c = sc.nextFloat();
        float total = (a + b + c);
        System.out.println("Bill is : " + total);
        // Add on - with 18% tax
        float newTotal = total + (0.18f * total);
        System.out.println("Bill with 18% tax : " + newTotal);
        
    }
}
