#include<iostream>
#include<valarray> // for valarray functions
using namespace std;
int main()
{
// Initializing 1st valarray
    valarray<int> varr1 = {1, 2, 3, 4};
     
    // Initializing 2nd valarray
    valarray<int> varr2 = {2, 4, 6, 8};
     
    // Displaying valarrays before swapping
    cout << "The contents of 1st valarray "
            "before swapping are : ";
    for (int &x : varr1)
        cout << x << " ";
    cout << endl;
    cout << "The contents of 2nd valarray "
            "before swapping are : ";
    for (int &x : varr2)
        cout << x << " ";
    cout << endl;
 
    // Use of swap() to swap the valarrays
    varr1.swap(varr2);
 
    // Displaying valarrays after swapping
    cout << "The contents of 1st valarray after swapping are : ";
    for (int &x : varr1)
        cout << x << " ";
    cout << endl;
 
    cout << "The contents of 2nd valarray after swapping are : ";
    for (int &x : varr2)
        cout << x << " ";
    cout << endl;
 
    return 0;
     
}