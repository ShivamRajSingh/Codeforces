import java.util.Scanner;

public class MishkaandGame {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        int mishka = 0;
        int chris = 0;
        while(t-- > 0){
            int m,c;
            m = scan.nextInt();
            c = scan.nextInt();
            if(m == c){
                continue;
            }else if (m > c){
                mishka++;
            }else{
                chris++;
            }
        }
        if(mishka == chris){
            System.out.println("Friendship is magic!^^");
        }else if (mishka > chris){
            System.out.println("Mishka");
        }else{
            System.out.println("Chris");
        }
        scan.close();
    }
}
