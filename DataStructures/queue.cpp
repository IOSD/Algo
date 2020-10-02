#include <iostream.h>
#include <conio.h>
#include <process.h>
struct node
{	int number;
	node *next;									//self referential node
};
node *add_Q(node *rear, int val);				//fuction to add elements in queue
node *del_Q(node *front, int &val);				//fuction to delete elements from queue
void show_Q(node *front);						//fuction to show elements in queue
void main()
{          clrscr();
	   node *front, *rear;
	   int val;
	   int choice;
	   char ch;
	   front =NULL;
	   rear = NULL;
	   do
	{  cout << "\n\t Main Menu";				//menu showing choices to the user
	   cout << "\n\t1. ADD TO Queue";
	   cout << "\n\t2. DELETE from Queue";
	   cout << "\n\t3.SHOW  Queue";
	   cout << "\n\t4. Exit from Menu";
	   cout << "\n\nEnter Your choice: ";
	   cin >> choice;
	   switch (choice)							//input of choice from user
		{	case 1:do
			      {	cout << "Enter the value to be added in the queue: ";
					cin >> val;
					rear = add_Q(rear, val);		//call the add_Q() function to add element in the end
					if (front == NULL)
					front = rear;
					cout << "Do you want to add more element <Y/N>?:  ";
					cin >> ch;
				   } while (ch == 'Y'||ch=='y');
					break;
			case 2: do
					{	front = del_Q(front, val);	//call the del_Q() function to delete element from the front
						if (front == NULL)
						rear = front;
						if (val != -1)
						cout << "Value deleted from Queue is " << val;
						cout << "\nDo you want to delete more element <Y/N>? ";
						cin >> ch;
					} while (ch== 'Y'||ch=='y');
	    		   break;
			case 3:show_Q(front);					//call the show_Q()
			       break;
			case 4:exit(0);
		}
	   }while (choice != 4);
}
node *add_Q(node *rear, int val)
{	node *temp;
	temp = new node;								//dynamic initialisation of element in queue
	temp->number = val;
	temp->next = NULL;
	rear->next = temp;
	rear = temp;
	return (rear);
}
node *del_Q(node *front, int &val)
 {        node *temp;
	  clrscr();
	  if (front == NULL)
	  {      cout << "Queue Empty ";
		 val = -1;

	  }
	  else
	  {           temp = front;
		      front = front->next;
		      val = temp->number;
		      temp->next = NULL;
		      delete temp;							//deleting the allocated memory to first element of queue
	  }
	 return (front);
}
void show_Q(node *front)
{      node *temp;
       temp = front;
       clrscr();
       cout << "The Queue values are: ";
       while (temp != NULL)
       {  cout<<"\t"<<temp->number;
	  temp = temp->next;
       }
}