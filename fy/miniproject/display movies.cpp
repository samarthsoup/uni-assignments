#include<bits/stdc++.h>
using namespace std;

fstream fin;

void display(){
    fin.open("data.csv", ios::in);

    vector<string> row;
    string line, word;

    while (!fin.eof()) {
        
        row.clear();

            // read an entire row and
            // store it in a string variable 'line'
        getline(fin, line);
    
            // used for breaking words
        stringstream s(line);
    
            // read every column data of a row and
            // store it in a string variable, 'word'
        while (getline(s, word, ',')) {
    
                // add all the column data
                // of a row to a vector
            row.push_back(word);
        }
        
        cout << "\nmovie: " << row[0] 
            << "\ntiming: " << row[1] 
            << "\nduration: " << row[2] << " hours" 
            << "\navailable seats: " << row[3] 
            << "\nAUDI" << row[4] 
            << "\nprice: " << row[5] << " inr" << "\n\n";
        
    }
    fin.close();
}

int main(){
    display();

    return 0;
}