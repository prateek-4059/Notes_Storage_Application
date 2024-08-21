#include <iostream>
using namespace std;
template<typename T,typename U>
class A{
    T x;
    U y;
    public:
    A(){
        cout<<"\n\nConstructor called"<<endl;
        cout<<"\nsizeof(x)="<<sizeof(x);
        cout<<"\nsizeof(y)="<<sizeof(y);
    }
};
int main()
{
    A<char,char>obj1;
    A<int,double>obj2;
    return 0;
}