import java.util.*;
public class CharCount {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str1 = sc.nextLine();
        String str2 = sc.nextLine();
        int count =0;
        for (int i = 0; i < str1.length(); i++) {
            if(str1.charAt(i)==str2.charAt(0))
            {
                count++;
            }
        }
        if(count>0)
        {
            System.out.println(count);
        }
        else{
            System.out.println("NA");
        }
    }
}
