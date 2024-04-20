#include <iostream>
using namespace std;

class Shape {
public:
    virtual int calculate() = 0;
};

class Circle : public Shape {
private:
    int radius;


public:
    void setRadius(int r) {
        radius = r;
    }

    int calculate()  {
        return 3.14 * radius * radius;
    }
};

class Triangle : public Shape {
private:
    int base;
    int height;

public:
    void setDimensions(int b, int h) {
        base = b;
        height = h;
    }

    int calculate() {
        return 0.5 * base * height;
    }
};

class Rectangle : public Shape {
private:
    int length;
    int width;

public:
    void setDimensions(int l, int w) {
        length = l;
        width = w;
    }

    int calculate()  {
        return length * width;
    }
};

int main() {
    Circle circle;
    circle.setRadius(5); 
    cout << "Area of Circle: " << circle.calculate() << endl;

   Triangle triangle;
    triangle.setDimensions(6, 4);
    cout << "Area of Triangle: " << triangle.calculate() << endl;

    Rectangle rectangle;
    rectangle.setDimensions(7, 3);
    cout << "Area of Rectangle: " << rectangle.calculate() << endl;

    return 0;
}