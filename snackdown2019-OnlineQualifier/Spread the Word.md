import java.util.Scanner;

 class spreadword2 {
    public static void main(String[] args) {
        // TODO Auto-generated method stub
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        while (t-- > 0) {
            int n = s.nextInt();
            long[] a = new long[n+1];
            a[0] = 0;
            for (int i = 1; i <= n; i++) {
                int temp = s.nextInt();
                a[i] = a[i-1] + temp;
            }
            int i=1 , ans=0;
            long k=1;
            while(k<n)
            {
                ans++;
                k+=a[i];
                i=(int )k;

            }
            System.out.println(ans);
        }

    }

}

