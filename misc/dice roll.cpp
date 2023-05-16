#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    srand((unsigned) time(0));
    int dice = 1 + (rand() % 6);
    cout<<dice<<endl;

    return 0;
}