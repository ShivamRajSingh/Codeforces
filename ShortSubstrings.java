import java.util.Scanner;

public class ShortSubstrings {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        while(t-- > 0){
            String str = scan.next();
            System.out.print(str.substring(0,2));
            for(int i = 3; i < str.length(); i+=2)
                System.out.print(str.charAt(i));
            System.out.println();
        }
        scan.close();
    }
}
