#include<iostream>
#include<tuple> 
using namespace std;
int main()
{
    tuple <int,char,float> tup1(20,'g',17.5);
    tuple <int,char,float> tup2(10,'f',15.5);
     
    cout << "The first tuple elements before swapping are : ";
    cout <<  get<0>(tup1) << " " << get<1>(tup1) << " "
         << get<2>(tup1) << endl;
    cout << "The second tuple elements before swapping are : ";
    cout <<  get<0>(tup2) << " " << get<1>(tup2) << " "
         << get<2>(tup2) << endl;

    tup1.swap(tup2);

    cout << "The first tuple elements after swapping are : ";
    cout <<  get<0>(tup1) << " " << get<1>(tup1) << " "
         << get<2>(tup1) << endl;
    cout << "The second tuple elements after swapping are : ";
    cout <<  get<0>(tup2) << " " << get<1>(tup2) << " "
         << get<2>(tup2) << endl;
 
    return 0;
}