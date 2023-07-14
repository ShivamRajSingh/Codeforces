import java.util.Scanner;

public class YESorYES {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        while(t-- > 0){
            String str = scan.next();
            if(str.toUpperCase().equals("YES")){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
        scan.close();
    }
}
