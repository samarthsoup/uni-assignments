#include<iostream>
using namespace std;

float calcInvSqRoot( float n ) {
   
   const float threehalfs = 1.5F;
   float y = n;
   
   long i = * ( long * ) &y;

   i = 0x5f3759df - ( i >> 1 );
   y = * ( float * ) &i;
   
   y = y * ( threehalfs - ( (n * 0.5F) * y * y ) );
   
   return y;
}

int main(){
   
   int n;
   cout << "which number do you want an inverse square root of?"<<endl;
   cin>>n;
   float invSqRoot = calcInvSqRoot(n);
   cout<<"The inverse square root of the number "<<n<<" is "<<invSqRoot;
   
   return 0;
}