import java.util.Scanner;

class chefnop2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner s = new Scanner(System.in);
		int t = s.nextInt();
		boolean temp2 = true;
		while (t-- > 0) {
			int n = s.nextInt();
			int[] a = new int[n];
			int[] b = new int[n];
			for (int i = 0; i < n; i++) {
				a[i] = s.nextInt();
			}
			for (int i = 0; i < n; i++) {
				int temp = s.nextInt();
				b[i] = temp - a[i];
				if (b[i] < 0)
					temp2 = false;
			}
			
			
//			if(n==2){
//				
//			}
//			else if(n==1){
//				
//			}

			if(n==1 || n==2 )
				{
				boolean temp3 = true;
				for(int i =0;i<n;i++)
				{
					if(b[i]!=0)
					{temp3=false;
						System.out.println("NIE");
						break;
					}
				}
				if(temp3)
				System.out.println("NIE");}
			
			else if (temp2) {
				boolean x = fun(b, n - 1);
				if (x == true){
					
//					for(int i=0;i<n;i++){
//						System.out.print(b[i] + " ");
//					}
					
					
					
					System.out.println("TAK");
				}
				else
					System.out.println("NIE");
			} else
				System.out.println("NIE");

		}

	}

	public static boolean fun(int[] b, int pos) {
		if (pos == 1)
		{
			if(b[0]==0 && b[1]==0)
			return true;
			else
				return false;
		}
			
		if (b[pos] % 3 != 0)
			return false;
		else {
			int q = b[pos] / 3;
			b[pos - 1] -= 2 * q;
			if (b[pos - 1] < 0)
				return false;
			b[pos - 2] -= q;
			if (b[pos - 2] < 0)
				return false;

		}
		return fun(b, pos - 1);
	}

}
