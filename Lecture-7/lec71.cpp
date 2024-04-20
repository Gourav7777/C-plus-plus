
#include <iostream>
#include <string.h>
using namespace std;

class Divider
{
public:
    int divide(int numerator, int denominator)
    {

        char *msg = "Division by zero error!";
        if (denominator == 0)
        {
            throw msg;
        }
        return numerator / denominator;
    }
};

class Vote {

  public : 

      int agee (int x){
          
           char *msg = "Can't vote less than 18!";

       if (x<18)
        {
            throw msg;
        }
        return   x;
           

      }
    

};

class PasswordValidator {
public:
    void validate(char password[]) {
        char *msg = "Password must contain at least one uppercase letter!";
        bool hasUpperCase = false;

           for (int i = 0; password[i] != '\0'; i++) {
            if (isupper(password[i])) { 
                hasUpperCase = true;
                break; 
            }
        }

        if (!hasUpperCase) {
            throw msg;
        }
        cout << "Password validated successfully." << endl;
    }
};

int main()
{
    int numerator, denominator;
    Divider divide;
    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;

    try
    {
        int result = divide.divide(numerator, denominator);
        cout << "Result of division: " << result << endl;
    }
    catch (char mg[])
    {
        cout << "Error: " << mg << endl;
    }



    int age;
    Vote vote;
    cout << "Enter Age: ";
    cin >> age;

   try
    {
        int result = vote.agee(age);
        cout << "Person is eligible to vote because age is: " << result << endl;
    }
    catch (char mg[])
    {
        cout << "Error: " << mg << endl;
    }




    char password[20];
    PasswordValidator validator;
    
    cout << "Enter password: ";
    cin >> password;

    try {
        validator.validate(password);
    } catch ( char mg[]) {
        cout << "Error: " << mg << endl;
    }


    return 0;
}