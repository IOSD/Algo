import java.util.*;
import java.lang.*;

public class BinaryTree {

	public int max_level = 0;

	public class Node implements Comparable<Node> {
		int data;
		Node left;
		Node right;
		Node rightNext;
		Node(int data,Node left,Node right,Node rightNext) {
			this.data = data;
			this.left = left;
			this.right = right;
			this.rightNext = rightNext;
		}

		public String toString() {
			String retVal = "";

			if (this.left != null) {
				retVal += this.left.data + " => ";
			}

			retVal += this.data;

			if (this.right != null) {
				retVal += " <= " + this.right.data;
			}

			retVal += "\n";

			if (this.left != null) {
				retVal += this.left.toString();
			}
			if (this.right != null) {
				retVal += this.right.toString();
			}

			return retVal;
		}

		public int compareTo(Node other) {
			return this.data - other.data;
		}
	}

	public class QItem {
		Node node;
		int hd;

		QItem(Node node,int hd) {
			this.hd = hd;
			this.node = node;
		}
	}

	Node root;
	int size;
	int min;
	int max;
	ArrayList<Integer>  path = new ArrayList<Integer>();

	public BinaryTree(boolean takeInput) {
		if (takeInput) {
			Scanner scn = new Scanner(System.in);
			this.root = this.takeInput(scn, null, false);
		}
	}

		private Node takeInput(Scanner scn, Node parentNode, boolean isParentsLeftChild) {
		if (parentNode == null) {
			System.out.println("Please enter the data for root: ");
		} else {
			if (isParentsLeftChild) {
				System.out.println("Please enter the data for left child of " + parentNode.data);
			} else {
				System.out.println("Please enter the data for right child of " + parentNode.data);
			}
		}

		int cData = scn.nextInt();
		Node child = new Node(cData, null, null, null);
		this.size++;

		System.out.println("Do you have a left child for " + child.data);
		boolean isChildsLeft = scn.nextBoolean();

		if (isChildsLeft) {
			child.left = this.takeInput(scn, child, true);
		}

		System.out.println("Do you have a right child for " + child.data);
		boolean isChildsRight = scn.nextBoolean();

		if (isChildsRight) {
			child.right = this.takeInput(scn, child, false);
		}

		return child;
	}

	public void display() {
		System.out.println(this);
	}

	public String toString() {
		return this.root.toString();
	}

	public int size() {
		return size(this.root);
	}

	private int size(Node root1) {
		int retVal=0;
		if(root1 == null) {
			return retVal;
		}

		retVal += size(root1.left);
		retVal += size(root1.right);

		return retVal;
	}

	public void preOrderTraversal() {
		preOrderTraversal(this.root);
		System.out.println();
	}

	private void preOrderTraversal(Node root1) {
		if(root1 == null) {
			return;
		}

		System.out.print(root1.data + " ");

		System.out.println("Item yet to travel to the left");
		preOrderTraversal(root1.left);
		System.out.println("Item moving towards right");		
		preOrderTraversal(root1.right);
		System.out.println("Item turning back from right");
	}



	public void leftView() {
		int h = height(this.root);
		leftView(this.root,1);
		System.out.println();
	}

	private void leftView(Node root1,int a) {
		if(root1 == null) {
			return;
		}

		if(max_level < a) {
			System.out.println(root1.data + " ");
			max_level = a;
		}
		
		leftView(root1.left,a+1);
		leftView(root1.right,a+1);
	}

	public void height() {
		System.out.println(height(this.root));
	}

	private int height(Node root1) {
		if(root1 == null) {
			return -1;
		}
		int h1 = height(root1.left) + 1;
		int h2 = height(root1.right) + 1;
		if(h1 > h2) {
			return h1;
		} else {
			return h2;
		}
	}

	public void isBST() {
		boolean b = isBST(this.root,Integer.MIN_VALUE,Integer.MAX_VALUE);
		System.out.println(b);
	}

	private boolean isBST(Node root1,int min,int max) {
		if (root1 == null) {
			return true;
		}

		if (root1.data < min||root1.data > max) {
			return false;
		}

		boolean left = isBST(root1.left,min,root1.data);
		boolean right = isBST(root1.right,root1.data,max);
		return left&&right;
	}

	private void printVerticalLine(Node root1,int lineno,int hd) {
		if(root1 == null) {
			return;
		}

		if(hd == lineno) {
			System.out.print(root1.data + " ");
		}
		printVerticalLine(root1.left,lineno,hd-1);
		printVerticalLine(root1.right,lineno,hd+1);
	}

