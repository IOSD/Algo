    import java.util.ArrayList;
    import java.util.Collections;
    import java.util.HashMap;
    import java.util.Scanner;
    import java.util.Set;

     class q5 {
	public static int h = 1000000007;

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		int t = s.nextInt();
		while (t-- > 0) {
			int n = s.nextInt();

			HashMap<Integer, Long> abc = new HashMap<Integer,Long>();
			long arr[] = new long[n + 1];
			arr[2] = 1;
			for (int i = 4; i <= n; i = i + 2) {
				arr[i] =( ((i - 1)%h) * (arr[i - 2]%h))%h;
			}
			for (int i = 0; i < n; i++) {
				int c = s.nextInt();
				if (!abc.containsKey(c)) {
					abc.put(c, (long)1);
				} else {
					abc.put(c, abc.get(c) + 1);
				}

			}
			
			Set<Integer> res = abc.keySet();

			long ans = 1;
			ArrayList<Integer> a = new ArrayList<>();
			for (int values : res) {
				a.add(values);
			}

			Collections.sort(a,Collections.reverseOrder());
			
			for (int i = 0; i < a.size(); i++) {

				if (abc.get(a.get(i)) % 2 == 0) {
					ans = ((ans%h) * (arr[(int)(abc.get(a.get(i))+0)]%h))%h;
					ans=ans%h;
				} else {
					ans = (((ans%h) * ((arr[(int)(abc.get(a.get(i)) + 1)])%h)%h) * (abc.get(a.get(i + 1))%h))%h;
					abc.put(a.get(i + 1), abc.get(a.get(i + 1)) - 1);
					if (abc.get(a.get(i + 1)) == 0) {
						abc.remove(a.get(i + 1));
						a.remove(i + 1);
					}
					ans = ans % h;
				}
			}
			ans = ans % h;
			System.out.println(ans%h);

		}
	}

}
