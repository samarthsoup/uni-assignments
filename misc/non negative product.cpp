#include <bits/stdc++.h>
using namespace std;

//Alice has an array of N integers — A1,A2,...,AN
//She wants the product of all the elements of the array to be a non-negative integer.
//That is, it can be either 0 or positive. But she doesn't want it to be negative.
//To do this, she is willing to remove some elements of the array.
//Determine the minimum number of elements that she will have to remove to make the product of the array's elements non-negative.
int main() 
{
	int t;
    cin >> t;
	
	while(t--)
	{
	    int N;
        cout << "enter number of elements in array"<<endl;
	    cin >> N;
	    int A[N];
        cout << "enter elements of array"<<endl;
	    for(int i = 0; i < N; i++)
	    {
	        cin >> A[i];
	    }
	    int count_neg = 0;
        int count_zero = 0;
        for(int i = 0; i < N; i++)
        {
            if(A[i] == 0)
            {
                count_zero++;
            }
            else if(A[i] < 0)
            {
                count_neg++;
            } 
        }
        if(count_neg%2 != 0 and (count_zero == 0))
        {
            cout << 1 << endl;
        }
        else if(count_neg%2 == 0 or (count_zero>0)){
            cout<<0<<endl;
        }
	}
	return 0;
}	