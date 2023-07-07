import java.util.Scanner;

public class Tram {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int a,b;

        int maxCapacity = Integer.MIN_VALUE;
        int totalPassengers = 0;

        while(n !=0){
            a = scan.nextInt();
            b = scan.nextInt();
            totalPassengers += b-a;
            if(maxCapacity < totalPassengers){
                maxCapacity = totalPassengers;
            }
            n--;
        }
        System.out.println(maxCapacity);
        scan.close();
    }
}
