#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int lowerBound, upperBound;
    cout<<"enter lower bound and upper bound: "<<endl;
    cin>>lowerBound>>upperBound;
    srand((unsigned) time(0));
    int random = lowerBound + (rand() % upperBound);
    cout<<random<<endl;

    return 0;
}