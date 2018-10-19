    import java.util.Arrays;
    import java.util.Scanner;

    class pre_elim {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner s = new Scanner(System.in);
		int t = s.nextInt();
		while (t-- > 0) {
			int n = s.nextInt();
			int k = s.nextInt();
			int[] a = new int[n];
			for (int i = 0; i < n; i++) {
				int x = s.nextInt();
				a[i] = -x;
			}
			Arrays.sort(a);
			for (int i = 0; i < n; i++){
				a[i] = -a[i];
			}
			int c = 0;
			for (int i = 0; i < n; i++) {
				if (a[i] >= a[k-1]) {
					c++;
				}
			}
			System.out.println(c);
		}

	}

}
