import java.util.Scanner;

public class SpyDetected {
    public static void main(String[] args) {
        // To be revisited
        Scanner sc=new Scanner(System.in);
        int T=sc.nextInt();
        while(T!=0)
        {
            int n=sc.nextInt();
            int a[]=new int[n];

            for(int i=0;i<n;i++)
                a[i]=sc.nextInt();

            int m=a[0],p=0,t=0;

            for(int i=1;i<n;i++)
            {
                if(a[i]==m)
                    t++;
                else
                    p=i;
            }
            if(t==0)
                System.out.println("1");
            else
                System.out.println(p+1);
            T--;
        }
    
        sc.close();
    }
}
