#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};
class Stack{
    public:
    Node *head;
    Stack(){
        this->head=NULL;
    }

    void push(int x){
        if(head==NULL){
            head=new Node(x);
        }
        else{
            Node *newnode=new Node(x);
            newnode->next=head;
            head=newnode;
        }
    }

    int pop(){
        Node *curr;
        if(isEmpty()){
            cout<<"Stack Underflow"<<endl;
            return -1;
        }
        else{
            curr=head;
            int data=curr->data;
            head=head->next;
            curr->next=NULL;
            delete curr;
            return data;
        }
    }

    int top(){
        return head->data;
    }

    bool isEmpty(){
        return head==NULL;
    }
};

int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(50);

    cout<<st.pop()<<endl;
    cout<<st.top()<<endl;
    
    cout<<"Now the elements in stack are "<<endl;
    while(!st.isEmpty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}