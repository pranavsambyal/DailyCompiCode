import java.util.Scanner;
import java.util.Arrays;

public class sieve_of_eratosthenes {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        boolean n[] = new boolean[(int) 1e7 + 1];
        Arrays.fill(n, true);
        n[0] = n[1] = false;
        for (int i = 2; i * i <= 1e7; i++) {
            if (n[i] == true) {
                for (int p = i * i; p <= 1e7; p = p + i) {
                    n[p] = false;
                }
            }
        }
        while (t-- > 0) {
            int s = input.nextInt();
            int e = input.nextInt();
            for (int a = s; a <= e; a++) {
                if (n[a]) {
                    System.out.println(a);
                }
            }
            System.out.println(' ');
        }
    }
}