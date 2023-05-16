#include <iostream>
 
using namespace std;

class Shape {
   public:
      void setWidth(int w) {
         width = w;
      }
      void setHeight(int h) {
         height = h;
      }
      
   protected:
      int width;
      int height;
};

class Paint {
   public:
      void setUnitCost(int c) {
         unitCost = c;
      }
      
   protected:
      int unitCost;
};

class Rectangle: public Shape , public Paint {
   public:
      int getArea() { 
         return (width * height); 
      }

      int getCost(){
         return ((width * height) * unitCost);
      }
};

int main(void) {
   Rectangle Rect;
   int a,b,d;
 
   std::cout << "enter width and height of rectangle \n";
   std::cin >> a;
   std::cin >> b;

   std::cout << "enter cost of paint per unit area \n";
   std::cin >> d;

   Rect.setWidth(a);
   Rect.setHeight(b);
   Rect.setUnitCost(d);

   std::cout << "Total area: " << Rect.getArea() << endl;
   std::cout << "Total cost: " << Rect.getCost() << endl;

   return 0;
}