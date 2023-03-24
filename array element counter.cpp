#include <bits/stdc++.h>
using namespace std;

//Given N space separated integers and an integer k, please perform the following operations
//Store the integers in the array A
//Count all the items of the array A strictly greater than 0 and store it as the variable pos
//Count all the items of the array A strictly lesser than 0 and store it as the variable neg
//Count all items of the A which are divisible by k and store it as the variable divk

int main() 
{
	int t;
    cin >> t;
	
	while(t--)
	{
	    int N, K;
        cout << "input number of elements you want in array and a number k"<<endl;
	    cin >> N >> K;
	    int A[N];
        int pos = 0;
        int neg = 0;
        int divk = 0;
        cout << "input elements of array"<<endl;
        for(int i = 0; i<N; i++)
        {
            cin >> A[i];
        }
        for(int i = 0; i < N; i++)
        {
            if(A[i] < 0)
            {
                neg = neg + 1;
            }
            else if(A[i] > 0)
            {
                pos = pos + 1;
            }
            if (A[i]%K == 0)   
            {
                divk = divk + 1;
            }
        }
        cout << pos <<" "<< neg <<" "<< divk << endl;
	}
}