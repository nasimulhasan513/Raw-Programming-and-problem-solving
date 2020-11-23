import java.util.Scanner;

public class ConditionalStatements {
    public static void main(String[] args) {
        int n;
        Scanner inpt = new Scanner(System.in);
        n = inpt.nextInt();
        if(n%2==0){
            System.out.println("even");
        }else{
            System.out.println("odd");
        }
        inpt.close();

    }
}
