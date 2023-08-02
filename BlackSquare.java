import java.util.Scanner;

public class BlackSquare {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int[] calories = new int[4];
        for(int i =0; i < 4; i++){
            calories[i] = scan.nextInt();
        }
        String str = scan.next();
        int sum = 0;
        for(int i =0; i < str.length(); i++){
            int num = Integer.parseInt(String.valueOf(str.charAt(i)));
            num--;
            sum += calories[num];
        }
        System.out.println(sum);
        scan.close();
    }
    
}
