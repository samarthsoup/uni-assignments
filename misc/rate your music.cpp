#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(){
    srand((unsigned) time(0));
    int responses = 1 + (rand() % 7);

    string str;
    cout<<"whats your favourite song"<<endl;
    cin>>str;

    switch(responses){

        case 1:
            cout<<"really?"<<endl;
            break;

        case 2:
            cout<<"ehhhhhhh"<<endl;
            break;
        
        case 3:
            cout<<"you could do better"<<endl;
            break;

        case 4:
            cout<<"wrong!"<<endl;
            break;

        case 5:
            cout<<"let me guess: pisces?"<<endl;
            break;

        case 6:
            cout<<"sorry i asked"<<endl;
            break;

        case 7:
            cout<<"im sorry </3"<<endl;
            break;

        default:
            cout<<"at least get something right"<<endl;
            break;
    }

    return 0;
}