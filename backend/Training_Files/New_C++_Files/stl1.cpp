#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>v1;
    for(int i=11;i<=20;i++){
        v1.push_back(i);
    }
    cout<<"\n\n";
    for(int i=0;i<10;i++){
        cout<<v1[i]<<" ";
    }
    cout<<"\n\n";
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<"\n\n";
    for(auto it=v1.begin();it!=v1.end();it++){
        cout<<*it<<" "; 
    }
    cout<<"\n\n";
    for(int i=0;i<(v1.size()/2);i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    for(int i=(v1.size()/2);i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    int total=0;
    for(auto it:v1){
        if(it%2==0){
            total+=it;
        }
    }
    cout<<total;

    cout<<endl<<endl;
    for(auto it:v1){
        if(it%2==1){
            cout<<it<<" "<<it*it<<endl;
        }
    }
    cout<<endl<<endl;

    int *pos=v1.data();
    cout<<"\nThe first element is "<<*pos<<endl;
    pos=pos+1;
    cout<<"\nThe second element is "<<*pos<<endl;
    pos=pos+2;
    cout<<"\nThe fourth element is "<<*pos<<endl;

    cout<<endl<<endl;

    pos=v1.data();
    for(int i=0;i<10;i++){
        cout<<*pos<<" ";
        pos++;
    }
    cout<<endl;
    for(int i=v1.size()/2-1;i>=0;i--){
        cout<<v1[i]<<" ";
    }
    cout<<endl<<endl;
    for(int i=v1.size()-1;i>=(v1.size()/2);i--){
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    
}