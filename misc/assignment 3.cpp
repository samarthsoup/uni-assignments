#include <iostream>
#include <string.h>

using namespace std;

class shape {
    public:
        virtual void area() = 0;
};

class rectangle : public shape {

    private:
        int l, b;
    public:
        void area() {
            cout << "Enter length: ";
            cin >> l;
            cout << "Enter breadth: ";
            cin >> b;

            cout << "The area of the rectangle is " << l * b << endl << endl;
        }
   
};



class triangle : public shape {

    private:
        int b, h;
   
    public:
        void area() {

            cout << "Enter base: ";
            cin >> b;
            cout << "Enter height: ";
            cin >> h;

            cout << "The area of this triangle is " << 0.5 * b * h << endl << endl;
        }
};

class circle : public shape {

    private:
        int r;
   
    public:
        void area() {
            cout << "Enter radius: ";
            cin >> r;
            cout << "The area of this circle is " << 3.14 * r * r << endl << endl;
        }
};



int main() {

    shape *base;

    rectangle rectObj;
    triangle triObj;
    circle cirObj;

    char ch;

    cout << "Select shape: " << endl;
    cout << "1 | Rectangle" << endl;
    cout << "2 | Triangle" << endl;
    cout << "3 | Circle" << endl;

    cin >> ch;

    switch (ch) {
        case '1':
            base = &rectObj;
            base->area();
            break;
       
        case '2':
            base = &triObj;
            base->area();
            break;
        case '3':
            base = &cirObj;
            base->area();
            break;
    }

    return 0;
}