#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    srand((unsigned) time(0));
    int secretNumber = 1 + (rand() % 10);
    int playerChoice;

    int choicesLeft = 3;
    for(int i = 1; i <= 10; i++) {
        cout << "\nenter the number: ";
        cin >> playerChoice;
        if (playerChoice == secretNumber) {
            cout << "thumbs up emoji"<<endl;
        break;
        }
        else{
            cout << "L"<<endl;
        }
        choicesLeft--;
        if (choicesLeft == 0) {
            cout << "yeah youre done"<<endl;
        }
    }
    return 0;
}