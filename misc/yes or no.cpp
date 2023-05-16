#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
    srand((unsigned) time(0));
    int yn = 1 + (rand() % 2);

    string str;
    cout<<"what is your question?"<<endl;
    cin>>str;

    if(yn==1){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}