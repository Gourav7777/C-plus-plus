#include <iostream>
using namespace std;

// Base class
class RBI {
protected:
    float rate;
public:
    void getROI() {
        cout << "Rate of Interest: " << rate << "%" << endl;
    }
};


class SBI : public RBI {
public:
   void setSBI() {
        rate = 5.0;
    }
   
};


class BOB : public RBI {
public:
   void setBOB() {
        rate = 5.5;
    }
    
};


class ICICI : public RBI {
public:
   void setICICI() {
        rate = 6.0;
    }
   
    
};

int main() {
  
    SBI sbi;
    BOB bob;
    ICICI icici;

    sbi.setSBI();
    bob.setBOB();
    icici.setICICI();
    cout << "SBI Interest Rate:" << endl;
    sbi.getROI();

    cout << "\nBOB Interest Rate:" << endl;
    bob.getROI();

    cout << "\nICICI Interest Rate:" << endl;
    icici.getROI();

    return 0;
}