#include <iostream>
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

int main(){
    Node *head=NULL;
    head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);

    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }

    return 0;
}