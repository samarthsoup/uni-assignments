#include<iostream>
#include<tuple> 
using namespace std;
int main()
{
    tuple <char,int,float> shutup(20,'g',17.5);

    cout << "The size of tuple is : ";
    cout << tuple_size<decltype(shutup)>::value << endl;
 
    return 0;
 
}