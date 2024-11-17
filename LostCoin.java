// Find the lost coin from 1 to N

import java.util.Scanner;

public class LostCoin {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter the total number of coins: ");
        int n = scanner.nextInt();
        
        int[] rem = new int[n - 1];
        System.out.println("Enter the remaining coins:");
        for (int i = 0; i < n - 1; i++) {
            rem[i] = scanner.nextInt();
        }
        
        int sum = (n * (n + 1)) / 2; 
        int actualSum = 0;
        for (int coin : rem) {
            actualSum += coin; 
        }
        
        System.out.println("Lost coin: " + (sum - actualSum));
    }
}
