/*
Input:
String inp = a3b1d2

Output
 aaabdd */
 import java.util.*;
public class DecodingString {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a String:");
        String Input = sc.nextLine();
        for(int i=0;i<Input.length();i+=2){
            if(Input.charAt(i+1)>48 && Input.charAt(i+1)<59){
                for(int j=0;j<Input.charAt(i+1)-'0';j++){
                    System.out.print(Input.charAt(i));
                }
            }
        }   
    } 
}
