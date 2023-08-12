#include <iostream>
#include<string>
#include <ctime>
#include <iomanip>
using namespace std;

std::string month[] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun",
                        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
std::string day[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };

class account{
    public:
    int accno;
    string accHolderName;
    float balance;
    
    void getData();
    void withdraw();
    void deposit();
    friend void putdata(account);
    void getTime();
};

void account::getTime(){
    time_t timer;
    tm * time;
    const int BASE_YEAR = 1900;
 
    std::time(&timer);
    time = localtime(&timer);
    std::cout << "transaction date " << day[time->tm_wday] << " "
              << month[time->tm_mon] << " " << time->tm_mday
              << " " << (time->tm_year + BASE_YEAR);
    std::cout << "\ntransaction time " << std::setw(2) << std::setfill('0')
              << time->tm_hour << " : " << std::setw(2) << std::setfill('0')
              << time->tm_min << " : " << std::setw(2) << std::setfill('0')
              << time->tm_sec;   
}

void account::getData(){
    cout<<"enter name: \n";
    cin>>accHolderName;
    cout<<"enter account number: \n";
    cin>>accno;
    cout<<"enter balance: \n";
    cin>>balance;
}

void putData(account acc){
    cout<<"account number: "<< acc.accno<<endl;
    cout<<"name: "<< acc.accHolderName<<endl;
    cout<<"balance: "<< acc.balance<<endl;
}

void account::deposit(){
    int depositAmt;
    cout << "how much do you want to deposit: " << endl;
    cin >> depositAmt;
    balance += depositAmt;
    cout << "new balance is: "<<balance<<endl;
    getTime();
}

void account::withdraw(){
    int withdrawAmt;
    cout << "how much do you want to withdraw: " << endl;
    cin >> withdrawAmt;
    if(withdrawAmt > balance){
        cout << "insufficient funds"<<endl;
    }
    balance -= withdrawAmt;
    cout << "new balance is: "<<balance<<endl;
    getTime();
}

int main(){
    account acc;
    int op;

    cout<<"enter data: \n";
    acc.getData();

    cout<<"type 1 to display account details"<<endl;
    cout<<"type 2 to withdraw"<<endl;
    cout<<"type 3 to deposit"<<endl;
    cin >> op;
    
    switch(op){
        case 1:
            putData(acc);
            break;

        case 2:
            acc.withdraw();
            break;

        case 3:
            acc.deposit();
            break;

        default:
            cout << "invalid"<<endl;
            break;
    }
    

    return 0;
}
