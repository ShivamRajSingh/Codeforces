import java.util.Scanner;

public class Contest {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int a,b,c,d;
        a = scan.nextInt();
        b = scan.nextInt();
        c = scan.nextInt();
        d = scan.nextInt();

        int misha = Math.max(3*a/10, a-a/250*c);
        int vasya = Math.max(3*b/10, b-b/250*d);

        if(misha == vasya){
            System.out.println("Tie");
        }else if (misha > vasya){
            System.out.println("Misha");
        }else{
            System.out.println("Vasya");
        }
        scan.close();
    }
}
