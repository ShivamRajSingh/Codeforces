import java.util.Scanner;

public class Division {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        long t = scan.nextLong();
        while(t-- > 0){
            int rating = scan.nextInt();
            if(rating >= 1900){
                System.out.println("Division 1");
            }else if (rating >= 1600 && rating <= 1899){
                System.out.println("Division 2");
            }else if (rating >= 1400 && rating <= 1599){
                System.out.println("Division 3");
            }else{
                System.out.println("Division 4");
            }
        }
        scan.close();
    }
}
