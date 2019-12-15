import java.util.Stack;
class Solution {

	public static int[] stockSpan(int[] price) {
	
      	int[] ans = new int[price.length];
      	Stack<Integer> s = new Stack<Integer>();
      	for(int i = price.length - 1; i>=0; i--)
        {
          if(s.empty()) s.push(i);
          else if(price[s.peek()]>price[i]) s.push(i);
          else
          {
            while(s.size()!=0&&price[s.peek()]<=price[i])
            {
              int p = s.pop();
              ans[p] = p-i;
            }
            s.push(i);
          }
        }
      while(!s.empty())
      {
        int p = s.pop();
        ans[p] = p+1;
      }
      return ans;

	}
}
import java.util.Scanner;

public class Stock_Span {

	static Scanner s = new Scanner(System.in);

	public static void main(String[] args) {
		int size = s.nextInt();
		int[] input = new int[size];
		for(int i = 0; i < size; i++) {
			input[i] = s.nextInt();
		}
		int output[] = Solution.stockSpan(input);
		for(int i = 0; i < size; i++) {
			System.out.print(output[i] + " ");
		}
	}
}
