#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    srand((unsigned) time(0));
    int random_number = rand();
    cout<<random_number<<endl;
    return 0;
}