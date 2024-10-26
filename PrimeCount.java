class PrimeCount{
    public static void main(String args[])
    {
        int n,count=0;
        System.out.println("Enter the number: ");
        n=new java.util.Scanner(System.in).nextInt();
        if(n<2)
        {
            System.out.println(count);
            return;
        }

        boolean prime;

        for(int i=2;i<=n;i++)
        {
            prime=true;
            for(int j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    prime=false;
                    break;
                }
            }
            if(prime)
                count++;           
        }
        
        System.out.println(count);
    }
}
