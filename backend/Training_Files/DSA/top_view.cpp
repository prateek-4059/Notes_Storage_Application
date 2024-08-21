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

void topview(BTNode *root,vector<int>&ans){
    if(root==NULL){
        return;
    }

    map<int,int>mp;
    queue<pair<BTNode*,int>>q;
    q.push({root,0});   
    while(!q.empty()){
        auto fr=q.front();
        q.pop();
        BTNode *front=fr.first;
        int hd=fr.second;

        if(mp.find(hd)==mp.end()){
            mp[hd]=front->data;
        }

        if(front->left!=NULL){
            q.push({front->left,hd-1});
        }
        if(front->right!=NULL){
            q.push({front->right,hd+1});
        }
    }

    for(auto it:mp){
        ans.push_back(it.second);
    }
}

void bottomview(BTNode *root,vector<int>&ans){
    if(root==NULL){
        return;
    }

    map<int,int>mp;
    queue<pair<BTNode*,int>>q;
    q.push({root,0});   
    while(!q.empty()){
        auto fr=q.front();
        q.pop();
        BTNode *front=fr.first;
        int hd=fr.second;

        mp[hd]=front->data;        

        if(front->left!=NULL){
            q.push({front->left,hd-1});
        }
        if(front->right!=NULL){
            q.push({front->right,hd+1});
        }
    }

    for(auto it:mp){
        ans.push_back(it.second);
    }
}

int main(){
    root=new BTNode(10);
    root->left=new BTNode(30);
    root->right=new BTNode(45);
    root->left->left=new BTNode(60);
    root->left->right=new BTNode(35);
    root->right->left=new BTNode(20);
    root->right->right=new BTNode(15);

    vector<int>ans;
    cout<<"Top view of binary tree : "<<endl;
    topview(root,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    vector<int>bottom;
    cout<<"Bottom view of binary tree : "<<endl;
    bottomview(root,bottom);
    for(int i=0;i<bottom.size();i++){
        cout<<bottom[i]<<" ";
    }
    cout<<endl;

    return 0;
}