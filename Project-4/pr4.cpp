#include <iostream>
#include <string.h>
using namespace std;
// class Message {
// private:
//    char message[50];

// public:
    
//     Message(char msg[]) {
//        strcpy(  message, msg);
//     }

    
//     void print() {
//         cout << "Message: " << message ;
//     }

    
//     void print(const std::string& additionalMessage) {
//         std::cout << "Message: " << message << ", Additional Message: " << additionalMessage << std::endl;
//     }
// };

class Distance {
private:
    int km;
    int meter;

public:
   
   void setDis(int km, int m){
      this->km =km;
      this->meter = m;
   }

 
      Distance operator+(Distance d) {
        Distance result;
        result.km = km + d.km;
        result.meter = meter + d.meter;

      
        if (result.meter >= 1000) {
            result.km += result.meter / 1000;
            result.meter %= 1000;
        }

        return result;
    }

    
    void display() {
       
        cout << "Km: " << km << ", Meter: " << meter << "\n" ;
    }
};

int main() {
    

     Distance d1;
    Distance d2;

    d1.setDis(3, 1020);
    d2.setDis(2, 2050);

  
    Distance sum = d1 + d2;
  

    cout << "Output: \n" ;
    sum.display();
    return 0;
}