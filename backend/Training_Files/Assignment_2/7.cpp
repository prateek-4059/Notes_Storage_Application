#include <bits/stdc++.h>
using namespace std;

class Student{
    private:
    int stu_id;
    string name;
    string branch;
    int sub1,sub2,sub3,sub4,sub5;

    public:
    Student(int s1,int s2,int s3,int s4,int s5){
        sub1=s1;
        sub2=s2;
        sub3=s3;
        sub4=s4;
        sub5=s5;
    }
    void getdetails();
    float getper();
    string getclass(float);
};
void Student::getdetails(){
    cout<<"Enter student id ";
    cin>>stu_id;
    getchar();
    cout<<"Enter the name ";
    getline(cin,name);
    cout<<"Enter the branch name ";
    getline(cin,branch);
}
float Student::getper(){
    int total=(sub1+sub2+sub3+sub4+sub5);
    float per=(float)total/5;
    return per;
}
string Student::getclass(float per){
    if(per>=80){
        return "First";
    }
    else if(per>=60 && per<80){
        return "Second";
    }
    else if(per>=40 && per<60){
        return "Pass";
    }
    else{
        return "Distinction";
    }
}

int main()
{
    int s1,s2,s3,s4,s5;
    cout<<"Enter the marks of the subjects "<<endl;
    cin>>s1>>s2>>s3>>s4>>s5;
    Student st(s1,s2,s3,s4,s5);
    st.getdetails();
    float per=st.getper();
    cout<<"The percentage of student is "<<per<<endl;
    cout<<"The class of student is "<<st.getclass(per)<<endl;
    return 0;
}