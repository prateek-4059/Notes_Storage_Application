#include <bits/stdc++.h>
using namespace std;

class Queue{
    public:
    int cap;
    int *arr;
    int front;
    int rear;
    Queue(int size){
        this->cap=size;
        arr=new int(size);
        front=-1;
        rear=-1;
    }

    void enqueue(int data){
        if(isFull()){
            cout<<"Queue Overflow"<<endl;
        }
        else if(front==-1 && rear==-1){
            front=0;
            rear=0;
            arr[rear]=data;
        }
        else{
            rear++;
            arr[rear]=data;
        }
    }

    int dequeue(){
        if(isEmpty()){
            cout<<"Queue Underflow"<<endl;
            return -1;
        }
        if(front==rear){
            int ele=arr[front];
            front=-1;
            rear=-1;
            return ele;
        }
        else{
            int x=arr[front];
            front++;
            return x;
        }
    }

    int peek(){
        return arr[front];
    }

    bool isFull(){
        return rear==cap-1;
    }

    bool isEmpty(){
        return front==-1;
    }
};

int main(){
    Queue q(20);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(5);
    q.enqueue(12);

    cout<<q.peek()<<endl;
    cout<<q.dequeue()<<endl;

    while(!q.isEmpty()){
        cout<<q.peek()<<endl;
        q.dequeue();
    }
    return 0;
}