#include <bits/stdc++.h>
using namespace std;

fstream fout;
fstream fin;

void book_tickets(){
    string find_movie, find_timing;
    int seats_booked;
    fin.open("data.csv", ios::in);

    fout.open("data_new.csv", ios::out);

    string line, word;
    vector<string> row;

    cout << "BOOKING\n\n";

    cout << "which movie: ";
    cin >> find_movie;
    cout << "\nwhat timing: ";
    cin >> find_timing;

    cout << "\n\nhow many tickets do you want to book: ";
    cin >> seats_booked;

    while (!fin.eof()) {
    
        row.clear();
        getline(fin, line);
        stringstream s(line);
    
        while (getline(s, word, ',')) {
            row.push_back(word);
        }

        int strcmp1 = find_movie.compare(row[0]);
        int strcmp2 = find_timing.compare(row[1]);
        int row_size = row.size();

        if(strcmp1 == 0 && strcmp2 == 0){
            int total_seats = stoi(row[3]);
            int bill = stoi(row[5]);
            if(seats_booked <= total_seats){
                total_seats = total_seats - seats_booked;
                bill = bill * seats_booked;

                stringstream convert;
                convert << total_seats;
                row[3] = convert.str();

                if (!fin.eof()) {

                    for (int i = 0; i < row_size - 1; i++) {
                                fout << row[i] << ",";
                            }
            
                            fout << row[row_size - 1] << "\n";
                }

                cout << seats_booked << " tickets booked for " << row[0] << " at time " << row[1] << "\ntotal bill: " << bill << " inr" << "\n\n";
            }else{
                cout << "we do not have enough seats\n\n";
            }
        }else{
            if (!fin.eof()) {
                for (int i = 0; i < row_size - 1; i++) {
        
                            // write the updated data
                            // using fout
                    fout << row[i] << ",";
                }
                    fout << row[row_size - 1] << "\n";
            }
        }
    }
    

    fin.close();
    fout.close();

    remove("data.csv");
  
    // renaming the updated file with the existing file name
    rename("data_new.csv", "data.csv");
  
}

int main(){
    book_tickets();
}