#include<iostream.h>
#include<conio.h>
#include<process.h>



//TIME COMPLEXITY - 0(n)
//space complexity - 0(n)




struct Node {                                         //structure for pointer
	       int info;
	       Node * next;
	    } *front,*newptr,*save,*ptr,*rear;
Node*Create_New_Node(int n)                                 //function in structure to create a new pointer
    {   ptr = new Node;
	ptr -> info = n;
	ptr -> next = NULL;
	return ptr;
    }
void Insert(Node* np)                                      //function to insert new pointer created 
    {
	if(front == NULL)
	    front = rear = np;
	else
	  {   rear->next = np;
	      rear = np;
	  }
    }
void Del_Node()                                            //function to delete element form queue
    {
	 if(front==NULL)
	      cout<<"\n Underflow ";
	 else
	  {  cout<<"deletion started";
	     ptr=front;
	      front=front->next;
	      delete ptr;
	  }
    }
void Display(Node*np)                                    //function to display the elements of queue
    {  	 while(np!=NULL)
	    {   cout<<np->info<<"  ";
		np = np->next;
	    }

    }
void main()
{
   clrscr();
	front=rear=NULL;                                       //initially the queue must be empty
	int item,choice;
	char ch='y',ch1='y';
	while(ch1=='y'||ch1=='Y')
	{   cout<<"\n\t\t***** MENU *****";
	    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	    cout<<"\n\t 1. Insert";
	    cout<<"\n\t 2. Delete";
	    cout<<"\n\t 3. Display";
	    cout<<"\n\t 4. Exit";
	    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	    cout<<"\n Enter your choice ";
	    cin>>choice;
	      switch(choice)
		{   case 1: while(ch=='y'||ch=='Y')
			       {   cout<<"\n Enter information for the new node ";
				   cin>>item;
				   newptr = Create_New_Node(item);                              //calling of function
				   if(newptr==NULL)
				      cout<<"\n Cannot create new node ";                         //if the pointer to be added is null, it can't be added
				   Insert(newptr);
				   cout<<"\n Do you want to insert more (press y) : ";
				   cin>>ch;

			       }
			    break;

		    case 2: while(ch=='y'||ch=='Y')
			       {  Del_Node();
				   cout<<"\n List is: ";
				   Display(front);                                             //calling of function
				   cout<<"\n Want to delete more nodes (press y): ";
				   cin>>ch;
			       }
			    break;

		    case 3: cout<<"\n List is : ";
			    Display(front);                                                   //calling of function
			    break;

		    case 4: exit(0);
	       }
	   cout<<"\n Do you want to continue ";
	   cin>>ch1;
       }
getch();
}

