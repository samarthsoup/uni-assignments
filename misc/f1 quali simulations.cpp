#include<bits/stdc++.h>
using namespace std;

//to add: randomiser for wet weather ability

//tuple elements: float quali time, final quali time, name, lap time lower bound, lap time range, wet weather ability
int rainProbability(){
    srand((unsigned) time(0));
    int rain = 0 + (rand() % 2);
    int flag = 0;

    if(rain == 0){
        cout << "dry conditions"<<endl;
    }else{
        cout << "rainy conditions"<<endl;
        flag = 1;
    }
    return flag;
}
int main(){
    vector<tuple<float, int, string, int, int, int> > driverList;
    driverList.push_back(make_tuple(1, 1, "leclerc", 92456, 254, 12000));
    driverList.push_back(make_tuple(1, 1, "max", 92543, 675, 12000));
    driverList.push_back(make_tuple(1, 1, "sainz", 92478, 343, 12000));
    driverList.push_back(make_tuple(1, 1, "checo", 92612, 719, 12000));
    driverList.push_back(make_tuple(1, 1, "hamilton", 92564, 444, 12000));
    driverList.push_back(make_tuple(1, 1, "alonso", 92675, 802, 12000));
    driverList.push_back(make_tuple(1, 1, "george", 92654, 765, 12000));

    int chanceOfRain = rainProbability();

    if(chanceOfRain == 0){
        for(int i=0; i < driverList.size(); i++){
            srand((unsigned) time(0));
            int driverTime = get<3>(driverList[i]) + (rand() % get<4>(driverList[i]));
            get<1>(driverList[i]) = driverTime;
        }
    }else{
        for(int i=0; i < driverList.size(); i++){
            srand((unsigned) time(0));
            int driverTime = get<3>(driverList[i]) + (rand() % get<4>(driverList[i]));
            driverTime = driverTime + get<5>(driverList[i]);
            get<1>(driverList[i]) = driverTime;
    }
    }

    for(int k=0; k < driverList.size(); k++){
        get<0>(driverList[k]) = static_cast<float>(get<1>(driverList[k]))/1000 ;
    }

    

    sort(driverList.begin(), driverList.end());
    cout<<"final qualifying simulation: \n";
    for (int i = 0; i < driverList.size(); i++) 
        cout << get<2>(driverList[i]) << ": "
             << get<0>(driverList[i]) << endl;

    return 0;
}

