#include<iostream>
#include<fstream>

using namespace std;

int main(){

    std::fstream file;

    file.open("yep.txt", ios::out);//write
    if(file.is_open()){
        file << "yep \n";
        file << "yep line 2 \n";
        file.close();
    }
    return 0;
}