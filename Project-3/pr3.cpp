
#include <iostream>
#include <string.h>
using namespace std;

class Shape {
protected:
    int width;
    int height;

public:
    Shape(int w, int h) {
        this->width = w;
        this->height = h;
    }

  
};

class Triangle : public Shape {
public:
   
    Triangle(int w, int h) : Shape(w, h) {}

  
    int area() {
        return width * height / 2;
    }
};

class Rectangle : public Shape {
public:
    
    Rectangle(int w, int h) : Shape(w, h) {}

    
    int area()  {
        return width * height;
    }
};


class Number {
protected:
    int num;

public:
    void setNum(int x){
        num=x;
    };

    int getNum(){
        return num;
    }
};

class Square : public Number {
public:
    int calculateSquare() {
        return (num * num); // Access num directly from the Number class
    }
};

class Cube : public Number {
public:
   

    int calculateCube() {
        return num * num * num;
    }
}; 



int main()
{
   
cout <<"Question 1:  \n";

     Triangle tri(6, 8); // Provide dimensions for Triangle
    cout << "Area of the Triangle: " << tri.area() << endl;
    Rectangle rect (6,4);
    cout << "Area of the Rectangle: " << rect.area() << endl;

   
    
cout <<"Question 2:  \n";
    


  
  Square square;
   square.setNum(7);
    cout << "Square of " << square.getNum() << " is: "<< square.calculateSquare() << endl;
  
  Cube cube;

   cube.setNum(5);
   cout << "Cube of " << cube.getNum() << " is: "<< cube.calculateCube() << endl;
    
    return 0;
}