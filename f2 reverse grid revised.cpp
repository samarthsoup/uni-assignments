#include <iostream>
#include <string>
using namespace std;

//efficient

int main(){
    cout << "driver names reference: bos, pou, iwa, ves, dar, doo, hau, ver, mai, mar, mal, lec, fit, had, jco, bea, cra, nis, sta, nov, aco, ben"<<endl;

    string qualiPosition[22];
    cout<<"input qualifying results in order: "<<endl;

    for(int i = 0; i<22; i++){
            cout << i + 1 << ". ";
            cin >> qualiPosition[i];
    }

    cout << "reverse grid order: "<<endl;

    for(int i = 9; i >= 0; i--){
        cout<< 10 - i << ". " << qualiPosition[i]<<endl;
    }

    for(int i = 10; i < 22; i++){
        cout<< i + 1 << ". " << qualiPosition[i]<<endl;
    }

    return 0;
}