	private void findMinMax(Node root1,int hd) {
		if(root1 == null) {
			return;
		}

		if(hd < min) {
			min = hd;
		}
		if(hd > max) {
			max = hd;
		}

		findMinMax(root1.left,hd-1);
		findMinMax(root1.right,hd+1);
	}

	public void verticalTraversal() {

		findMinMax(this.root,0);
		System.out.println("Min : " + min +  " Max : " + max);

		for(int i=this.min;i<this.max;i++) {
			printVerticalLine(this.root,i,0);
			System.out.println();
		}
	}

	public void RightView() {
		RightView(this.root,1);
	}

	private void RightView(Node root1,int level) {
		if (root1 == null) {
			return;
		}

		if (max_level < level) {
			System.out.print(root1.data + " ");
			max_level = level;
		}

		RightView(root1.right,level+1);
		RightView(root1.left,level+1);
	}

	public void TopView() {
		System.out.print(this.root.data + " ");
		TopView(this.root,0,0,0);

	}

	private void TopView(Node root1,int min,int max,int hd) {
		if(root1 == null) {
			return;
		}

		if(hd < min) {
			min = hd;
			System.out.print(root1.data + " ");
		}

		if(hd > max) {
			max = hd;
			System.out.print(root1.data + " ");
		}

		TopView(root1.left,min,max,hd-1);
		TopView(root1.right,min,max,hd+1);
	 }

	public void verticalOrder() {
		LinkedList<QItem> list = new LinkedList<QItem>();
		QItem item = new QItem(this.root,0);
		list.addLast(item);
		TreeMap<Integer,ArrayList<Integer>> map = new TreeMap<Integer,ArrayList<Integer>>();

		while (!list.isEmpty()) {
			QItem q = list.removeFirst();
			if (!map.containsKey(q.hd)) {
				ArrayList<Integer> arr = new ArrayList<>();
				arr.add(q.node.data);
				map.put(q.hd,arr);
			} else {
				map.get(q.hd).add(q.node.data);
			}
			if (q.node.left!=null) {
				list.addLast(new QItem(q.node.left,q.hd-1));
			}
			if (q.node.right!=null) {
				list.addLast(new QItem(q.node.right,q.hd+1));
			}
		}

		for (Map.Entry<Integer,ArrayList<Integer>> entry: map.entrySet()) {
			for (int a : entry.getValue()) {
				System.out.print(a + " ");
			}
			System.out.println();
		}
	} 

	public void TopView2() {
		LinkedList<QItem> list = new LinkedList<QItem>();
		QItem qtem = new QItem(this.root,0);
		list.addLast(qtem);
		HashMap<Integer,Integer> map = new HashMap<Integer,Integer>();

		while(!list.isEmpty()) {
			QItem item = list.removeFirst();
			int hd = item.hd;
			Node node = item.node;

		//	System.out.println("Horizontal Distance : " + node.data);

			if(!map.containsKey(hd)) {
				map.put(hd,hd);
				System.out.print(node.data + " ");
			}

			if(node.left!=null) {
				list.addLast(new QItem(node.left,hd-1));
			} 
			if(node.right!=null) {
				list.addLast(new QItem(node.right,hd+1));
			}
		}
	}

	public void BottomView() {
		LinkedList<QItem> list = new LinkedList<QItem>();
		HashMap<Integer,Integer> map = new HashMap<Integer,Integer>();

		list.addLast(new QItem(this.root,0));
		while(!list.isEmpty()) {
			QItem item = list.removeFirst();
			Node node = item.node;
			int hd = item.hd;	

			map.put(hd,node.data);

			if(node.left!=null) {
				list.addLast(new QItem(node.left,hd-1));
			}
			if(node.right!=null) {
				list.addLast(new QItem(node.right,hd+1));
			}
		}

		for(Map.Entry<Integer,Integer> set : map.entrySet()) {
			System.out.print(set.getValue() + " ");
		}
		System.out.println();
	}

	public void LevelOrder() {
		LinkedList<Node> list1 = new LinkedList<Node>();
		LinkedList<Node> list2 = new LinkedList<Node>();

		list1.addLast(this.root);
		while(!list1.isEmpty()) {
			Node node = list1.removeFirst();

			if(node.left!=null) {
				list2.addLast(node.left);
			}
			if(node.right!=null) {
				list2.addLast(node.right);
			}

			System.out.print(node.data + " ");
			if(list1.isEmpty()) {
				list1 = list2;
				System.out.println();
				list2 = new LinkedList<Node>();
			}
		}
	}

