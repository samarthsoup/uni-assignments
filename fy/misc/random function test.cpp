#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    srand((unsigned) time(0));
    int dice = 0 + (rand() % 2);
    cout<<dice<<endl;

    return 0;
}