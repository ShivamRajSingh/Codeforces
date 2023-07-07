import java.util.Scanner;

public class ChatRoom {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String str = scan.next();      
        
        if(str.matches(".*h.*e.*l.*l.*o.*")){
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }
        
        scan.close();
    }
}
