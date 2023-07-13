import java.util.Scanner;

public class SerejaAndDima {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int arr[] = new int[n];
        for(int i =0; i < n; i++){
            arr[i] = scan.nextInt();
        }
        int i = 0;
        int j = n-1;

        int sereya = 0;
        int dima = 0;

        boolean flag = true;

        while(i <= j && i < n && j >=0){
            if(arr[i] >= arr[j]){
                if(flag){
                    sereya += arr[i];
                }else{
                    dima += arr[i];
                }
                i++;
            }else if(arr[i] < arr[j]){
                if(flag){
                    sereya += arr[j];
                }else{
                    dima += arr[j];
                }
                j--;
            }
            flag = !flag;
        }
        System.out.println(sereya + " " + dima);
        scan.close();
    }
}
