#include <iostream>
#include <iomanip>
using namespace std;
/* a class named Employee */
class Employee{
    private :
        int empID; /* Employee ID. */
        string empName; /* Employee Name */
        string dept; /* Department */
        float sal; /* Employee Salary */
        int emp_num = 0;
    public:
        Employee(){ /*Default constructor for Employee class*/
            empID = -1;
            empName = "-";
            dept = "-";
            sal = 0.0;
            emp_num++;
            cout << "Object called via default constructor\n";
        } 
        Employee(int id, string name, string d, double s){ 
            /*Parametrized constructor for Employee class*/
            empID = id;
            empName = name;
            dept = d;
            sal = s;
            emp_num++;
            cout << "Object called via parameterized constructor\n";
        }
        Employee(Employee &e){ /*Copy constructor */
            empID = e.empID;
            empName = e.empName;
            dept = e.dept;
            sal = e.sal;
            emp_num++; 
            cout << "Object called via copy constructor\n";
        }
        /*Setter functions*/
        float calcNetPay(){
            return sal;
        }
        /*function to display the values of all data members of class*/
        inline void display(){
            cout<<empID<<"\t"<<empName<<"\t"<<dept<<"\t"<<calcNetPay()<<endl;
        }
        ~Employee(){ 
		/*Destructor of Employee class*/ 
		    cout<<"\nObject is deleted";
        	emp_num--;
	    }
};

int main() 
{
    Employee emp[2];
    Employee e1; //Default Constructor

    Employee e2(10,"ABC","Comp",10000); //Parametrized Constructor

    Employee e3(e1); //Copy Constructor
    Employee e4(e2);

    emp[0]= e3; 
    emp[1]= e4; 

    e1.display();
    e2.display();

    delete [] emp;

    e1.~Employee();
    e2.~Employee();

    return 0;
}
