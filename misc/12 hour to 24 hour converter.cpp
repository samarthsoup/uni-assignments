#include <iostream>
using namespace std;

int main(){
    int twelveHourClock,ampm;

    cout<<"enter time in 12 hour clock: \n";
    cin>>twelveHourClock;
    cout<<"specify if time is in AM or PM(1 for AM, 2 for PM): \n";
    cin>>ampm;

    if(ampm == 1)
        cout << twelveHourClock;

    else if(ampm == 2)
        cout << twelveHourClock + 1200;
    else
        cout << "invalid";

return 0;
}