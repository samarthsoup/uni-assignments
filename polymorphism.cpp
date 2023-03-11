#include <iostream> 
using namespace std;
 
class Shape {
   protected:
      int width, height;
      
   public:
      Shape( int a = 0, int b = 0){
         width = a;
         height = b;
      }
      int area() {
         cout << "Parent class area :" << width * height << endl;
         return width * height;
      }
};
class Rectangle: public Shape {
   public:
      Rectangle( int a = 0, int b = 0):Shape(a, b) { }
      
      int area () { 
         cout << "Rectangle class area :" << width * height << endl;
         return (width * height); 
      }
};

class Triangle: public Shape {
   public:
      Triangle( int a = 0, int b = 0):Shape(a, b) { }
      
      int area () { 
         cout << "Triangle class area :" << (width * height)/2 << endl;
         return (width * height / 2); 
      }
};

int main() {
   int recWidthInput,recHeightInput,triWidthInput,triHeightInput;
   Shape *shape;
   Rectangle rec(recWidthInput,recHeightInput);
   Triangle  tri(triWidthInput,triHeightInput);

   cout << "input values for rectangle width and height\n";
   cin >> recWidthInput;
   cin >> recHeightInput;

   cout << "input values for triangle width and height\n";
   cin >> triWidthInput;
   cin >> triHeightInput;

   shape = &rec;

   shape->area();

   shape = &tri;

   shape->area();
   
   return 0;
}