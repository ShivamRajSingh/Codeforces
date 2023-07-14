import java.util.Scanner;

public class Marathon {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        long t = scan.nextLong();
        while(t-- > 0){
            long a,b,c,d;
            a = scan.nextLong();
            b = scan.nextLong();
            c = scan.nextLong();
            d = scan.nextLong();

            int count = 0;
            if(b > a){
                count++;
            }
            if(c > a){
                count++;
            }
            if(d > a){
                count++;
            }
            System.out.println(count);
        }
        scan.close();
    }
}
