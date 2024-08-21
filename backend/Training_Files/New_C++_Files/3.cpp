#include <iostream>
using namespace std;
template<typename T,typename U=char>
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
    A<char>obj1;
    A<double>obj2;
    A<double,long double>obj3;
    return 0;
}