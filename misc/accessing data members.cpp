#include <iostream>

using namespace std;

class Box {
   public:
      double length;   
      double breadth;  
      double height;   
};

int main() {
   Box Box1;        
   Box Box2;        
   double volume = 0.0;     
 
   
   std::cout << "input length breadth height for first box \n";
   std::cin >> Box1.length;
   std::cin >> Box1.breadth;
   std::cin >> Box1.height;

   std::cout << "input length breadth height for first box \n";
   std::cin >> Box2.length;
   std::cin >> Box2.breadth;
   std::cin >> Box2.height;
   
   
   volume = Box1.height * Box1.length * Box1.breadth;
   cout << "Volume of Box1 : " << volume <<endl;

  
   volume = Box2.height * Box2.length * Box2.breadth;
   cout << "Volume of Box2 : " << volume <<endl;
   return 0;
}