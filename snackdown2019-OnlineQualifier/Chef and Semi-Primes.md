		import java.util.Scanner;

		class semiPrimes {

	static int checkSemiprime(int num) {
		int cnt = 0;

		double sr = Math.sqrt(num);

		// If square root is an integer
		if (sr - Math.floor(sr) == 0) {
			return 0;
		} else {
			for (int i = 2; cnt < 2 && i * i <= num; ++i)

				while (num % i == 0) {
					num /= i;

					++cnt;
				}

			if (num > 1)
				++cnt;

			return cnt == 2 ? 1 : 0;
		}
	}

	static int semiprime(int n) {
		if (checkSemiprime(n) != 0)
			return 1;
		else
			return 0;
	}

	public static void main(String[] args) {

		Scanner s = new Scanner(System.in);
		int t = s.nextInt();
		while (t-- > 0) {
			int n = s.nextInt();

			int i = 0;
			int j = n;
			int ans = 0;
			while (i <= n / 2) {
				int x = semiprime(i);
				int y = semiprime(j);
				// System.out.println(x + " " + y);

				if (x == 1 && y == 1) {
					System.out.println("YES");
					ans = 1;
					break;
				}
				i++;
				j--;

			}
			if (ans == 0) {
				System.out.println("NO");
			}
		}
	}

}
