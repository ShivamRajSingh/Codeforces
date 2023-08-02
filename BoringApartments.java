import java.util.Scanner;

public class BoringApartments {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        while(t-- > 0){
            int num = scan.nextInt();
            int dig = num % 10;
            int numDigits = 0;
            while(num != 0){
                numDigits++;
                num = num/10;
            }
            int operations = 10 * (dig-1) + numDigits*(numDigits+1)/2;
            System.out.println(operations);
        }
        scan.close();
    }
}
