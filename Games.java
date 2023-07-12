import java.util.Scanner;

public class Games{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        int []h = new int[t];
        int []a = new int[t];

        int i =0;
        while(t-- > 0){
            h[i] = scanner.nextInt();
            a[i] = scanner.nextInt();
            i++;
        }

        int result =0;
        
        for(int j=0; j < h.length; j++){
            for(int k =0; k < a.length; k++){
                if(h[j] == a[k]){
                    result++;
                }
            }
        }

        System.out.println(result);

        scanner.close();
    }
}