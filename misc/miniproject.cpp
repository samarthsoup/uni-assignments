#include <bits/stdc++.h>
using namespace std;

class theatre{
    public:
        void viewMovies();
        int bookTickets();

        vector<tuple<int, string, string, int, int>>timingsAUDI; //timing index, timing, audi number, regular seat price, premium price
        vector<tuple<int, string, float, float>> movies; //movie number, name, duration, rating
        vector<int>quant;

        vector<int>quant1;
        vector<tuple<int, string, string, int, int>>timingsAUDI1; 

        vector<int>quant2;
        vector<tuple<int, string, string, int, int>>timingsAUDI2; 
};

void theatre::viewMovies(){
    int op2;
    cout << "available movies: \n";

    for (int i = 0; i < movies.size(); i++) 
        cout << i+1 << ". " << get<1>(movies[i]) << "\n";

    cout << "\n";

    cout << "choose movie for more details\n";
    cin >> op2;
    for (int i = 0; i < movies.size(); i++){ 
        if(op2 == 1){
            timingsAUDI = timingsAUDI1;
            quant = quant1;
        }else if(op2 == 2){
            timingsAUDI = timingsAUDI2;
            quant = quant2;
        }else{
            cout << "invalid input\n";
            break;
        }
        if(op2 == get<0>(movies[i])){
            cout << "movie: " << get<1>(movies[i]) << "\n";
            cout << "duration: " << get<2>(movies[i]) << " hours" << "\n";
            cout << "rating: " << get<3>(movies[i]) << "\n";
            cout << "available timings: \n";
            for (int j = 0; j < timingsAUDI1.size(); j++){ 
                cout << j+1 << ". " << get<1>(timingsAUDI1[j]) << "  " << get<2>(timingsAUDI1[j]) << "\n";
                cout << "available regular seats: " << quant[j];
                cout << "\navailable premium seats: " << quant[j+4] << "\n\n";
            }
            break;
        }
        cout << "\n\n";
    }
}


int theatre::bookTickets(){
    cout << "which movie do you want to watch?\n";

    for (int i = 0; i < movies.size(); i++) 
        cout << i+1 << ". " << get<1>(movies[i]) << "\n";

    int totalAmount;
    int op3, op4, quantInput, op5;

    cin >> op3;

    if(op3 == 1){
        timingsAUDI = timingsAUDI1;
        quant = quant1;
    }else if(op3 == 2){
        timingsAUDI = timingsAUDI2;
        quant = quant2;
    }   
    for (int i = 0; i < movies.size(); i++){ 
        if(op3 == get<0>(movies[i])){
            cout << "movie: " << get<1>(movies[i]) << "\n";
            cout << "choose timings: \n";
            for (int j = 0; j < timingsAUDI.size(); j++){ 
                cout << j+1 << ". " << get<1>(timingsAUDI[j]) << "  " << get<2>(timingsAUDI[j]) << "\n";
                cout << "price for regular seat: "<< get<3>(timingsAUDI[j]) << "\n";
                cout << "price for premium seat: "<< get<4>(timingsAUDI[j]) << "\n\n";
            }
            cin >> op4;
            for(int k = 0; k < timingsAUDI.size(); k++){
                if(op4 == get<0>(timingsAUDI[k])){
                    cout << "timing chosen: " << get<1>(timingsAUDI[k]) << "\n";
                    cout << "how many seats do you want to purchase?\n";
                    cin >> quantInput; 
                    cout << "\n1.regular\n2.premium\n";
                    cin >> op5;
                    switch(op5){
                        case 1:
                            if(quantInput > quant[k]){
                                cout << "we dont have those many available seats\n";
                                break;
                            }else{
                                totalAmount = totalAmount + get<3>(timingsAUDI[k]) * quantInput;
                                quant[k] = quant[k] - quantInput;
                                cout << "total bill: "<< totalAmount << "\n\n"; 
                                break;
                            }
                            break;

                        case 2:
                            if(quantInput > quant[k+4]){
                                cout << "we dont have those many available seats\n";
                                break;
                            }else{
                                totalAmount = totalAmount + get<4>(timingsAUDI[k]) * quantInput;
                                quant[k+4] = quant[k+4] - quantInput;
                                cout << "total bill: "<< totalAmount << "\n\n";
                                break;
                            }
                            break;

                        default:
                            cout << "invalid input\n\n";
                    }   
                }
            }
        }
    } 
    if(op3 == 1){
        quant1 = quant;
    }else if(op3 == 2){
        quant2 = quant;
    }    

    return totalAmount;
}

int main(){
    theatre obj;
    int op, bill;

    obj.movies.push_back(make_tuple(1, "mario", 1.36, 4.8)); 
    obj.timingsAUDI1.push_back(make_tuple(1, "0900", "AUDI1", 90, 170));
    obj.timingsAUDI1.push_back(make_tuple(2, "1030", "AUDI2", 100, 200));
    obj.timingsAUDI1.push_back(make_tuple(3, "1430", "AUDI1", 130, 250));
    obj.timingsAUDI1.push_back(make_tuple(4, "2200", "AUDI1", 150, 280));
    obj.quant1.push_back(50); obj.quant1.push_back(35); obj.quant1.push_back(50); obj.quant1.push_back(50);
    obj.quant1.push_back(25); obj.quant1.push_back(15); obj.quant1.push_back(25); obj.quant1.push_back(25);

    obj.movies.push_back(make_tuple(2, "mario 2", 1.16, 3.7)); 
    obj.timingsAUDI2.push_back(make_tuple(1, "0900", "AUDI2", 90, 160));
    obj.timingsAUDI2.push_back(make_tuple(2, "1000", "AUDI3", 100, 200));
    obj.timingsAUDI2.push_back(make_tuple(3, "1530", "AUDI2", 130, 250));
    obj.timingsAUDI2.push_back(make_tuple(4, "1600", "AUDI3", 150, 280));
    obj.quant2.push_back(35); obj.quant2.push_back(90); obj.quant2.push_back(35); obj.quant2.push_back(90);
    obj.quant2.push_back(15); obj.quant2.push_back(30); obj.quant2.push_back(15); obj.quant2.push_back(30);

    do{
        cout << "WELCOME TO THE THEATRE!\n\n";
        cout << "1. book tickets\n2. view movies\n3. exit\n\n";
        cin >> op;
        cout << "\n";
        switch(op){
            case 1:
                bill = bill + obj.bookTickets();
                cout << "updated total is: " << bill << " inr\n\n";
                break;

            case 2:
                obj.viewMovies();
                break;

            case 3:
                break;

            default:
                cout << "invalid input\n";
        }
    }while(op != 3);

    return 0;
}