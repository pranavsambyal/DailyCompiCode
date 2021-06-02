import java.util.Scanner;

public class charges {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while (t-- > 0) {
            int n, k;

            n = input.nextInt();
            k = input.nextInt();

            String st = input.next();

            int q[] = new int[k];

            for (int i = 0; i < k; i++) {
                int z;
                z = input.nextInt();
                q[i] = z - 1;
            }

            int s[] = new int[n];

            for (int i = 0; i < n; i++) {
                s[i] = Character.getNumericValue(st.charAt(i));
            }

            int l = 0;

            for (int i = 1; i < n; i++) {
                if (s[i - 1] == s[i]) {
                    l = l + 2;
                } else {
                    l = l + 1;
                }

            }
            
            for (int i = 0; i < k; i++) {
                int pr = q[i] - 1, nx = q[i] + 1;
                {
                    if (s[q[i]] == 0) {
                        s[q[i]] = 1;
                    } else {
                        s[q[i]] = 0;
                    }
                }

                {
                    if (pr >= 0) {
                        if (s[pr] == s[q[i]]) {
                            l = l + 1;
                        } else {
                            l = l - 1;
                        }
                    }
                }
                {
                    if (nx < n) {
                        if (s[nx] == s[q[i]]) {
                            l = l + 1;
                        } else {
                            l = l - 1;
                        }
                    }
                }
                System.out.println(l);
            }
        }
    }
}