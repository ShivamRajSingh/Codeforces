import java.util.Scanner;

public class Bitpp{
    public static void main(String []args){
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        int count = 0;
        while(t!=0){
            String str = scan.next();
            if(str.charAt(0) == '+' || str.charAt(str.length()-1) == '+'){
                count++;
            }else{
                count--;
            }
            t--;
        }
        System.out.println(count);
        scan.close();
    }
}