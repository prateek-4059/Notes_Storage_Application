#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>vec1={11,22,33,44};
    vector<int>vec2={55,66,77,88};

    //using swap() function to swap elements of vector
    cout<<"\n"<<vec2.at(3);
    vec1.swap(vec2);
    cout<<"\n"<<vec2.at(3);
}