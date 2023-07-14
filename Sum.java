import java.util.Scanner;

public class Sum {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        while(t-- > 0){
            int a,b,c;
            a = scan.nextInt();
            b = scan.nextInt();
            c = scan.nextInt();
            String result = (a+b == c || a+c == b || b+c == a) ? "YES" : "NO";
            System.out.println(result);
        }
        scan.close();
    }
}
