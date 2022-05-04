import java.util.Scanner;

public class SoftDrinking {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        int n,k,l,c,d,p,nl,np;

        n = scan.nextInt();
        k = scan.nextInt();
        l = scan.nextInt();
        c = scan.nextInt();
        d = scan.nextInt();
        p = scan.nextInt();
        nl = scan.nextInt();
        np = scan.nextInt();

        int result = Math.min(k*l/nl, Math.min(c*d, p/np))/n;
        System.out.println(result);
        scan.close();
    }
}
