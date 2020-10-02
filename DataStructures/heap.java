import java.util.*;

public class heap {

	public static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {
		
		// Scanner sc = new Scanner(System.in);
		// int n = sc.nextInt();

		// int[] arr = new int[n];

		// for (int i=0;i<n;i++) {
		// 	arr[i] = sc.nextInt();
		// }

		// make heap
		// for (int i = n/2-1;i >= 0;i--) {
		// 	maxHeapify(arr,i,n);
		// }

		// arr = heapSort(arr);

		// for (int i=0;i<n;i++) {
		// 	System.out.print(arr[i] + " ");
		// }

		// kthSmallest(arr,4);
		// printKLargest(arr,5);
		// kLargestSumSubArray(arr,6);
		// kMaxSumCombinations(5);
		// sortKsorted(3);
	}

	public static int[] heapSort(int[] arr) {
		int n = arr.length;
		for (int i=n-1;i>=0;i--) {

			int temp = arr[i];
			arr[i] = arr[0];
			arr[0] = temp;
			maxHeapify(arr,0,i);
		}
		return arr;
	}

	public static void maxHeapify(int[] arr,int i, int last) {
		int l = 2*i + 1;
		int r = 2*i + 2;
		int largest = i;

		if (l < last && arr[largest] < arr[l]) {
			largest = l;
		}
		if (r < last && arr[largest] < arr[r]) {
			largest = r;
		}

		if (largest != i) {
			int temp = arr[largest];
			arr[largest] = arr[i];
			arr[i] = temp;

			maxHeapify(arr,largest,last);
		}
	}

	public static void kthSmallest(int[] arr,int k) {

		for (int i = k/2-1;i >= 0;i--) {
			maxHeapify(arr,i,k);
		}

		for (int i = k;i < arr.length;i++) {
			if (arr[i] < arr[0]) {
				int temp = arr[0];
				arr[0] = arr[i];
				arr[i] = temp;
 			}
 			maxHeapify(arr,0,k);
		}
		System.out.println(arr[0]);
	}

	public static void printKLargest(int[] arr, int k) {

		int n = arr.length;
		for (int i = (arr.length/2 - 1);i >= 0;i--) {
			maxHeapify(arr,i,n);
		}

		for (int i=0;i<k;i++) {
			System.out.println(arr[0]);
			int temp = arr[0];
			arr[0] = arr[n-1];
			arr[n-1] = arr[0];
			n = n-1;
			maxHeapify(arr,0,n);
		}
	}


	// doing this using min heap but can also be done using the max heap 
	public static void kLargestSumSubArray(int[] arr,int k) {

		int[] sum = new int[arr.length+1];
		sum[0] = 0;
		for (int i=1;i<=arr.length;i++) {
			sum[i] = sum[i] + sum[i-1];
		}

		PriorityQueue<Integer> queue = new PriorityQueue<Integer>();

		for (int i=1;i<=arr.length;i++) {
			for (int j=i;j<=arr.length;j++) {
				int x = sum[j] - arr[i-1];

				if (queue.size() < k) {
					queue.add(x);
				} else {
					if (x > queue.peek()) {
						queue.poll();
						queue.add(x);
					}
				}
			}
		}

		System.out.println(queue.poll());
	}

	public static void minProductk(int[] arr,int k) {

		int n = arr.length;
		// use min heap
	}

	static class item {
		int val;
		int idx1;
		int idx2;
		item (int val,int idx1,int idx2) {
			this.val = val;
			this.idx1 = idx1;
			this.idx2 = idx2;
		}
	}


	// TO DO
	public static void kMaxSumCombinations (int k) {

		PriorityQueue<item> q = new PriorityQueue<item>(k ,new Comparator<item>() {

			@Override
			public int compare(item i1,item i2) {
				if (i1.val > i2.val)
					return 1;
				else
					return -1;
			}
		});

		int n = sc.nextInt();
		int[] arr = new int[n];
		int[] ar = new int[n];
		
		for (int i=0;i<n;i++) {
			arr[i] = sc.nextInt();
		}

		for (int i=0;i<n;i++) {
			ar[i] = sc.nextInt();
		}

		Arrays.sort(arr);
		Arrays.sort(ar);

		item i1 = new item(arr[n-1]+ar[n-1],n-1,n-1);
		q.add(i1);

		int c = 0;
		while (c < k) {
			item it = q.poll();
			int i = it.idx1;
			int j = it.idx2;
			c++;
			if (!q.contains(new item(arr[i] + ar[j-1],i,j-1)))
				q.add(new item(arr[i] + ar[j-1],i,j-1));
			if (!q.contains(new item(arr[i-1] + ar[j],i-1,j)))
				q.add(new item(arr[i-1] + ar[j],i-1,j));
		}

		System.out.println(q.poll());
	}

	public static void sortKsorted(int k) {

		int n = sc.nextInt();
		int[] arr = new int[n];
		for (int i=0;i<n;i++) {
			arr[i] = sc.nextInt();
		}

		PriorityQueue<Integer> q = new PriorityQueue<Integer>();

		for (int i=0;i<k+1;i++) {
			q.add(arr[i]);
		}

		ArrayList<Integer> list = new ArrayList<Integer>();
		for (int i=k+1;i<n;i++) {
			list.add(q.poll());
			q.add(arr[i]);
		}

		while (!q.isEmpty()) {
			list.add(q.poll());
		}

		for (int i=0;i<n;i++) {
			System.out.print(list.get(i) + " ");
		}
	}

}