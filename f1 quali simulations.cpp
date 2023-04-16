#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<tuple<int, string, int, int> > driverList;
    driverList.push_back(make_tuple(1, "leclerc", 90, 3));
    driverList.push_back(make_tuple(1, "max", 91, 4));
    driverList.push_back(make_tuple(1, "sainz", 90, 4));
    driverList.push_back(make_tuple(1, "checo", 92, 2));

    for(int i=0; i < driverList.size(); i++){
        srand((unsigned) time(0));
        int driverTime = get<2>(driverList[i]) + (rand() % get<3>(driverList[i]));
        get<0>(driverList[i]) = driverTime;
    }

    sort(driverList.begin(), driverList.end());
    cout<<"final qualifying simulation: \n";
    for (int i = 0; i < driverList.size(); i++) 
        cout << get<1>(driverList[i]) << ": "
             << get<0>(driverList[i]) << endl;

    return 0;
}

