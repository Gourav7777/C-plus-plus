#include <iostream>
using namespace std;

class Students {
private:
   
    int stu_id;
    char  stu_name[50];
    int stu_age;
    char stu_course[50];
    char stu_city[20];
    char stu_email[30];
    char stu_college[30];
 public:
 void setStudent(){
      
     cout << "Enter Student id : \n";
     cin >> stu_id;
     cout << "Enter Student name : \n";
     cin >> stu_name;
     cout << "Enter Student age : \n";
     cin >> stu_age;
      cout << "Enter Student course : \n";
     cin >> stu_course;
     cout << "Enter Student city : \n";
     cin >> stu_city;
     cout << "Enter Student Email : \n";
     cin >> stu_email;
     cout << "Enter Student College : \n";
     cin >> stu_college;
 }

 void getStudent(){

   cout << "Student Id: " << stu_id << " Name: " << stu_name << " Age: " << stu_age 
        << " Course: " << stu_course << " City: " << stu_city  << " Email: " << stu_email
        << " College: " << stu_college  <<endl;


 }

};


class Customer {
private:
    int cust_id;
   char cust_name[40];
    int cust_age;
    char cust_city[50];
     char cust_mobile_number[40];
    int cust_simcard_validity;
    char cust_telecom_brand_name[40];

public:
    void setCustomer() {
        cout << "Enter Customer ID: ";
        cin >> cust_id;
        cout << "Enter Customer Name: ";
        cin >> cust_name;
      
        cout << "Enter Customer Age: ";
        cin >> cust_age;
        cout << "Enter Customer City: ";
        cin>> cust_city;
        cout << "Enter Customer Mobile Number: ";
        cin >> cust_mobile_number;
        cout << "Enter Simcard Validity (in years): ";
        cin >> cust_simcard_validity;
        cout << "Enter Telecom Brand Name: ";
        cin >> cust_telecom_brand_name;
    }

    void getCustomer() {
        cout << "Customer ID: " << cust_id 
        << " Customer Name: " << cust_name 
       << " Customer Age: " << cust_age 
         << " Customer City: " << cust_city 
        << " Customer Mobile Number: " << cust_mobile_number 
         << " Simcard Validity: " << cust_simcard_validity << " years" 
         << " Telecom Brand Name: " << cust_telecom_brand_name << endl;
    }
};


int main() {
   
    cout << "Question 1=>" << endl;
  
    Students s1,s2 ,s3,s4,s5;
    Customer c1,c2,c3,c4,c5;

    s1.setStudent();
    s2.setStudent();
    s3.setStudent();
    s4.setStudent();
    s5.setStudent();
    
    s1.getStudent();
    s2.getStudent();
    s3.getStudent();
    s4.getStudent();
    s5.getStudent();
    

    cout << endl;
    cout << "Question 2=>" << endl;

     c1.setCustomer();
     c2.setCustomer();
     c3.setCustomer();
     c4.setCustomer();
     c5.setCustomer();
     

     c1.getCustomer();
     c2.getCustomer();
     c3.getCustomer();
     c4.getCustomer();
     c5.getCustomer();
    return 0;
}
