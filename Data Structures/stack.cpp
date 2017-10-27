//Stack_Code
// Complexity: O(1)

#include <iostream.h>
#include <process.h>
#include <conio.h>
struct node
{												//declaring a structure	
	int number;									
	node *next;									//self referential pointer
};
node *push(node *top, int val);					//fuction to push element into stack			
node *pop(node *top);							//fuction to pop element from stack
void show_Stack(node *top);
int main()
{       
	node *top;									
	int tnumber, choice;
	char ch;
	top = NULL;
	clrscr();
	do											//menu showing choices to the user
	{	cout << "\n\t Main Menu";
		cout << "\n\t1. ADD TO Stack";
		cout << "\n\t2. DELETE from Stack";
		cout << "\n\t3. SHOW Stack";
		cout << "\n\t4. Exit from Menu";
		cout << "\n\nEnter your choice :  ";
		cin >> choice;							//input of choice from user
		switch (choice)
		{       case 1: do
						{   	cout << "Enter the no. : ";
								cin >> tnumber;
								top = push(top, tnumber);		//call the push() function
								cout << "Do you want to add more elements <Y/N> ?:  ";
								cin >>ch;
						} while (ch== 'Y'||ch=='y');
				break;

				case 2: do
						{       top = pop(top);					//call the pop() function
								cout << "\nDo you want to delete more elements <Y/N> ?:  ";
								cin >>ch;
						} while (ch== 'Y'||ch=='y');
				break;
			
				case 3: show_Stack(top);						//call the show_Stack() function
				break;
			
				case 4: exit(0);
		}
	}while (choice != 4);
	return 0;
}

node *push(node *top, int val)
{       node *temp;
	temp = new node;						//dynamic initialisation of element in stack
	temp->number = val;
	temp->next = NULL;
	if(top ==NULL)
	top = temp;
	else
	{ temp->next = top;
	  top = temp;
	}
	return(top);
}
node *pop(node *top)
{       node *temp;
	if (top == NULL )
	{   cout << "Stack Empty ";
	    exit(0);
	}
	else
	{   temp = top;
	    top = top->next;
	    temp->next = NULL;
	    cout << "\n\tPopped Number is : " << temp->number;
	    delete temp;						//deleting the allocated memory to top element of stack
	}
	return (top);
}
void show_Stack(node *top)
{    	node *temp;
	temp = top;
	clrscr();
	cout << "The values are \n";
	while (temp != NULL)
	{
		cout<<temp->number << "\t";
		temp = temp->next;
	}
}
