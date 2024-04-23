
#include <iostream>
#include <string.h>
using namespace std;



class Vote {

  public : 

      int agee (int x){
          
        //    char *msg = "Can't vote less than 18!";

       if (x<18)
        {
            throw 0;
        }
        return   x;
           

      }
    

};

class ExceptionHandler {
public:
    void divide(int numerator, int denominator) {
        try {
            if (denominator == 0) {
                throw "Division by zero is not allowed.";
            }
            int result = numerator / denominator;
            cout << "Result of division: " << result << endl;
        } catch (...) {
            cout << "Exception occurred: Unable to perform division." << endl;
        }
    }
};


int main()
{
   
   cout <<"Question 1:  \n";
    ExceptionHandler handler;
    
     
    
    handler.divide(10, 2);
    
   
    handler.divide(5, 0);
    
    
    handler.divide(10, 5.2);

cout <<"Question 2:  \n";
    int age;
    Vote vote;
    cout << "Enter Age: ";
    cin >> age;

   try
    {
        int result = vote.agee(age);
        cout << "Person is eligible to vote because age is: " << result << endl;
    }
    catch (int x)
    {
        cout << "Error: Can't vote less than 18! " << endl;
    }


   


    
    return 0;
}