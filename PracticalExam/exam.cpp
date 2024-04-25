#include <iostream>

#include <string.h>
using namespace std;

class Account {

protected:

     int accountNumber;

    char accountHolderName[50];

    int balance;

public:
      void setInfo(   int n, char name[], int bal  ){

            accountNumber = n;

             strcpy(accountHolderName, name);

             balance = bal;

       }

     void getInfo(  ){

           cout << "Account Number:  " << accountNumber << endl;

           cout << "Account Holder Name:  " << accountHolderName << endl;
         

            cout << "Balance :  "   << balance << endl;

       }

};



class Savings : public Account {

   protected:

     int rate = 5;

     int overdraftLimit = 50000;

      
public:
      void getInfo(  ){

           cout << "Account Number:  " << accountNumber << endl;

           cout << "Account Holder Name:  " << accountHolderName << endl;
           cout << "Balance :  "   << balance << endl;

            cout << "Interest Rate : "   << rate <<"%" << endl;

            cout << "Overdraft Limit :  "   << overdraftLimit << endl;


       }


    };



class Current : public Account {

 protected:

     int rate = 10;

     int overdraftLimit = 70000;

public:
  void getInfo(  ){

           cout << "Account Number:  " << accountNumber << endl;

           cout << "Account Holder Name:  " << accountHolderName << endl;
           cout << "Balance :  "   << balance << endl;

            cout << "Interest Rate : "   << rate <<"%" << endl;

            cout << "Overdraft Limit :  "   << overdraftLimit << endl;


       }

};




class Bank  : protected Account {

 protected:

     int rate = 5;

     int overdraftLimit = 50000;

  void getInfo(  ){

           cout << "Account Number:  " << accountNumber << endl;

           cout << "Account Holder Name:  " << accountHolderName << endl;
           cout << "Balance :  "   << balance << endl;

            cout << "Interest Rate :  "   << rate << endl;

            cout << "Overdraft Limit :  "   << overdraftLimit << endl;


       }

};






int main(){


    Savings savingsAccount;
    savingsAccount.setInfo(12345, "John Doe", 1000);
    savingsAccount.getInfo();

    
    Current  currentAccount;
    currentAccount.setInfo(45678, "Harry Wilson", 9000);
    currentAccount.getInfo();




   return 0;

};