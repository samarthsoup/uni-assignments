#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Initializing valarray
    valarray<int> val1 = { 10, 2, 20, 1, 30 };
     
    // Declaring new valarray
    valarray<int> val2;
     
    // using shift() to shift elements to left
    // shifts valarray by 2 position
    val2 = val1.shift(2);
     
    // Displaying elements of valarray after shifting
    cout << "The new valarray after shifting is : ";
    for ( int&x : val2) cout << x << " ";
    cout << endl;
     
    // using cshift() to circularly shift elements to right
    // rotates valarray by 3 position
    val2 = val1.cshift(-3);
     
    // Displaying elements of valarray after circular shifting
    cout << "The new valarray after circular shifting is : ";
    for ( int&x : val2) cout << x << " ";
    cout << endl;
 
    return 0;
     
}