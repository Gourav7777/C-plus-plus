#include <iostream>
#include <string.h>
using namespace std;

class Hotel {
private:
    int hotel_id;
    char hotel_name[50];
    char hotel_type[20];
    char hotel_rating[10];
    char hotel_location[50];
    int hotel_establish_year;
    int hotel_staff_quantity;
    int hotel_room_quantity;

public:
    
    void setHotel(int id,  char name[], char type[],  char rating[],  char location[], int establishYear, int staffQuantity, int roomQuantity) {
        hotel_id = id;
        strcpy(hotel_name, name);
        strcpy(hotel_type, type);
        strcpy(hotel_rating, rating);
        strcpy(hotel_location, location);
        hotel_establish_year = establishYear;
        hotel_staff_quantity = staffQuantity;
        hotel_room_quantity = roomQuantity;
    }

    void getHotel() {
        cout << "ID: " << hotel_id << endl;
        cout << " Name: " << hotel_name << endl;
        cout << " Type: " << hotel_type << endl;
        cout << " Rating: " << hotel_rating << endl;
        cout << " Location: " << hotel_location << endl;
        cout << " Establish Year: " << hotel_establish_year << endl;
        cout << " Staff Quantity: " << hotel_staff_quantity << endl;
        cout << " Room Quantity: " << hotel_room_quantity << endl;
        cout << endl;
    }
};


int main(){

   int N;
    cout << "Enter the number of hotels: ";
    cin >> N;

   if(N>0){
    Hotel *hotels = new Hotel[N];
 
   
  

   for (int i = 0; i < N; ++i) {
        cout << "Enter details for Hotel " << i + 1 << ":" << endl;
        int id, establishYear, staffQuantity, roomQuantity;
        char name[50], type[20], rating[10], location[50];

        cout << "ID: ";
        cin >> id;

        cout << "Name: ";
        cin >> name;
       

        cout << "Type: ";
         cin >> type;

        cout << "Rating: ";
        cin >> rating;

        cout << "Location: ";
        cin >> location;   
     
        cout << "Establish Year: ";
        cin >> establishYear;

        cout << "Staff Quantity: ";
        cin >> staffQuantity;

        cout << "Room Quantity: ";
        cin >> roomQuantity;

        hotels[i].setHotel(id, name, type, rating, location, establishYear, staffQuantity, roomQuantity);
        cout << endl;
    }

   cout << "Details of the entered hotels:" << endl;
        for (int i = 0; i < N; ++i) {
            cout << "Hotel " << i + 1 << ":" << endl;
            hotels[i].getHotel();
        }

         delete[] hotels;
   }

    return 0;
}