	public void LevelSpiral() {
		LinkedList<Node> list1 = new LinkedList<Node>();
		LinkedList<Node> list2 = new LinkedList<Node>();

		list1.addLast(this.root);
		int i=0;
		Node node;
		while(!list1.isEmpty()) {
			if(i%2 == 0) {
				node = list1.removeFirst();
			} else {
				node = list1.removeLast();
			}

			if(i%2 == 0) {
				if(node.left!=null) {
					list2.addLast(node.left);
				}
				if(node.right!=null) {
					list2.addLast(node.right);
				}
			} else {
				if(node.right!=null) {
					list2.addFirst(node.right);
				}
				if(node.left!=null) {
					list2.addFirst(node.left);
				}
			}

			System.out.print(node.data + " ");

			if(list1.isEmpty()) {
				System.out.println();
				list1 = list2;
				list2 = new LinkedList<Node>();
				i++;
			}
		}
	}

	public void connectSameLevel() {
		LinkedList<Node> list1 = new LinkedList<Node>();

		list1.addLast(this.root);
		list1.addLast(null);
		while(!list1.isEmpty()) {
			Node node = list1.removeFirst();

			if(node!=null) {
				node.rightNext = list1.getFirst();

				if(node.left!=null) {
					list1.addLast(node.left);
				}
				if(node.right!=null) {
					list1.addLast(node.right);
				}
			} else if (!list1.isEmpty()) {
				list1.addLast(null);
			}

		}
	}

	public void treetoDLL() {
		/*
			inorder traversal type :

			inorder(root.left);
			linkedlist.add(root);
			inorder(root.right);

			define the add function of the DLL in
			such a way that it automatically creates the DLL
		*/
	}

	public boolean findNode(int a) {
		return findNode(this.root,a,false);
	}

	private boolean findNode(Node root,int a,boolean b) {
		if(root == null) {
			return b;
		}

		if(root.data == a) {
			b = true;
			return b;
		}

		b = findNode(root.left,a,b);
		b = findNode(root.right,a,b);
		return b;
	}

	public void storePath(int data) {
		storePath(this.root,data);
		for(int a : path) {
			System.out.print(a + " ");
		}
	}

	private void storePath(Node root1, int data) {
		if(root1 == null) {
			return;
		}

		path.add(root1.data);
		if(root1.data == data) {
			return;
		}
		if(root1.left!=null && findNode(root1.left,data,false)) {
			storePath(root1.left,data);
		} else if(root1.right!=null) {
			storePath(root1.right,data);
		}
	}

	public void printAllPaths() {

		path = new ArrayList<Integer>();
		printAllPaths(this.root);
	}

	private void printAllPaths(Node root1) {
		if(root1 == null) {
			return;
		}
		path.add(root1.data);
		if(root1.left == null && root1.right == null) {
			for(int a : path) {
				System.out.print(a + " ");
			}
			System.out.println();
		}	
		printAllPaths(root1.left);
		printAllPaths(root1.right);
		path.remove(path.size()-1);
	}

	public void AllPaths (int B) {
		ArrayList<ArrayList<Integer>> list = returnPaths(this.root,B,
			new ArrayList<ArrayList<Integer>>(), new ArrayList<Integer>());

		for (ArrayList<Integer> list1 : list) {
			for (int i:list1) {
				System.out.print(i + " ");
			}
			System.out.println();
		}
	}

	private ArrayList<ArrayList<Integer>> returnPaths(Node root1,int B,
		ArrayList<ArrayList<Integer>> result, ArrayList<Integer> path) {
		if(root1 == null) {
			return result;
		}
		path.add(root1.data);
		if(root1.left == null && root1.right == null) {
			int sum = 0;
			for(int a : path) {
				sum += a;
			}
			if (sum == B)
				result.add(path);
		}	
		result = returnPaths(root1.left,B,result,path);
		result = returnPaths(root1.right,B,result,path);
		path.remove(path.size()-1);
		return result;
	}

	public void duplicateNode()	{
		duplicateNode(this.root);
 	}

	private void duplicateNode(Node root1) {
		if(root1 == null) {
			return;
		}
		Node node;
		if(root1.left!=null) {
			node = root1.left;
			root1.left = new Node(root1.data,node,null,null);
		} else {
			root1.left = new Node(root1.data,null,null,null);
		}
		duplicateNode(root1.left.left);
		duplicateNode(root1.right);
	}

