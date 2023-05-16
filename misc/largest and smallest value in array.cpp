#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
    cin >> t;
	
	while(t--)
	{
	    int N;
        cout << "enter number of elements of array"<<endl;
	    cin >> N;
	    int A[N];
        cout << "enter elements of array"<<endl;
	    for(int i = 0; i < N; i++)
	    {
	        cin >> A[i];
	    }
        int small = A[0];
        int large = A[0];
        for(int i=0; i < N; i++)
        {
            if( A[i] > large)
            {
                large = A[i];
            }
            if( A[i] < small)
            {
                small = A[i];
            }
        
        }
        cout << small <<" " << large << endl;
	}
}