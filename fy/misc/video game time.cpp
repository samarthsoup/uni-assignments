#include <iostream>
#include <string>
using namespace std;

//Chef is playing a video game, and is getting close to the end. He decides to finish the rest of the game in a single session.
//There are X levels remaining in the game, and each level takes Chef 
//Y minutes to complete. To protect against eye strain, Chef also decides that every time he completes 
//3 levels, he will take a 
//Z minute break from playing. Note that there is no need to take this break if the game has been completed.
//How much time (in minutes) will it take Chef to complete the game?

int main() 
{
    int t;
    cin>>t; 
    while(t--)
    {
    int X, Y, Z;
    cin>>X>>Y>>Z;
  
    int a=X/3;
  
    if(X%3 == 0 and X != 0){
        cout<<(X*Y)+((a-1)*Z)<<endl;
    }
    else{
        cout<<(X*Y)+(a*Z)<<endl;
    }
  
   }
return 0;
}