class DigitProduct
{
    public static void main(String args[])
    {
        System.out.println("Enter the value of N: ");
        int N = new java.util.Scanner(System.in).nextInt();
        int price=1;
        while(N!=0)
        {
            price*=N%10;
            N/=10;
        }
		System.out.println(price);
    }
}
