import java.util.Scanner;

public class WayTooLongWords{
    public static void main(String []args){
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        while(t!=0){
            String str = scan.next();
            int n = str.length();
            if(n <= 10){
                System.out.println(str);
                t--;
                continue;
            }

            System.out.println(str.charAt(0) + String.valueOf(n-2) + str.charAt(n-1));
            t--;
        }
        scan.close();
    }
}