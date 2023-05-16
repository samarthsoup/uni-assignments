#include <iostream>
using namespace std;

//Chef has a matrix of size N×N.
//There are N bishops placed on the matrix, in a zig-zag fashion, at the cells
//(1,1),(2,2),(1,3),(2,4),(1,5),…, and so on.
//Your task is to determine the minimum number of moves required to reach a position where each cell
//(i,i) contains exactly one bishop for all 1≤i≤N.
//rules:
//Bishops can only move diagonally. In one move, you can place exactly one bishop from its initial cell to any other cell lying on either of its diagonals.
//Bishops cannot move outside the matrix.
//No cell can contain more than one bishop at a time.
//A bishop cannot jump over another bishop.

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n==1 or n==2){
	        cout<<0<<endl;
	        continue;
	    }else if(n==3){
	        cout<<2<<endl;
	        continue;
	    }
	    if(n%2 != 0){
	        cout<<1 + 1 + ((n-3)*3/2)<<endl;
	    }else{
	        cout<<1 + 1 + ((n-4)*3/2) + 1 << endl;
	    }
	}
	return 0;
}