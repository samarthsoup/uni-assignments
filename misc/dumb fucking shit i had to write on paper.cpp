#include <iostream>
#include <string>
using namespace std;

// Base class Employee
class Employee {
  protected:
    string name;
    int age;
    double baseSalary;

  public:
    Employee(string n, int a, double b) {
      name = n;
      age = a;
      baseSalary = b;
    }
    virtual double calculateSalary() {
      return baseSalary;
    }
    virtual void printInfo() {
      cout << "Name: " << name << endl;
      cout << "Age: " << age << endl;
      cout << "Base Salary: " << baseSalary << endl;
    }
};

// Derived class Manager
class Manager : public Employee {
  private:
    double bonus;

  public:
    Manager(string n, int a, double b, double bn) : Employee(n, a, b) {
      bonus = bn;
    }
    double calculateSalary() {
      return baseSalary + bonus;
    }
    void printInfo() {
      cout << "--- Manager ---" << endl;
      Employee::printInfo();
      cout << "Bonus: " << bonus << endl;
      cout << "Total Salary: " << calculateSalary() << endl;
    }
};

// Derived class Salesperson
class Salesperson : public Employee {
  private:
    double commissionRate;
    int salesVolume;

  public:
    Salesperson(string n, int a, double b, double cr, int sv) : Employee(n, a, b) {
      commissionRate = cr;
      salesVolume = sv;
    }
    double calculateSalary() {
      return baseSalary + commissionRate * salesVolume;
    }
    void printInfo() {
      cout << "--- Salesperson ---" << endl;
      Employee::printInfo();
      cout << "Commission Rate: " << commissionRate << endl;
      cout << "Sales Volume: " << salesVolume << endl;
      cout << "Total Salary: " << calculateSalary() << endl;
    }
};

// Derived class Developer
class Developer : public Employee {
  private:
    int numProjects;
    double projectBonus;

  public:
    Developer(string n, int a, double b, int np, double pb) : Employee(n, a, b) {
      numProjects = np;
      projectBonus = pb;
    }
    double calculateSalary() {
      return baseSalary + numProjects * projectBonus;
    }
    void printInfo() {
      cout << "--- Developer ---" << endl;
      Employee::printInfo();
      cout << "Number of Projects: " << numProjects << endl;
      cout << "Project Bonus: " << projectBonus << endl;
      cout << "Total Salary: " << calculateSalary() << endl;
    }
};

// Main function
int main() {
  // Create Manager object
  Manager manager("John Smith", 35, 50000, 10000);
  manager.printInfo();

  // Create Salesperson object
  Salesperson salesperson("Jane Doe", 27, 30000, 0.05, 1000);
  salesperson.printInfo();

  // Create Developer object
  Developer developer("Tom Johnson", 42, 60000, 5, 5000);
  developer.printInfo();

  return 0;
}
