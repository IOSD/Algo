#include <iostream.h>
#include<process.h>
#include <conio.h>
struct node
{
	int number;
	node *next;
};
node *push(node *top, int val);
node *pop(node *top);
void show_Stack(node *top);
void main()
{       clrscr();
	node *top;
	int tnumber, choice;
	char ch;
	top = NULL;
	clrscr();
	do
	{	cout << "\n\t Main Menu";
		cout << "\n\t1. ADD TO Stack";
		cout << "\n\t2. DELETE from Stack";
		cout << "\n\t3. SHOW Stack";
		cout << "\n\t4. Exit from Menu";
		cout << "\n\nEnter your choice :  ";
		cin >> choice;
		switch (choice)
		{       case 1: do
						{   	cout << "Enter the no. : ";
								cin >> tnumber;
								top = push(top, tnumber);
								cout << "Do you want to add more elements <Y/N> ?:  ";
								cin >>ch;
						} while (ch== 'Y'||ch=='y');
				break;

				case 2: do
						{       top = pop(top);
								cout << "\nDo you want to delete more elements <Y/N> ?:  ";
								cin >>ch;
						} while (ch== 'Y'||ch=='y');
				break;
			
				case 3: show_Stack(top);
				break;
			
				case 4: exit(0);
		}
	}while (choice != 4);
}

node *push(node *top, int val)
{       node *temp;
	temp = new node;
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
	    delete temp;
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