	public void checkSum(int n) {
		ArrayList<Integer> list = new ArrayList<>();
		list = checkSum(this.root,list);
		Collections.sort(list);
		System.out.println(list);
		int i = 0;
		int j = list.size();
		while(i<j) {
			if(list.get(i) + list.get(j-1) > n) {
				j--;
			} else if(list.get(i) + list.get(j-1) < n){
				i++;
			} else if(list.get(i) + list.get(j-1) == n){
				System.out.println("true");
				break;
			}
		}
	}

	private ArrayList<Integer> checkSum(Node root1,ArrayList<Integer> list) {
		if(root1 == null) {
			return list;
		}
		list.add(root1.data);
		list = checkSum(root1.left,list);
		list = checkSum(root1.right,list);
		return list;
	}

	public void largestBST() {
		Node node = largestBST(this.root);
		System.out.println(node.data);
	}

	private Node largestBST(Node root1) {
		if(root1.right == null && root1.left == null) {
			return root1;
		}

		if(root1.left!=null) {
			if(root1.data < root1.left.data) {
				root1 = root1.left;
				root1 = largestBST(root1);			
			}
		}
		if(root1.right!=null) {
			if(root1.data > root1.right.data) {
				root1 = root1.right;
				root1 = largestBST(root1);			
			}
		}

		return root1;	
	}

	public void sumAtMaxDepth() {
		Node root1 = this.root;

		LinkedList<Node> list1 = new LinkedList<>();
		LinkedList<Node> list2 = new LinkedList<>();
		list1.addLast(root1);
		ArrayList<Integer> sumList = new ArrayList<Integer>();
		sumList.add(root1.data);
		int sum = 0;
		while (!list1.isEmpty()) {
			Node p = list1.removeFirst();

			if (p.left != null) {
				list2.add(p.left);
				sum += p.left.data;
			}

			if (p.right != null) {
				list2.add(p.right);
				sum += p.right.data;
			}

			if (list1.isEmpty()) {
				list1 = list2;
				list2 = new LinkedList<Node>();
				sumList.add(sum);
				sum = 0;
			}
		}
		System.out.println(sumList.get(sumList.size()-2));
	}

	/*
		NOT WORKING
	*/
	// public void sumLeafAtMinDepth() {
	// 	Node root1 = this.root;
	// 	LinkedList<Node> list = new LinkedList<Node>();
	// 	list.addLast(root1);
	// 	boolean f = false;
	// 	int sum = 0;
	// 	while (!f) {
	// 		int size = list.size();
	// 		while (size > 0) {
	// 			Node p = list.removeFirst();

	// 			if (p.left == null && p.right == null) {
	// 				sum += p.data;
	// 				f = true;
	// 			} 
	// 			else {
	// 				if (p.left != null) {
	// 					list.add(root1.left);
	// 				}
	// 				if (p.right != null) {
	// 					list.add(root1.right);
	// 				}
	// 			}
	// 			size -= 1;
	// 		}
	// 	}
	// 	System.out.println(sum);
	// }

	 int countSubtreesWithSumX(int x) {
        return countSubTreeHelper(this.root,x,0);
    }
    
    int countSubTreeHelper(Node root,int x,int count) {
        if (root == null) {
            return count;
        }
        
        int sum = getSum(root,x);
        if (sum == x) {
            count += 1;
        }
        
        count = countSubTreeHelper(root.left,x,count);
        count = countSubTreeHelper(root.right,x,count);
        return count;
    }
    
    int getSum(Node node,int sum) {
        if (node == null) {
            return 0;
        }
        
        int left = getSum(node.left,sum);
        int right = getSum(node.right,sum);

        return node.data + left + right;
    }

    class TreeProp {
    	boolean isBST;
    	int max;
    	int min;
    	int size;
    }

    public void makeLeafLinkedList() {
    	Node prevNode = null;
    	prevNode = makeLeafLinkedList(this.root,null);	
    	while (prevNode!=null) {
    		System.out.println(prevNode);
    		prevNode = prevNode.right;
    	}
    }

    private Node makeLeafLinkedList(Node node,Node prevNode) {
    	if (node == null) {
    		return prevNode;
    	}

    	prevNode = makeLeafLinkedList(node.left,prevNode);
    	if (node.left == null && node.right == null) {
    		if (prevNode == null) {
    			prevNode = node;
    		} else {
    			prevNode.right = node;
    			prevNode = node; 
    		}
    	}
    	prevNode = makeLeafLinkedList(node.right,prevNode);
    	return prevNode;
    }
}