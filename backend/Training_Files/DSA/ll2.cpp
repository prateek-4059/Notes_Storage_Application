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
int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        insertatend(x);
    }

    
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    return 0;
}
