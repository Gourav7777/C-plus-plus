#include <iostream>
#include <string.h>
using namespace std;

class DiamondCompany {
private:
    int comp_id;
    char comp_name[50];
    int comp_staff_quantity;
    double comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    char comp_ceo[50];

public:
   
    DiamondCompany(int id,  char name[], int staffQuantity, int revenue, int importRawDiamonds, int exportDiamonds,  char ceo[]) {
        comp_id = id;
        strcpy(comp_name, name);
        comp_staff_quantity = staffQuantity;
        comp_revenue = revenue;
        comp_import_raw_diamonds = importRawDiamonds;
        comp_export_diamonds = exportDiamonds;
        strcpy(comp_ceo, ceo);

       cout << "Company ID: " << comp_id 
       << " Company Name: " << comp_name 
         << " Staff Quantity: " << comp_staff_quantity 
        << " Annual Revenue: $" << comp_revenue
         << " Imported Raw Diamonds per Year: " << comp_import_raw_diamonds 
         << " Exported Diamonds per Year: " << comp_export_diamonds 
        << " CEO: " << comp_ceo << endl;
    }

    
    
};

class FastFoodCafe {
private:
    int cafe_id;
    char cafe_name[100];
    char cafe_type[50];
    int cafe_rating;
    char cafe_location[100];
    int cafe_establish_year;
    int cafe_staff_quantity;

public:
    FastFoodCafe() {
        
        cout << "Enter cafe ID: ";
         cin >> cafe_id;

         cout << "Enter cafe name: ";
          cin >> cafe_name;

         cout << "Enter cafe type (rooftop/normal): ";
          cin >> cafe_type;
         cout << "Enter cafe rating (1 Star, 2 Star, ..., 5 Star): ";
          cin >> cafe_rating;
         cout << "Enter cafe location (city name): ";
        cin >> cafe_location;
         cout << "Enter cafe establish year: ";
      cin >> cafe_establish_year;
          cout << "Enter cafe staff quantity: ";
        cin >> cafe_staff_quantity;
    }

    void display_cafe_details() {
       cout << "\nCafe ID: " << cafe_id 
         << " Cafe Name: " << cafe_name 
        << " Cafe Type: " << cafe_type 
         <<  " Cafe Rating: " << cafe_rating 
       << " Cafe Location: " << cafe_location 
        << " Cafe Establish Year: " << cafe_establish_year
       << " Cafe Staff Quantity: " << cafe_staff_quantity << endl;
    }
};

int main() {
    cout << "Question 1 =>\n";
    int N;
    cout << "Enter the number of diamond companies: ";
    cin >> N;

    if (N > 0) {
        for (int i = 0; i < N; ++i) {
            cout << "Enter details for Diamond Company " << i + 1 << ":" << endl;
            int id, staffQuantity, importRawDiamonds, exportDiamonds;
            int revenue;
            char name[50], ceo[50];

            cout << "Company ID: ";
            cin >> id;

            cout << "Company Name: ";
            cin >> name;

            cout << "Staff Quantity: ";
            cin >> staffQuantity;

            cout << "Annual Revenue: $";
            cin >> revenue;

            cout << "Imported Raw Diamonds per Year: ";
            cin >> importRawDiamonds;

            cout << "Exported Diamonds per Year: ";
            cin >> exportDiamonds;

            cout << "CEO: ";
            cin >> ceo;

            
            DiamondCompany company(id, name, staffQuantity, revenue, importRawDiamonds, exportDiamonds, ceo);
           
        }
    } else {
        cout << "Invalid number of companies. Please enter a positive integer." << endl;
    }

    cout << endl;
    cout << "Question 2 => \n";
  
    int z;
    cout << "Enter the number of Fast Food Cafe: ";
    cin >> z;

    FastFoodCafe *cafes = new FastFoodCafe[z];

    
  
   

    for(int i = 0; i < z; i++) {
        cafes[i].display_cafe_details();
    }

    
    delete[] cafes;

    return 0;
}
