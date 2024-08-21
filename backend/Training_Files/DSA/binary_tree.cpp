#include <bits/stdc++.h>
using namespace std;

class BTNode{
    public:
    int data;
    BTNode *left;
    BTNode *right;

    BTNode(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
BTNode *root=NULL;

void findinorder(BTNode *root,vector<int>&ans){
    if(root==NULL){
        return;
    }
    findinorder(root->left,ans);
    ans.push_back(root->data);
    findinorder(root->right,ans);
}

void findpreorder(BTNode *root,vector<int>&ans){
    if(root==NULL){
        return;
    }
    ans.push_back(root->data);
    findpreorder(root->left,ans);
    findpreorder(root->right,ans);
}

void findpostorder(BTNode *root,vector<int>&ans){
    if(root==NULL){
        return;
    }
    findpostorder(root->left,ans);
    findpostorder(root->right,ans);
    ans.push_back(root->data);
}

int main(){
    root=new BTNode(10);
    root->left=new BTNode(30);
    root->right=new BTNode(50);
    root->left->left=new BTNode(12);
    root->left->right=new BTNode(14);
    root->right->left=new BTNode(20);
    root->right->right=new BTNode(50);
    vector<int>inorder;
    findinorder(root,inorder);
    vector<int>preorder;
    findpreorder(root,preorder);
    vector<int>postorder;
    findpostorder(root,postorder);
    cout<<"Inorder traversal of binary tree :"<<endl;
    for(int i=0;i<inorder.size();i++){
        cout<<inorder[i]<<" ";
    }
    cout<<endl;
    cout<<"Preorder traversal of binary tree :"<<endl;
    for(int i=0;i<preorder.size();i++){
        cout<<preorder[i]<<" ";
    }
    cout<<endl;
    cout<<"Postorder traversal of binary tree :"<<endl;
    for(int i=0;i<postorder.size();i++){
        cout<<postorder[i]<<" ";
    }
    cout<<endl;
    return 0;
}