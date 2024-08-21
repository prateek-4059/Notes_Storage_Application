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

Node *head=NULL;

void insertatend(int x){
    if(head==NULL){
        head=new Node(x);
    }
    else{
        Node *newnode=new Node(x);
        Node *curr=head;
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=newnode;
    }
}
void insertatpos(int pos,int data){
    if(head==NULL){
        head=new Node(data);
    }
    else{
        Node *temp=head;
        for(int i=0;i<pos-1;i++){
            temp=temp->next;
        }
        Node *newnode=new Node(data);
        newnode->next=temp->next;
        temp->next=newnode;
    }
}
int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int x;1
        cin>>x;
        insertatend(x);
    }

    cout<<"The elements in the linked list are : "<<endl;
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;

    insertatpos(2,75);

    cout<<"The elements in the linked list are : "<<endl;
    curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
    return 0;
}