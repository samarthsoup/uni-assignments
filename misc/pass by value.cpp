#include <iostream>
using namespace std;
 
void passByValue(int data){
    cout << "Value of data in passByValue() is "<< data << endl;
    data = 20;
    cout << "Value of data is changed now to "<< data << endl;
}
 
int main(){
    int data = 10;
 
    cout << "Value of data is "<< data << endl;
    passByValue(data);
    cout << "Value after calling passByValue() is " << data;
    return 0;
}