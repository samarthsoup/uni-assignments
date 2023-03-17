#include <iostream>
using namespace std;
 
void passByReference(int& data)
{
    cout << "Value of data in passByReference() is "<< data << endl;
    data = 20;
    cout << "Value of data is changed now to "<< data << endl;
}
 
int main()
{
    int data = 10;
 
    cout << "Value of data is "<< data << endl;
    passByReference(data);
    cout << "Value after calling passByReference() is "<< data;
    return 0;
}