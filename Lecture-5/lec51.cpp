#include <iostream>
using namespace std;

class Calculator {
public:
    float calculate(int a, int b) {
        return a / b;
    }

    int calculate(int a, int b, int c) {
        return a - b - c;
    }

    int calculate(int a, int b, int c, int d) {
        return a * b * c * d;
    }

    int calculate(int a, int b, int c, int d, int e) {
        return a + b + c + d + e;
    }
};


class Cricket {
public:
    int getTotalOvers() {
        return 50; 
    }
};

class T20Match : public Cricket {
public:
    int getTotalOvers(){
        return 20; 
    }
};


class TestMatch : public Cricket {
public:
    int getTotalOvers() {
        return 90;
    }
};
int main() {
    Calculator calc;

   
    cout << "Addition: " << calc.calculate(10, 20, 30, 40, 50) << endl;

    
    cout << "Subtraction: " << calc.calculate(100, 50, 20) << endl;

   
    cout << "Multiplication: " << calc.calculate(2, 3, 4, 5) << endl;

  
    cout << "Division: " << calc.calculate(100.0f, 2.0f) << endl;


   cout << "Question 2" << endl;

    T20Match t20 ;
    TestMatch test;
   cout <<  t20.getTotalOvers() << endl;
    cout << test.getTotalOvers() << endl;

    return 0;
}
