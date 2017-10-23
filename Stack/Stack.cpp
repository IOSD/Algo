#include <iostream>
#include <cstdlib>
#define Stack_Size 10
using namespace std;

class Stack{

    private:
        int top;
        int item;
        int s[Stack_Size];
    public:
        Stack(){top=-1;}
        void push(int item);
        int pop();
        void display();
};

void Stack::push(int item)
{
    if(top==Stack_Size-1)
    {
        cout<<"Stack Overflow!"<<endl;

    }
    else
    {
        top+=1;
        s[top]=item;
    }
}

int Stack::pop()
{
    if(top==-1)
    {
        return -1;
    }
    else
        return s[top--];
}

void Stack::display()
{
    if(top==-1)
    {
        cout<<"Stack Empty!"<<endl;

    }
    for(int i=0;i<=top;i++)
        cout<<s[i]<<endl;
}
int main()
{
    int item,choice=0;
    Stack s;
    while(1){
    cout<<"Enter your choice"<<endl;
    cout<<"1-Push 2-Pop 3-Display 4-Exit"<<endl;
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"Enter an item to push:"<<endl;
            cin>>item;
            s.push(item);
            break;
        case 2:
            item=s.pop();
            if(item==-1)
            cout<<"Stack Underflow!"<<endl;
            else
            cout<<"The popped element is: "<<item<<endl;
            break;
        case 3:
            s.display();
            break;
        default:
            exit(0);

    }

    }
    return 0;
}
