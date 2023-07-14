import java.util.Scanner;

public class Borze{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String str = scan.next();
        str = str.replace("--", "2");
        str = str.replace("-.", "1");
        str = str.replace(".","0");
        System.out.println(str);
        scan.close();
    } 
}