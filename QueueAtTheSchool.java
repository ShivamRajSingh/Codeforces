import java.util.Scanner;

public class QueueAtTheSchool {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n,t;
        n = scan.nextInt();
        t = scan.nextInt();
        String str = scan.next();
        while(t-- > 0){
            str = str.replaceAll("BG", "GB");
        }
        System.out.println(str);
        scan.close();
    }
}
