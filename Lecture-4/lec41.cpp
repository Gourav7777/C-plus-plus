#include <iostream>

using namespace std;

class X
{
    protected:
      int a;
      int b;
      int c;
};


class Y : public X
{
  public:

    void setData(int num1, int num2, int num3){
        a = num1;
        b= num2;
        c = num3;
     }

     int  getData(){
         return (a*a*a) + (b*b*b) + (c*c*c);
     }
};


class P {
protected:
    float temperature;
public:
    void setTemp(float temp) {
        temperature = temp;
    }
};

class Q : public P {
public:
    float toFahrenheit() {
        return (temperature * 9 / 5) + 32;
    }
};

class R : public Q {
public:
    float toKelvin() {
        return temperature + 273.15;
    }
};
int main() {
    int size;
    cout << "Question 1 =>\n";
    
    
     Y obj;
    int x, y, z;

   
    cout << "Enter three numbers: \n";
    cin >> x >> y >> z;

   
    obj.setData(x, y, z);

    
    cout << "Sum of cubes of the three numbers: " << obj.getData() << endl;
    
   
    cout << endl;
    cout << "Question 2 =>\n";
     
      float temp;
    cout << "Enter Temperature: \n";
    cin >> temp;

    R objR;
    objR.setTemp(temp);

    cout << "Temperature in Fahrenheit: " << objR.toFahrenheit() << endl;
    cout << "Temperature in Kelvin: " << objR.toKelvin() << endl;
        
    return 0;
}