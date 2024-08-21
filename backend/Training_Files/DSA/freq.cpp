#include <iostream>
using namespace std;

int cnt(int ind,int &c,int nums[],int size,int element){
    if(ind==size){
        return c;
    }

    if(nums[ind]==element){
        c++;
    }

    cnt(ind+1,c,nums,size,element);
}

int countOccurences(int nums[],int size,int element){
    int i=0,c=0;
    cnt(i,c,nums,size,element);
    return c;
}

int main(){
    int nums[]={3,4,5,7,3,9,5,3,5,9,3,4,3,5};
    int size=sizeof(nums)/sizeof(nums[0]);
    cout<<"Array Elements: "<<endl;
    for(int i=0;i<size;i++){
        cout<<nums[i]<<' ';
    }

    int element;
    cout<<"\nCount the occurences of a specific element in the array:";
    cout<<"\nInput the element: ";
    cin>>element;
    int count=countOccurences(nums,size,element);
    cout<<count<<endl;
} 