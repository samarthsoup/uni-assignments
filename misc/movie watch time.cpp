#include <iostream>
#include <string>
using namespace std;

//Chef started watching a movie that runs for a total of X minutes.
//Chef has decided to watch the first Y minutes at twice the speed.
//How long will Chef spend watching the movie in total?

int main() {
    int X,Y,total;
    cout << "enter total time of the movie and the time spent speeding the movie up: \n";
    cin>>X>>Y;
 
    total = X-Y+Y/2;
 
    cout << total;

return 0;
}