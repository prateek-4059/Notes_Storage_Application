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
void insertatbeg(int x){
    if(head==NULL){
        head=new Node(x);
    }
    else{
        Node *newnode=new Node(x);
        newnode->next=head;
        head=newnode;
    }
}
int findlength(Node *head){
    int cnt=0;
    Node *curr=head;
    while(curr!=NULL){
        cnt++;
        curr=curr->next;
    }
    return cnt;
}
int findmid(Node *head){
    Node *slow=head;
    Node *fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow->data;
}
int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        insertatbeg(x);
    }

    
    // Node *curr=head;
    // while(curr!=NULL){
    //     cout<<curr->data<<" ";
    //     curr=curr->next;
    // }
    // cout<<endl;
    cout<<"The middle of linked list is : "<<findmid(head);
    // cout<<"The length of linked list is : "<<findlength(head);
    return 0;
}
