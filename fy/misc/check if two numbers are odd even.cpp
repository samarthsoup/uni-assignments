#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int t;
    cout << "number of testcases: " << endl;
    cin >> t;
    while(t--){
        int A,C;
        cout << "input two numbers: "<<endl;
        cin >> A;
        cin >> C;
        if (A%2 == 0 && C%2 == 0){
            cout<<"both A and C are even"<<endl;
        }
        else if (A%2 != 0 and C%2 != 0){
            cout<<"both A and C are odd"<<endl;
        }
        else if (A%2 == 0 and C%2 != 0){
            cout<<"A is even and C is odd"<<endl;
        }
        else if (A%2 != 0 and C%2 == 0){
        cout<<"A is odd and C is even"<<endl;
        }
        
    }
} 