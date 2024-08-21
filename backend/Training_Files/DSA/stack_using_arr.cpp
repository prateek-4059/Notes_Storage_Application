#include <bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int cap;
    int *arr;
    int top;

    Stack(int size){
        this->cap=size;
        arr=new int(20);
        top=-1;
    }

    void push(int x){
        if(isfull()){
            cout<<"Stack Overflow"<<endl;
        }
        else{
            top++;
            arr[top]=x;
        }
    }

    int pop(){
        if(isEmpty()){
            cout<<"Stack Underflow"<<endl;
            return -1;
        }
        else{
            int ele=arr[top];
            top--;
            return ele;
        }
    }

    int gettop(){
        return arr[top];
    }

    bool isfull(){
        if(top==cap){
            return true;
        }
        else{
            return false;
        }
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    Stack st(20);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(50);

    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;

    cout<<"Now, stack elements are: "<<endl;
    while(!st.isEmpty()){
        int ele=st.gettop();
        cout<<ele<<endl;
        st.pop();
    }

    return 0;
}