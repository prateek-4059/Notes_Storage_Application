#include <iostream>
using namespace std;

template <typename T>
T myMax(T x,T y){
    return (x>y)?x:y;
}
int main()
{
    cout<<myMax<int>(3,5)<<endl;
    cout<<myMax<float>(6.8,9.1)<<endl;
    cout<<myMax<char>('g','i')<<endl;
}