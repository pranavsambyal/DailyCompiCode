import java.util.*;
import java.lang.*;

class segmented_sieve {
    public static void main(String[] args) throws java.lang.Exception {

        double m = 1e9;
        double l = Math.floor(Math.sqrt(m));
        boolean n[] = new boolean[(int) l + 1];
        Arrays.fill(n, true);
        n[0] = n[1] = false;
        int mxpri = 0;
        for (int i = 2; i * i <= l; i++) {
            if (n[i] == true) {
                for (int p = i * i; p <= l; p = p + i) {
                    n[p] = false;
                }
            }
        }
        int ar[] = new int[3402];
        int y = 0;
        for (int i = 0; i <= l; i++) {
            if (n[i]) {
                ar[y] = i;
                y++;
            }
        }
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while (t-- > 0) {
            int s = input.nextInt();
            int e = input.nextInt();
            int len = e - s;
            boolean seg[] = new boolean[len + 1];
            Arrays.fill(seg, true);
            for (int i = 0; i <= e; i++) {
                int lm = (s / ar[i]) * ar[i];
                if (lm < s) {
                    lm += ar[i];
                }
                for (int j = lm; j <= e; j += ar[i]) {
                    seg[j - s] = false;
                }
            }
            for (int a = 0; a <= len; a++) {
                if (seg[a]) {
                    if (a + s != 1) {
                        System.out.println(a + s);
                    }
                }
            }
            System.out.println(' ');
        }

    }
}
