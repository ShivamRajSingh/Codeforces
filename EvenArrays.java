import java.util.ArrayList;
import java.util.Scanner;

public class EvenArrays{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        while(t-- > 0){
            int n = scan.nextInt();
            int even = 0;
            int odd = 0;
            for(int i =0; i < n; i++){
                int x = scan.nextInt();
                if(i % 2 != x % 2){
                    if(i % 2 == 0){
                        even++;
                    }else{
                        odd++;
                    }
                }
            }
            if(even != odd){
                System.out.println(-1);
            }else{
                System.out.println(odd);
            }
        }

        scan.close();
    }
}