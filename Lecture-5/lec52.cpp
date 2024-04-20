#include <iostream>
using namespace std;

class Greater {

   private:
    int a;


   public:

    void setValue(int num1){
         this-> a = num1;
         
    }
   
        int getValue() {
        return a;
    }

     bool operator<( Greater n) {
        return this->a < n.a;
    }
};





int main() {
   

   Greater obj1 , obj2;

    obj1.setValue(6);
     
     obj1.getValue();


      obj2.setValue(7);
     
     obj2.getValue();

        cout << "Value of num1: " << obj1.getValue() << endl;
    cout << "Value of num2: " << obj2.getValue() << endl;
       
    if (obj1< obj2) {
        cout << "num2 contains a higher value: " << obj2.getValue() << endl;
    } else {
        cout << "num1 contains a higher value: " << obj1.getValue() << endl;
    }
    return 0;
}
