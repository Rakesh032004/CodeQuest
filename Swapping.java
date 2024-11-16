
public class Swapping {
    public static void main(String[] args) {
        // Method 1: Using Temp Variable

        int a1 = 5;
        int b1 = 10;
        System.out.println("Method 1: Before swap: a = " + a1 + ", b = " + b1);
        int temp = a1;
        a1 = b1;
        b1 = temp;
        System.out.println("After swap: a = " + a1 + ", b = " + b1);

        // Method 2: Without Using Temp Variable (Using Arithmetic Operations)
        int a2 = 5;
        int b2 = 10;
        System.out.println("Method 2: Before swap: a = " + a2 + ", b = " + b2);
        a2 = a2 + b2; 
        b2 = a2 - b2; 
        a2 = a2 - b2; 
        System.out.println("After swap: a = " + a2 + ", b = " + b2);

        // Method 3: Without Using Temp Variable and Arithmetic Operations
        int a3 = 5;
        int b3 = 10;
        System.out.println("Method 3: Before swap: a = " + a3 + ", b = " + b3);
        a3 = a3 ^ b3; 
        b3 = a3 ^ b3; 
        a3 = a3 ^ b3; 
        System.out.println("After swap: a = " + a3 + ", b = " + b3);
    }
}


