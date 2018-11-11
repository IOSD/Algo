//Sachin Singla

#include <iostream>
using namespace std;

class Node{
public: 
    int data;
    Node * next;

    Node(int d){
        data = d;
        next = NULL;
    }
};

Node * createLL(){
    
    Node * head = NULL;
    Node * tail = NULL;
    int x;
    
    while(true){
        cin >> x;
        if (x == -1) break;

        Node * newNode = new Node(x); //ctor auto invoked
        if (head == NULL){
            //this means newNode is the first Node
            head = newNode;
            tail = newNode;
        }
        else {
            //some node(s) already exists
            
            tail->next = newNode;
            tail = tail->next;
        }
    }
    
    return head;
}

void printLL(Node * head){
    Node * cur = head;
    while(cur != NULL){
        cout << cur->data << "-->";
        cur = cur->next;
    }
    cout << endl;
}

int main(){
    Node * head = createLL();  
    printLL(head);
}
