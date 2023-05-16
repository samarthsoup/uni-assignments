#include <iostream>
using namespace std;
 
class printData {
   public:
      void print(int i) {
        cout << "Printing int: " << i << endl;
      }
      void print(double  f) {
        cout << "Printing float: " << f << endl;
      }
      void print(char* c) {
        cout << "Printing character: " << c << endl;
      }
};

int main(void) {
   printData pd;
   int a;
   double b;
   char ch;

   std::cout << "enter an integer, a float, and a character\n";
   std::cin >> a;
   std::cin >> b;
   std::cin >> &ch;

   pd.print(a);

   pd.print(b);
 
   pd.print(&ch);
 
   return 0;
}