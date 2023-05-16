#include <iostream>
#include <string>
using namespace std;

int main(){
    int month,day;

    cout<<"enter your birth month"<<endl;
    cin>>month;
    cout<<"enter the day"<<endl;
    cin>>day;

    if((month==12 and day>21) or (month==1 and day<20)){
        cout<<"capricorn"<<endl;
    }
    else if((month==1 and day>19) or (month==2 and day<19)){
        cout<<"aquarius"<<endl;
    }
    else if((month==2 and day>18) or (month==3 and day<21)){
        cout<<"pisces"<<endl;
    }
    else if((month==3 and day>20) or (month==4 and day<20)){
        cout<<"aries"<<endl;
    }
    else if((month==4 and day>19) or (month==5 and day<21)){
        cout<<"taurus"<<endl;
    }
    else if((month==5 and day>20) or (month==6 and day<22)){
        cout<<"gemini"<<endl;
    }
    else if((month==6 and day>21) or (month==7 and day<23)){
        cout<<"cancer"<<endl;
    }
    else if((month==7 and day>22) or (month==8 and day<23)){
        cout<<"leo"<<endl;
    }
    else if((month==8 and day>22) or (month==9 and day<23)){
        cout<<"virgo"<<endl;
    }
    else if((month==9 and day>22) or (month==10 and day<23)){
        cout<<"libra"<<endl;
    }
    else if((month==10 and day>22) or (month==11 and day<23)){
        cout<<"scorpio"<<endl;
    }
    else if((month==11 and day>22) or (month==12 and day<22)){
        cout<<"saggitarius"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

    return 0;
}