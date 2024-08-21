#include <bits/stdc++.h>
using namespace std;

void printvector(vector<int>v){
    for_each(v.begin(),v.end(),[](int i){
        cout<<i<<" ";
    });
    cout<<endl;
}

auto printvec=[](vector<int>arr){
    for(int n:arr){
        cout<<n<<" ";
    }
    cout<<endl;
};

vector<int>v={12,10,6,9,4};
int count_5=count_if(v.begin(),v.end(),[](int a){
    return (a>=5);
});     

int count_even=count_if(v.begin(),v.end(),[](int a){
    return (a%2==0);
});

int f=accumulate(v.begin(),v.end(),1,[](int i,int j){
    return i+j;
});

int main()
{
    v={12,10,6,9,4};
    printvector(v);

    cout<<"\n";
    printvec(v);

    cout<<count_5<<endl;
    cout<<count_even<<endl;
    cout<<f<<endl;
    return 0;
}