import java.util.Scanner;

public class StonesOnTheTable {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        String s = scan.next();
        int count = 0;
        for(int i =1; i < n-1; i++){
            if(s.charAt(i) == s.charAt(i-1)){
                count++;
            }
        }
        if(n > 1){
            if(s.charAt(n-1) == s.charAt(n-2)){
            count++;
        }
        }
      
        System.out.println(count);  
        scan.close();
    }
}
