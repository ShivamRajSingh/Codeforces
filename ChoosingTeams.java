import java.util.Scanner;

public class ChoosingTeams {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n,k;
        n = scan.nextInt();
        k = scan.nextInt();

        int atLeastChanceWithEachMember = 5-k;
        int countMembers =0;
        for(int i =0; i < n; i++){
            int memberParticipation = scan.nextInt();
            if(memberParticipation <= atLeastChanceWithEachMember){
                countMembers++;
            }
        }
        int maxTimesTeamsCanParticipate = countMembers/3;
        System.out.println(maxTimesTeamsCanParticipate);
        scan.close();
    }
}
