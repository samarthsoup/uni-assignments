#include <bits/stdc++.h>
using namespace std;

bool compareString(string a, string b){
    return a<b;
}

class items{
    list<int>code;
    list<string>name;
    list<int>qty;
    list<float>cost;

    list<int>::iterator itr_code;
    list<string>::iterator itr_name;
    list<int>::iterator itr_qty;
    list<float>::iterator itr_cost;

    public:
        void get_itemlist();
        void display_item();
        void searchlist();
        int getCost();
};

void items::get_itemlist()
{
    int count,code1,qty1;
    string name1;
    float cost1;
    cout<<"\nEnter the number of item Records for Inventory: ";
    cin>>count;
    for(int i=1;i<=count;i++){
        cout<<"\n\nEnter Details of item: "<<i;
        cout<<"\n\nEnter item code: ";
        cin>>code1;
        code.push_back(code1);
        
        cout<<"\nEnter item name: ";
        cin>>name1;
        name.push_back(name1);
        
        cout<<"\nEnter the quantity: ";
        cin>>qty1;
        qty.push_back(qty1);
        
        cout<<"\nEnter cost:";
        cin>>cost1;
        cost.push_back(cost1);
    }
}

void items::display_item(){
    itr_code=code.begin();
    itr_name=name.begin();
    itr_qty=qty.begin();
    itr_cost=cost.begin();
   
    cout<<"\n ---------------------------------------------------";
    cout<<"\n"<<setw(10)<<"| Item Code "<<"| Item Name "<<"| Item Quantity "<<"| Item Cost |";
    cout<<"\n ---------------------------------------------------"<<endl;
    while(itr_code!=code.end())
    {
        cout<<setw(8)<<*itr_code<<setw(12)<<*itr_name<<setw(12)<<*itr_qty<<setw(15)<<*itr_cost<<endl;
        itr_code++;
        itr_name++;
        itr_cost++;
        itr_qty++;
    }
}

void items::searchlist(){
    int key;
    cout<<"Enter the item code to be searched: ";
    cin>>key;
    itr_code=code.begin();
    itr_name=name.begin();
    itr_cost=cost.begin();
    itr_qty=qty.begin();
   
    while(itr_code!=code.end()){
        if(key==*(itr_code)){
            cout<<"\nRequested Item is available!"<<endl;
            cout<<"Item Code: "<<*itr_code<<endl;
            cout<<"Item Name: "<<*itr_name<<endl;
            cout<<"Item Quantity: "<<*itr_qty<<endl;
            cout<<"Item Cost: "<<*itr_cost<<endl;
        }
        itr_code++;
        itr_name++;
        itr_cost++;
        itr_qty++;
    }
    
}         

int items::getCost(){
    int key1;
    float quant;
    float cost2;
    cout << "Choose your item(use code for search): \n";
    cin >> key1;
    cout << "Specify quantity: \n";
    cin >> quant;
    itr_code=code.begin();
    itr_cost=cost.begin();
    itr_qty=qty.begin();

    while(itr_code!=code.end()){
        if(quant > *(itr_qty)){
            cout << "We do not currently have that much stock\n";
            return 0;
        }
        if(key1==*(itr_code)){
            cost2 = *itr_cost * quant;
            *itr_qty = *itr_qty - quant; 
        }
        itr_code++;
        itr_cost++;  
        itr_qty++;
    }
    return cost2;
}   

int main()
{   
    items obj;
    int op;
    float bill;
    cout<<"**************************************************************************"<<endl;
    cout<<"                        Inventory Management System                       "<<endl;
    cout<<"**************************************************************************"<<endl;

    do{
        cout<<"1. Enter Item details\n2. Display Item Information\n3. Search Item Entry\n4. Purchase Item\n5. Exit\n";
        cin>>op;
        switch(op){
            case 1:
                obj.get_itemlist();
                obj.display_item();
                break;
            case 2:
                obj.display_item();
                break;
            case 3:
                obj.searchlist();
                break;
            case 4:
                bill = bill + obj.getCost();
                cout << "Your updated total is: " << bill << "\n";
                break;
            case 5:
                break;
            default:
                cout<<"Wrong choice"<<endl;
        }
    }while(op != 5);

    return 0;
}
   
    
