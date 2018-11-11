import java.util.*;

public class Sorts {

	public static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {

		// alterNateSort();
		// sortAbsoluteDiff();
		sort2DArrayByCol(new int[][]{{3,4,5,6},{1,2,3,4},{6,7,8,9},{9,0,1,2}},4);
	}

	public static void alterNateSort() {
		int t = sc.nextInt();
		int[] arr = new int[t];
		
		for (int i=0;i<t;i++) {
			arr[i] = sc.nextInt();
		}

		Arrays.sort(arr);

		int start = 0;
		int last = t-1;

		while (start < last) {
			System.out.print(arr[start++] + " ");
			System.out.print(arr[last--] + " "); 
		}
	}

	public static void sortAbsoluteDiff() {
		int t = sc.nextInt();
		ArrayList<Integer> list = new ArrayList<Integer>();

		for (int i=0;i<t;i++) {
			list.add(sc.nextInt());
		}

		int x = sc.nextInt();

	}

	public static void sort2DArrayByCol(int[][] arr,int col) {

		Arrays.sort(arr, new Comparator<int[]>() {
			@Override
			public int compare(int[] ar1,int[] ar2) {
				if (ar1[col-1] > ar2[col-1]) {
					return 1;
				} else {
					return -1;
				}
			}
		});

		for (int i=0;i<arr.length;i++) {
			for (int j=0;j<arr[0].length;j++) {
				System.out.print(arr[i][j] + " ");
			}
			System.out.println();
		}

	}

}