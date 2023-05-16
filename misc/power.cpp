#include <iostream>
using namespace std;
int main() {
    int power;
    float base, result = 1;
    cout << "enter base and power\n";
    cin >> base >> power;
    while (power != 0){
        result *= base;
        power--;
    }
    cout << result;
return 0;
}