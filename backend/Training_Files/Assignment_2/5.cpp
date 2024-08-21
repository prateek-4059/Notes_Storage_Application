#include <bits/stdc++.h>
using namespace std;

class Student{
    private:
    int stu_id;
    string name;
    int sem;
    string branch;

    public:
    void getdetails();
    void printdetails();
};
void Student::getdetails(){
    cout<<"Enter student id ";
    cin>>stu_id;
    getchar();
    cout<<"Enter the name ";
    getline(cin,name);
    cout<<"Enter the semester ";
    cin>>sem;
    getchar();
    cout<<"Enter the branch name ";
    getline(cin,branch);
}
void Student::printdetails(){
    cout<<"Student ID "<<stu_id<<endl;
    cout<<"Name "<<name<<endl;
    cout<<"Semester "<<sem<<endl;
    cout<<"Branch "<<branch<<endl;
}
int main()
{
    Student st;
    st.getdetails();
    st.printdetails();
    return 0;
}