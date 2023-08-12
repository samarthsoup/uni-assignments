#include <iostream>
#include <string>
using namespace std;

//There are 100 questions in a paper. Each question carries +3 marks for correct answer,
//1 marks for incorrect answer i.e. one mark is deducted for each incorrect answer, 0 marks for an unattempted question.
//It is given that Chef received exactly X marks where X is bounded between 0 and 100
//Determine the minimum number of problems Chef marked incorrect.
int main() 
{
    int X;
    cout << "enter marks obtained: "<<endl;
    cin>>X;
    if (X%3 == 0){
    cout<<0<<endl;
    }
    else if ((X+1)%3 == 0){
    cout<<1<<endl;
    }
    else{
    cout<<2<<endl;
    }
    
return 0;
}
