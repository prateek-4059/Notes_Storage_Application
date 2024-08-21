#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>v1;
    printf("enter 5 data :\n");
    for(int i=1;i<=5;i++){
        int data;
        cout<<"Enter any number ";
        cin>>data;
        cout<<endl;
        v1.push_back(data);
    }

    printf("The vector is:\n");
    for(int i=0;i<v1.size();i++){
        cout<<v1.at(i)<<" ";
    }

    v1.insert(v1.begin(),5);
    cout<<"\n5 inserted at begin\n";

    v1.emplace(v1.begin()+3,6);
    printf("The vector is:\n");

    // v1.erase(v1.end()-1);
    // v1.erase(v1.begin()+v1.size()-1);

    for(int i=0;i<v1.size();i++){
        cout<<v1.at(i)<<" ";
    }
    cout<<endl;
    v1.clear();
    int n=v1.size();
    cout<<n<<endl;
}