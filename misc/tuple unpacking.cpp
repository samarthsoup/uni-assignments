#include<iostream>
#include<tuple> 
using namespace std;
int main()
{  
    int i_val;
    char ch_val;
    float f_val;  
     
    tuple <int,char,float> tup1(20,'g',17.5);
 
    tie(i_val,ch_val,f_val) = tup1;

    cout << "The unpacked tuple values (without ignore) are : ";
    cout << i_val << " " << ch_val << " " << f_val;
    cout << endl;

    tie(i_val,ignore,f_val) = tup1;

    cout << "The unpacked tuple values (with ignore) are : ";
    cout << i_val  << " " << f_val;
    cout << endl;
 
    return 0;
 
}