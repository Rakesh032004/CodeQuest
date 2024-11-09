import java.util.*;
public class LowerCaseCharecters {
    public static void main(String[]args)
    {
        int count = 0;
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        for (int i = 0; i < s.length(); i++) 
        {
            if(Character.isLowerCase(s.charAt(i)))
            {
                count++;
            }
        }
      
        System.out.println(count);
    }
}
