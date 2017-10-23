/*
This program implements stack as an array using template.
The program is menu-driven.
Shared under Creative Commons 0 (CC0) License.
*/

#include<iostream> 		/*Importing the necessary header files*/
using namespace std;
#define MAX 50			/*Defining the size of the stack*/
template <class X> 		
class Stack {
	private:
		X S[MAX];		/*The stack array*/
		int top;		/*The top element to be pushed to stack */
	public:
		Stack() { top = -1;}	/*Initialized the top to -1 (empty) */
		/*
		The push method pushes the element to the top of the stack. 
		If the stack is full, it returns an error message, otherwise the element is pushed to stack.
		*/
		void push(X el) {
			if(!isFull()) 
			{
				top++;
				S[top]=el;
				cout << el << " pushed to stack.\n";
			}
			else
				cout << "Stack is full!\n";
		}
		/*
		The pop method pops and element from the stack. 
		If the stack is empty, it returns an error message, otherwise the element is popped from stack.
		*/
		void pop() {
			if(!isEmpty()) 
			{
				cout << topel() << " popped from stack.\n";
				top--;
			}
			else
				cout << "Stack is empty!\n";
		}
		/*
		The clear method clears all the elements from the stack. 
		If the stack is empty, it returns an error message, otherwise the stack is cleared.
		*/
		void clear() {
			if(!isEmpty()) 
			{
				top=-1;
				cout << "Stack cleared successfully!\n";
			}
			else
				cout << "Stack is empty!\n";
		}
		/*
		The topel method returns the topmost element from the stack. 
		If the stack is empty, it returns an error message, otherwise the top element from stack is returned.
		*/
		X topel() {
			if(!isEmpty())
				return S[top];
			else
				cout << "Stack is empty!\n";
		}
		/*
		The isEmpty method checks whether the stack is empty. 
		If the top = -1, it returns true, otherwise false.
		*/
		bool isEmpty() {
			if(top==-1)
				return true;
			else
				return false;
		}
		/*
		The isFull method checks whether the stack is full. 
		If the top >= MAX - 1, it returns true, otherwise false.
		*/
		bool isFull() {
			if(top>=MAX-1)
				return true;
			else
				return false;
		}
};
int main()
{
	Stack <int> s1;		/* Stack obj implemented as an int */
	Stack <char> s2;	/* Stack obj implemented as a char */
	int el;
	char el1;
	char ch;
	do {
		cout << "MENU: (q to quit)\n";
		cout << "a) Push to int stack\n";
		cout << "b) Push to char stack\n";
		cout << "c) Pop from int stack\n";
		cout << "d) Pop from char stack\n";
		cout << "e) Clear int stack\n";
		cout << "f) Clear char stack\n";
		cin >> ch;
		switch(ch) {
			case 'a':
				cout << "Enter value for int stack\n";
				cin >> el;
				s1.push(el);
				break;
			case 'b':
				cout << "Enter value for char stack\n";
				cin >> el1;
				s2.push(el1);
				break;
			case 'c':
				s1.pop();
				break;
			case 'd':
				s2.pop();
				break;
			case 'e':
				s1.clear();
				break;
			case 'f':
				s2.clear();
				break;
			default:
				cout << "Wrong option\n";
		}
	} while(ch!='q');	/* Run the menu till q is pressed. */
	return 0;
}
