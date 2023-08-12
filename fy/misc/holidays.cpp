#include <bits/stdc++.h>
using namespace std;

//A particular month has 30 days, numbered from 1 to 30. Day 1 is a Monday, and the usual 7-day week is followed.
//Every Saturday and Sunday is a holiday. There are N festival days, which are also holidays.
//Note that it is possible for a festival day to occur on a Saturday or Sunday.

int main() 
{
	int t;
    cin >> t;
	
	while(t--)
	{
	    int N;
	    cin >> N;
	    int A[N];
	    // There are 8 holidays in the given month
	    int Weekend=8;
	    for(int i=0; i < N; i++)
	    {
	        cin >> A[i];
	        // If the date (A[i]) divided by 7 leaves reminder 6 or 0 then on the date it will be Saturday and Sunday respectively
	        if (A[i]%7 != 6 && A[i]%7 != 0)
	        {
	            Weekend++;
	        }
	    }
	    //number of elements in the final holiday list
	    cout<<Weekend<<endl;
	}
}