#include <iostream>
#include <string.h>
using namespace std;

class Train {
private:
   
    int trainNumber;
    char trainName[50];
    char source[60];
    char destination[70];
    char trainTime[30];
public:
  
   void setTrain(int number, char name[], char src[], char dest[], char time[]) {
        trainNumber = number;
        strcpy(trainName, name);
        strcpy(source, src);
        strcpy(destination, dest);
        strcpy(trainTime, time);
    }

    
    void display() {
        cout << "Train Number: " << trainNumber << endl;
        cout << "Train Name: " << trainName << endl;
        cout << "Source: " << source << endl;
        cout << "Destination: " << destination << endl;
        cout << "Train Time: " << trainTime << endl;
        cout << endl;
    }
     int getTrainNumber(){
        return trainNumber;
    }
};


class Item {
private:
    int itemNumber;
    char itemName[50];
    int quantity;
     int price;
    int discount;
public:
    void setItem(int number, char name[], int qty, int pr, int disc) {
        itemNumber = number;
        strcpy(itemName, name);
        quantity = qty;
        price = pr;
        discount = disc;
    }

    void display() {
        cout << "Item Number: " << itemNumber 
       << " Item Name: " << itemName 
         << " Quantity: " << quantity 
         << " Price: $" << price 
        << " Discount: " << discount << "%" << endl;
      
    }

    int getItemNumber() {
        return itemNumber;
    }

};

int main() {
   
    cout << "Question 1=>" << endl;
  
   int N;

   cout << "Enter Train number: \n";
   cin>> N;

  Train *trains =  new Train[N];


   for(int i = 0; i < N; i++) {
        int number;
        char name[50], src[60], dest[70], time[30];

        cout << "Enter Train " << i + 1 << " details:" << endl;

        cout << "Train number: ";
        cin >> number;

        cout << "Train name: ";
        cin >> name;

        cout << "Source: ";
        cin >> src;
        cout << "Destination: ";
        cin >> dest;

        cout << "Train time: ";
        cin >> time;
  
        trains[i].setTrain(number, name, src, dest, time);
        cout << endl;
    }

    for(int i = 0; i < N; i++) {
        cout << "Train " << i + 1 << " details:" << endl;
        trains[i].display();
    }

   
    cout << endl;

   cout << "Enter Train Number to Find specific Train Details: \n";
   int searchNumber ;
   cin >> searchNumber ;

   for(int i = 0; i < N; i++) {

    if(trains[i].getTrainNumber() == searchNumber) {
        cout << "Train " << i + 1 << " details:" << endl;
        trains[i].display();
        break; 
    }

   
    }
    cout << "Question 2=>" << endl;

     
   
  
    int userId;
    char userPass [20];
    
     cout << "Enter UserId:";
     cin >> userId;
     cout << "Enter Password:";
     cin >> userPass;
  
   int x;
     cout << "Enter the number of items: ";
    cin >> x;
    Item * items = new Item[x];
  for (int i = 0; i < x; i++) {
        int number;
        char name[50];
        int qty, pr, disc;

        cout << "Enter Item " << i + 1 << " details:" << endl;

        cout << "Item number: ";
        cin >> number;

        cout << "Item name: ";
        cin >> name;

        cout << "Item Quantity: ";
        cin >> qty;

        cout << "Item Price: ";
        cin >> pr;

        cout << "Item Discount: ";
        cin >> disc;

        items[i].setItem(number, name, qty, pr, disc);
        cout << endl;
    }
     
     int confirmId;
     char confirmPass[20];

     cout << "You need to enter UserId and Password to show all items: \n";
     cout << "Enter Your Id:";
     cin >> confirmId;

     cout << "Enter Your Password:";
     cin >> confirmPass;

       if(confirmId == userId &&  strcmp(confirmPass, userPass) == 0){

   for(int i = 0; i < x; i++) {
        cout << "Item " << i + 1 << " details:" << endl;
        items[i].display();
    }
       }

       else{
          cout << "Invalid Credentials cannot move forward";
       }
    return 0;
}
