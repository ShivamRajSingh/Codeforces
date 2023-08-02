import java.util.Scanner;

public class PlusOneOnTheSubset {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        long t = scan.nextLong();
        while(t-- > 0){
            int n = scan.nextInt();
            int maxi = Integer.MIN_VALUE;
            int mini = Integer.MAX_VALUE;
            for(int i =0; i < n; i++){
                int num = scan.nextInt();
                maxi = Math.max(maxi, num);
                mini = Math.min(mini, num);
            }
            System.out.println(maxi-mini);
        }
        scan.close();
    }
}
