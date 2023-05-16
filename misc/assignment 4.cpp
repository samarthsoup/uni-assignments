#include <iostream>

using namespace std;

class empinfo{
    protected:
        int empid;
        string empname;
};

class department{
    protected:
        string dept;

};

class employee : public empinfo, public department{
    private:
        float sal;
    public:
        employee(){
        sal=0.0;
        }
        void getdata();
        void putdata();
};

void employee::getdata(){
    cout<<"enter empno: ";
    cin>>empid;
    cout<<"enter emp name: ";
    cin>>empname;
    cout<<"enter department: ";
    cin>>dept;
    cout<<"enter salary: ";
    cin>>sal;
    cout<<"/n";
}

void employee::putdata(){
    cout<<"ID: "<<empid<<endl;
    cout<<"NAME: "<<empname<<endl;
    cout<<"DEPARTMENT: "<<dept<<endl;
    cout<<"SALARY: "<<sal<<endl<<endl;
}

int main(){
    employee e1, e2;

    cout<<"Enter employee info:"<<endl;
    e1.getdata();
    e2.getdata();
    cout<<"Entered employee info:"<<endl;
    e1.putdata();
    e2.putdata();

}