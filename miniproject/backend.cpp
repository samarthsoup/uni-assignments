#include <bits/stdc++.h>
using namespace std;

fstream fout;
fstream fin;

void add_movie(){
    fout.open("data.csv", ios::out | ios::app);
    string title_input, timing_input; float duration_input; int seat_input, screen_input, price_input; 
    cout << "enter name of movie: ";
    cin >> title_input;
    cout << "enter timing: ";
    cin >> timing_input;
    cout << "what is the duration: ";
    cin >> duration_input;
    cout << "how many seats are available: ";
    cin >> seat_input;
    cout << "which screen is it at: ";
    cin >> screen_input;
    cout << "what is the price of one ticket: ";
    cin >> price_input;

    fout << title_input << ","
         << timing_input << ","
         << duration_input << ","
         << seat_input << ","
         << screen_input << ","
         << price_input << "\n";
}

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

void delete_movie(){
    string find_movie, find_timing;
  
    // Open the existing file
    fin.open("data.csv", ios::in | ios::app);
  
    // Create a new file to store the non-deleted data
    fout.open("data_new.csv", ios::out);

    string line, word;
    vector<string> row;

    cout << "which movie do you want to delete: ";
    cin >> find_movie;
    cout << "\nwhat timing: ";
    cin >> find_timing;

    while (!fin.eof()) {
        row.clear();

        getline(fin, line);
        stringstream s(line);
        while (getline(s, word, ',')) {
            row.push_back(word);
        }

        int row_size = row.size();
        int strcmp1 = find_movie.compare(row[0]);
        int strcmp2 = find_timing.compare(row[1]);
        if(strcmp1 != 0 || strcmp2 != 0){
            if (!fin.eof()) {
                for (int i = 0; i < row_size - 1; i++){
                    fout << row[i] << ",";
                }
                fout << row[row_size - 1] << "\n";
            }
        }
    }
    fin.close();
    fout.close();

    remove("data.csv");
  
    // renaming the new file with the existing file name
    rename("data_new.csv", "data.csv");
    
}

int main(){
    int op;
    cout << "\n1.add movie\n2.display movies\n3.delete movie\n4.exit\n\n";
    cin >> op;
    switch (op){
        case 1:
            add_movie();
            break;
            
        case 2:
            display();
            break;

        case 3:
            delete_movie();
            break;

        case 4:
            exit(0);

        default:
            cerr << "invalid input\n";
            break;
    }
    return 0;
}