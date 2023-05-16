#include <iostream>
using namespace std;
 
template <typename T> T maximum(T x, T y)
{
    return (x > y) ? x : y;
}
 
int main()
{
    cout << maximum<int>(3, 7) << endl;
    cout << maximum<double>(3.5, 7.3) << endl;
    cout << maximum<char>('g', 'e') << endl;
 
    return 0;
}