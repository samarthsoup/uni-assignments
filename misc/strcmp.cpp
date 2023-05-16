#include<iostream>
using namespace std;
int main ()
{
    char str1[50], str2[50];
    int i, n, flag = 0;
    cout << "enter string 1 : ";
    gets(str1);
    cout << "enter string 2 : ";
    gets(str2);
    cout << "enter number of characters to be compared : ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        if (str1[i] != str2[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "compared strings are equal.";
    else 
        cout << "strings are not equal.";
    return 0;	
}