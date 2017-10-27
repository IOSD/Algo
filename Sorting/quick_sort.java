//Quick_Sort

import java.util.Scanner;

public class quick_sort {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		int[] a = new int[n];
		for (int i = 0; i < n; i++)
			a[i] = s.nextInt();

		Quick_Sort(a, 0, a.length - 1);
		for (int i = 0; i < n; i++)
			System.out.print(a[i] + " ");

	}

	public static void Quick_Sort(int a[], int low, int high) {
		if (low >= high)
			return;

		int left = low;
		int right = high;
		int mid = (left + high) / 2;
		int pivot = a[mid];
		while (left <= right) {
			while (a[left] < pivot) {
				left++;
			}

			while (a[right] > pivot) {
				right--;
			}

			if (left <= right) {
				int temp = a[right];
				a[right] = a[left];
				a[left] = temp;
			}

			left++;
			right--;
		}
	}

}
