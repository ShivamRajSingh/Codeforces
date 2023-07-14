import java.util.Scanner;

public class DislikesOfThree {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        while(t-- > 0){
            int n = scan.nextInt();
            for(int i =1; i <= n; i++){
                if(i % 3 == 0 || i % 10 == 3){
                    n = n+1;
                }
            }
            System.out.println(n);
        }
        scan.close();
    }
}
