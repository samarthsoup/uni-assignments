#include<iostream>
#include<tuple>
using namespace std;
int main()
{
    tuple <char, int, float> shutup('a', 7, 5.6);
 
    cout << "The initial values of tuple are : ";
    cout << get<0>(shutup) << " " << get<1>(shutup);
    cout << " " << get<2>(shutup) << endl;
 
    get<0>(shutup) = 'b';
    get<2>(shutup) =  20.5;
 
    cout << "The modified values of tuple are : ";
    cout << get<0>(shutup) << " " << get<1>(shutup);
    cout << " " << get<2>(shutup) << endl;
 
    return 0;
}