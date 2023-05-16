#include <iostream>
#include<string>
using namespace std;

class student{
    public:
    string name;
    int marks1,marks2;

    void getData();
    friend void putdata(student);
};

void student::getData(){
    cout<<"enter name: \n";
    cin>>name;
    cout<<"enter marks: \n";
    cin>>marks1;
    cout<<"enter marks: \n";
    cin>>marks2;
}

void putData(student st){
    cout<<"name: "<<st.name<<endl;
    cout<<"marks: "<<st.marks1<<endl;
    cout<<"marks: "<<st.marks2<<endl;
}


int main(){
    int t;
    student st;
    cout<<"enter number of students: \n";
    cin>>t;
    while(t--){
        cout<<"enter student data\n";
        st.getData();
        cout<<"student data: \n";
        putData(st);
    }

    return 0;
}