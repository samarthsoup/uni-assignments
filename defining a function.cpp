#include <iostream>

using namespace std;

int max(int num1, int num2);

int main(){
    int a,b,result0;
    std::cout << "input two numbers \n";
    std::cin >> a;
    std::cin >> b;
    result0=max(a,b);
    std::cout << "larger number is " << result0 << endl;

    return 0;
}


int max(int num1, int num2) {
   // local variable declaration
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}