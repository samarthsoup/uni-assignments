#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){

    std::fstream file;

    file.open("yep.txt", ios::in);//read
    if(file.is_open()){
        string line; 
        while(getline(file, line)){
            cout << line << endl;
        }
        file.close();
    }
    return 0;
}