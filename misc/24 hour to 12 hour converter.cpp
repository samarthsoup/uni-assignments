#include <iostream>
using namespace std;

int main(){
    int twentyfourHourClock,twelveHourClock;

    cout<<"enter time in 24 hour clock: \n";
    cin>>twentyfourHourClock;

    if(twentyfourHourClock >= 1200){
        twelveHourClock = twentyfourHourClock - 1200;
        cout<<twelveHourClock;
    }
    else if(twentyfourHourClock < 0 or twentyfourHourClock > 2400)
        cout<<"invalid";
    else  
        cout<<twentyfourHourClock;
    
}