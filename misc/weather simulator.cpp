#include<bits/stdc++.h>
using namespace std;

//current problem: lot of repetitive code. see if this can be made more compact using structures or something

struct weatherConditions{
    public:
        int weather();
        void tyreChoice(float);
        void changeInConditions(float);
        void weatherFinalQ3run(float);

};

void weatherConditions::tyreChoice(float prec){
    if(prec < 1){
        cout << "weather for slicks\n";
    }else if(prec > 4){
        cout << "weather for full wets\n";      //tyre choice based on precipitation
    }else{
        cout << "weather for inters\n";
    }
    cout << prec << endl;
}

void weatherConditions::changeInConditions(float prec){
    for(int i = 0; i < 3; i++){                                 //looping 3 times for Q1, Q2, Q3 weather
        srand((unsigned) time(0));
        int weatherDeltaIndex = i + (rand() % (i+3));           //checking whether conditions will get better or worse


        if(weatherDeltaIndex == 0 and prec != 0){
            cout << "rain will get better\n";
            srand((unsigned) time(0));
            int weatherDelta1 = (-10+i) + (rand() % (-200+i));
            prec = prec + static_cast<float>(weatherDelta1)/100;
        
        }else if(weatherDeltaIndex == 0 and prec == 0){
            cout << "no change in conditions(it cant get any drier)\n";         //if precipitation is zero and we get condition which says rain got better

        }else if(weatherDeltaIndex == 2){
            cout << "no change in conditions\n";
        }else{
            cout << "rain will get worse\n";
            srand((unsigned) time(0));
            int weatherDelta2 = (10+i) + (rand() % (200+i));
            prec = prec + static_cast<float>(weatherDelta2)/100;
        }
        tyreChoice(prec);
        cout << "Q" << i+1 << " weather: " << prec << "\n\n";
    }
}

void weatherConditions::weatherFinalQ3run(float prec){
        srand((unsigned) time(0));
        int weatherDeltaIndex = 6 + (rand() % (3));


            if(weatherDeltaIndex == 6 and prec != 0){
                cout << "rain will get better\n";
                srand((unsigned) time(0));
                int weatherDelta1 = (-5) + (rand() % (-100));
                prec = prec + static_cast<float>(weatherDelta1)/100;
        
            }else if(weatherDeltaIndex == 0 and prec == 0){
                cout << "no change in conditions(it cant get any drier)\n";

            }else if(weatherDeltaIndex == 2){
                cout << "no change in conditions\n";
            }else{
                cout << "rain will get worse\n";
                srand((unsigned) time(0));
                int weatherDelta2 = (5) + (rand() % (100));
                prec = prec + static_cast<float>(weatherDelta2)/100;
            }
            tyreChoice(prec);

            cout << "final run weather: " << prec << endl;

}

int weatherConditions::weather(){
    srand((unsigned) time(0));
    int precipitation1 = 0 + (rand() % 600);    //generate initial precipitation

    float precipitation = static_cast<float>(precipitation1)/100;   //convert it into a float so that the values remians between 0 and 6

    tyreChoice(precipitation);
    changeInConditions(precipitation);
    weatherFinalQ3run(precipitation);
    
    return precipitation;
}

int main(){
    weatherConditions q;
    q.weather();
}