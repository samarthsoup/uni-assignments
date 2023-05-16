#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    srand((unsigned) time(0));
    int rps = 1 + (rand() % 3);

    if(rps == 1){
        cout<<"rock"<<endl;
    }
    else if(rps == 2){
        cout<<"paper"<<endl;
    }
    else{
        cout<<"scissors"<<endl;
    }

    return 0;
}