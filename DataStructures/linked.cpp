//linked_list_insertion
//conmplexity : O(n)

#include <iostream.h>
#include <conio.h>
struct link
{	int n;
	link *next;								//self referential pointer
}*h,*ptr,*tmp;

void main()
{	clrscr();
	int choice,i=0;
	cout<<"Linked list:\n";
	cout<<"Add elements\n";
	h=new link;								//dynamic initialisation of element in linked list
	h->next=NULL;
	
	ptr=h;
	for(;i<4;i++)
	{	cout<<"Enter no.:\n";
		cin>>ptr->n;
		if(i<4)
		{	ptr->next=new link;				//dynamic initialisation of element in linked list
			ptr->next->next=NULL;
		}
		ptr=ptr->next;
	}
	
	ptr=h;
	for(i=0;i<4;i++)
	{	cout<<ptr->n;
		ptr=ptr->next;
		cout<<"\t";
	}
	cout<<"\n\nWHERE TO ADD MORE No:  ";
	cout<<"\n1.BEGINNING\n2.END\n";
	cout<<"Enter your choice :";
	cin>>choice;
	
	tmp=new link;
	tmp->next=NULL;
	cout<<"ENTER THE No.:  ";
	cin>>tmp->n;
	
	if(choice==1)										//add element in beginning
	{   	ptr=h;
			tmp->next=ptr;
			ptr=tmp;
			cout<<"THIS IS AT THE BEGINGING: \n"  ;
	 	
	 		for(i=0;i<5;i++)
	 		{	cout<<ptr->n;
				cout<<"\t";
				ptr=ptr->next;
	  		}
     }

     else if(choice==2)									//add element in the end of list
     {
			ptr=h;
			cout<<"Insertion at the end: \n";
		
			for(i=0;i<5;i++)
			{	if(ptr->next==NULL)
	    		   {	ptr->next=tmp;
						tmp->next=NULL;
			       }
	        	   ptr=ptr->next;
			}

			ptr=h;
			for(i=0;i<5;i++)
			{      cout<<ptr->n<<"\t";
				   ptr=ptr->next;
			}
    }

    else
    cout<<"WRONG CHOICE\n";
}