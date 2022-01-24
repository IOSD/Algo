
#include<iostream.h>
#include<conio.h>
#include<process.h>



//TIME COMPLEXITY - 0(n)
//space complexity - 0(n)



int push(int [],int &,int);
int pop(int [],int &);
void display(int [],int);
const int size=50;

void main()
{
 clrscr();
 int stack[size],item,top=-1,res,choice;
 char ch='y',ch1='y',ch2='y';
 while(ch=='y'||ch=='Y')
   {   cout<<"\n\t\t**** MENU ****";
       cout<<"\n\t 1.Push";
       cout<<"\n\t 2.Pop";
       cout<<"\n\t 3.Display";
       cout<<"\n\t 4.Exit";
       cout<<"\n Enter your choice ";
       cin>>choice;                              //user's input taken
       switch(choice)
	 {  case 1: while(ch1=='y'||ch1=='Y')
		       {  cout<<"\n Enter Item for insertion:";
			  cin>>item;
			  res=push(stack,top,item);                                      //calling of function
			  if(res==-1)
			    {  cout<<"\n OVERFLOW!!!aborting!!\n";                     //if the stack is filled to its size ,more elements can't be added
			       exit(1);
			    }
			  cout<<"\n Want to insert more elements?(y/n)...";
			  cin>>ch1;
		       }
		    break;
	      case 2: while(ch2=='y'||ch2=='Y')
		       {  res=pop(stack,top);
			  if(res==-1)
			    {  cout<<"\n UNDERFLOW!!!aborting!!\n";          //deletion not possible ,if there are no elements in stack
			       exit(1);
			    }
			    else
			    {  cout<<"\n Element deleted is : "<<res;
			       cout<<"\n The stack now is : ";
			       display(stack,top);                            //calling of function
			    }
			  cout<<"\n Want to delete more nodes?(y/n)...";
			  cin>>ch2;
			}
		    break;
	    case 3: cout<<"\n List is : ";                           
		     display(stack,top);                                        //calling of function
		     break;
	    case 4: exit(0);
	 }
      cout<<"\n\n Do you want to continue?(y/n)... ";
      cin>>ch;
   }
getch();
}

int push(int stack[],int &top,int ele)                     //function to add numbers to stack
{  if(top==size-1)
     return -1;
   else
     {  top++;
	stack[top]=ele;
     }
   return 0;
}

int pop(int stack[],int & top)                            //function to delete no. from stack
{  int ret;
   if(top==-1)
     return -1;
   else
     {  ret=stack[top];
	top--;
     }
   return ret;
}

void display(int stack[],int top)                        //function to   display the stack
{  if(top==-1)
     cout<<"\n List is empty";
   for(int i=top;i>=0;i--)
     cout<<stack[i]<<"  ";
}

