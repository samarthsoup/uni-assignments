#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  char op;
  float num1, num2, powerResult=1;

  cout << "type:\n1 to add\n2 to subtract\n3 to multiply\n4 to divide\n5 for power\n6 for logarithm\n7 for sinx\n8 for cosx\n9 for tanx\n";
  cout << "for sinx, cosx, tanx, only the first input will be considered\n";
  cin >> op;

  cout << "Enter two operands: \n";
  cin >> num1 >> num2;

  for(int i=0;i<num2;i++){
    powerResult=powerResult * num1;
  }

  switch(op) {

    case '1':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;

    case '2':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;

    case '3':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;

    case '4':
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;

    case '5':
        cout << num1 << " ^ " << num2 << " = " << powerResult;
        break;

    case '6':
        cout << "log base_" << num2 << " " << num1 << " = " << log(num1)/log(num2);
        break;

    case '7':
        cout << "sin" << num1 << " = " << sin(num1);
        break;

    case '8':
        cout << "cos" << num1 << " = " << cos(num1);
        break;

    case '9':
        cout << "tan" << num1 << " = " << tan(num1);
        break;

    default:
        cout << "operator is not correct";
        break;
  }

  return 0;
}
