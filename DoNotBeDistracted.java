import java.util.Scanner;

public class DoNotBeDistracted {
    public static void solve(String str, int n){
            for(char c = 'A'; c <= 'Z'; c++){
                int first = n;
                int last = -1;
                for(int i =0; i < n; i++){
                    if(str.charAt(i) == c){
                        first = Math.min(first, i);
                        last = Math.max(last, i);
                    }
                }
                for(int i = first; i <= last; i++){
                    if(str.charAt(i) != c){
                        System.out.println("NO");
                        return;
                    }
                }   
            }
            System.out.println("YES");
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        while(t-- > 0){
            int n = scan.nextInt();
            String str = scan.next();
            solve(str,n);
        }
        scan.close();
    }
}
