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

void findlevelorder(BTNode *root,vector<int>&ans){
    if(root==NULL){
        return;
    }
    queue<BTNode*>q;
    q.push(root);
    while(!q.empty()){
        BTNode *fr=q.front();
        q.pop();
        ans.push_back(fr->data);

        if(fr->left!=NULL){
            q.push(fr->left);
        }
        if(fr->right!=NULL){
            q.push(fr->right);
        }
    }
}

int main(){
    root=new BTNode(10);
    root->left=new BTNode(30);
    root->right=new BTNode(50);
    root->left->left=new BTNode(12);
    root->left->right=new BTNode(14);
    root->right->left=new BTNode(20);
    root->right->right=new BTNode(50);

    vector<int>ans;
    findlevelorder(root,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}