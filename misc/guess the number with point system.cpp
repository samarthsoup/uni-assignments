#include <iostream>
#include <cstdlib>
using namespace std;

//not working rn

int main(){

    srand((unsigned) time(0));
    int secretNumber = 1 + (rand() % 10);
    int playerChoice,points;
    int flag=0;

    int choicesLeft = 3;
    for(int i = 1; i <= 10; i++) {
        cout << "\nenter the number: ";
        cin >> playerChoice;
        if (playerChoice == secretNumber) {
            cout << "thumbs up emoji"<<endl;
            flag = 1;
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
    if(choicesLeft == 2){
        points = 10;
    }
    else if(choicesLeft == 1){
        points = 5;
    }
    else if(choicesLeft=0 and flag == 1){
        points = 2;
    }

    cout << "points: "<<points<<endl;
    return 0;
}