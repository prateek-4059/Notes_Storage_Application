#include <iostream>
using namespace std;

void generate_permut(string &text,int st,int end){
    if(st==end){
        cout<<text<<endl;
        return;
    }
    for(int i=st;i<=end;i++){
        swap(text[st],text[i]);
        generate_permut(text,st+1,end);
        swap(text[st],text[i]);
    }

}

int main(){
    string text;
    cout<<"Input a string: ";
    cin>>text;

    cout<<"All permutations of the string: "<<endl;
    generate_permut(text,0,text.length()-1);

    return 0;
}