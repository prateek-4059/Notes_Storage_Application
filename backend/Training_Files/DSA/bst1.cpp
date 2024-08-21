#include <bits/stdc++.h>
using namespace std;

// Structure of a BST Node
class BSTNode{
    public:
    int data;
    BSTNode *left;
    BSTNode *right;
    BSTNode(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

//Insertion into Binary Search Tree
BSTNode* insertintobst(BSTNode*root,int val){
    if(root==NULL){
        return new BSTNode(val);
    }
    if(root->data>val){
        root->left=insertintobst(root->left,val);
    }
    if(root->data<val){
        root->right=insertintobst(root->right,val);
    }
    return root;
}


// Deletion from Binary Search Tree

// 3 cases 
//  1. If the node to be deleted has no child, then we simply delete the node and return the root
//  2. If the node to be deleted has one child and has 2 cases:
        // a. If the node has empty left child but have right child then replace node with the right subtree
        // b. If the node has empty right child but have left child then replace node with the left subtree
//  3. If the node to be deleted has both the children then replace the particular node with the inorder successor of node
BSTNode *findsuccessor(BSTNode *root){
    BSTNode *curr=root;
    while(curr->left!=NULL){
        curr=curr->left;
    }
    return curr;
}
BSTNode *deletefrombst(BSTNode *root,int val){
    if(root==NULL){
        return root;
    }
    if(root->data==val){
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        else if(root->left==NULL && root->right!=NULL){
            BSTNode *rightsub=root->right;
            delete root;
            return rightsub;
        }
        else if(root->right==NULL && root->left!=NULL){
            BSTNode *leftsub=root->left;
            delete root;
            return leftsub;
        }
        else{
            BSTNode *succ=findsuccessor(root);
            root->data=succ->data;
            root->right=deletefrombst(root->right,succ->data);
            return root;
        }
    }
    else if(root->data<val){
        root->right=deletefrombst(root->right,val);
        return root;
    }
    else{
        root->left=deletefrombst(root->left,val);
        return root;
    }
    return root;
}

// Inorder traversal of Binary Search Tree which is always sorted
void inorder(BSTNode *root,vector<int>&ans){
    if(root==NULL){
        return;
    }
    inorder(root->left,ans);
    ans.push_back(root->data);
    inorder(root->right,ans);
}

int main(){
    BSTNode *root=NULL;
    int n;
    cout<<"Enter the value want to insert:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        root=insertintobst(root,x);
    }

    cout<<"The inorder traversal of BST is:"<<endl;
    vector<int>ans;
    inorder(root,ans);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    int x;
    cout<<"Enter the node want to delete"<<endl;
    cin>>x;

    root=deletefrombst(root,x);

    ans.clear();
    cout<<"The inorder traversal of BST is:"<<endl;
    inorder(root,ans);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}