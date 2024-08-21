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

class Queue{
    public:
    Node *head;
    Node *tail;
    Queue(){
        this->head=NULL;
        this->tail=NULL;
    }

    void enqueue(int d){
        Node *newnode=new Node(d);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=tail->next;
        }
    }

    int dequeue(){
        if(head==NULL && tail==NULL){
            cout<<"Queue Underflow"<<endl;
            return -1;
        }
        else if(head==tail){
            Node *curr=head;
            int ele=curr->data;
            head=NULL;
            tail=NULL;
            return ele;
        }
        else{
            Node *curr=head;
            int d=curr->data;
            head=head->next;
            curr->next=NULL;
            delete curr;
            return d;
        }
    }

    int peek(){
        return head->data;
    }

    bool isEmpty(){
        return head==NULL;
    }
};

int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(30);
    q.enqueue(50);
    q.enqueue(70);

    cout<<q.peek()<<endl;
    cout<<q.dequeue()<<endl;

    cout<<"Elements in queue are "<<endl;
    while(!q.isEmpty()){
        cout<<q.peek()<<endl;
        q.dequeue();
    }

    cout<<q.dequeue()<<endl;
    return 0;
}