#include<iostream>
#include<string>
using namespace std; 
int main() 
{ 
    string str;
    cout<<"enter a string: ";
    cin>>str;
    int i;
    cout<<"Printing string in reverse\n";
    for(i = str.length() - 1; i >= 0; i--){
      	cout<<str[i];
    }
    return 0;
}