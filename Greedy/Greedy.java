import java.util.*;

public class Greedy {

	public static void ActivitySelection() {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		int[][] arr;
		int n;

		class Activity {
			int stime;
			int ftime;
			Activity(int stime,int ftime) {
				this.stime = stime;
				this.ftime = ftime;
			}
		}

		class sortByftime implements Comparator<Activity> {
			public int compare(Activity a,Activity b) {
				return a.ftime - b.ftime;
			}
		}

		Activity[] act;

		for(int i=0;i<t;i++) {
			n = sc.nextInt();

			act = new Activity[n];
			arr = new int[2][n];
			for(int j=0;j<2;j++) {
				for(int k=0;k<n;k++) {
					arr[j][k] = sc.nextInt();
				}
			}

			for(int j=0;j<n;j++) {
				Activity a = new Activity(arr[0][j],arr[1][j]);
				act[j] = a;
			}

			Arrays.sort(act,new sortByftime());

			Activity a = act[0];
			int count = 1;
			for(int j=1;j<n;j++) {
				if(act[j].stime > act[j-1].ftime) {
					count++;
				}
			}
			System.out.println(count);
		}

	}

	public static void Nmeetingroom() {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();

		class Meetings {
			int stime;
			int ftime;
			int idx;
			Meetings(int stime,int ftime,int idx) {
				this.stime = stime;
				this.ftime = ftime;
				this.idx = idx;
			}
		}

		class sortByftime implements Comparator<Meetings> {
			public int compare(Meetings a,Meetings b) {
				return a.ftime - b.ftime;
			}
		}

		int n;
		Meetings[] meets;
		int[][] arr;

		for(int i=0;i<t;i++) {
			n = sc.nextInt();
			meets = new Meetings[n];
			arr = new int[2][n];
			for(int j=0;j<2;j++) {
				for(int k=0;k<n;k++) {
					arr[j][k] = sc.nextInt();
				}
			}
			for(int j=0;j<n;j++) {
				Meetings m = new Meetings(arr[0][j],arr[1][j],j+1);
				meets[j] = m;
			}

			Arrays.sort(meets,new sortByftime());

			System.out.print(meets[0].idx + " ");
			Meetings fm = meets[0];
			for(int j=1;j<n;j++) {
				if(meets[j].stime > fm.ftime) {
					System.out.print(meets[j].idx + " ");
					fm = meets[j];
				}
			}
			System.out.println();
		}
	}

	public static void CoinPiles() {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		int n;
		int k;
		int[] arr;
		for(int i=0;i<t;i++) {
			n = sc.nextInt();
			k = sc.nextInt();
			arr = new int[n];
			for(int j=0;j<n;j++) {
				arr[j] = sc.nextInt();
			}

			Arrays.sort(arr);
			for(int j=0;j<n;j++) {
				System.out.print(arr[j] + " ");
			}
			int b = arr[0] + k;
			int sum = 0;
			for(int j=1;j<arr.length;j++) {
				if(arr[j] > b) {
					sum += arr[j] - b;
					System.out.println(arr[j]-b);
				}
			}
			System.out.println(sum);
		}
	}

	public static void NotesDenomination() {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		int n;
		int k=0;
		int[] arr = {1,2,5,10,20,50,100,500,1000};	
		for(int i=0;i<t;i++) {
			int l=0;
			n = sc.nextInt();
			while(n>0) {
				for(int j=0;j<arr.length;j++) {
					if(arr[j] > n) {
						l = arr[j-1];
						k=1;
						break;
					}
				}
				int m=0;
				if (k==0) {
					l = arr[arr.length-1];
				}
				m=n/l;
				n = n%l;
				for(int j=0;j<m;j++) {
					System.out.print(l+" ");
				}
			}
			System.out.println();
		}
	}

	public static void main(String[] args) {
		// Nmeetingroom();
		// ActivitySelection();
		// CoinPiles();
		// NotesDenomination();
	}
}