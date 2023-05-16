#include<iostream>
#include<fstream>

using namespace std;

int main(){

    std::fstream file;

    file.open("yepyep.txt", ios::out);
    if(file.is_open()){
        file << "yep \n";
        file.close();
    }

    file.open("yepyep.txt", ios::out);//append
    if(file.is_open()){
        file << "yep yep \n";
        file.close();
    }

    return 0;
}