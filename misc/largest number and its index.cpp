#include <bits/stdc++.h>
using namespace std;

//outputs largest element and the position in the array of that element

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
        cout<<"input elements of array"<<endl;
	    for(int i=0; i < N; i++)
	    {
	        cin >> A[i];
	    }
        int right = 0;
        int large = -100;
        for(int i=0; i < N; i++)
	    {
	        if (A[i] >= large)
	        {
	            large = A[i];
                right = i;
	        }
	    }
	    cout << large << " "<< right << endl;
        
	}
}