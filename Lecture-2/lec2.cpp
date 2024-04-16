#include <iostream>
using namespace std;

class Employee {
public:
    int emp_id;
    char emp_name[50];
    int emp_age;
    char emp_role[50];
    double emp_salary;
    char emp_city[50];
    int emp_experience;
    char emp_company_name[50];
};

class Car {
public:
    int car_id;
    char car_company_name[50];
    char car_color[20];
    char car_model[50];
    int car_release_year;
};

int main() {
    Employee emp[5];
    Car cars[5];
    cout << "Question 1=>" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Enter details for Employee " << i + 1 << ":" << endl;
        cout << "ID: ";
        cin >> emp[i].emp_id;
        cout << "Name: ";
        cin >> emp[i].emp_name;
        cout << "Age: ";
        cin >> emp[i].emp_age;
        cout << "Role: ";
        cin >> emp[i].emp_role;
        cout << "Salary: ";
        cin >> emp[i].emp_salary;
        cout << "City: ";
        cin >> emp[i].emp_city;
        cout << "Experience: ";
        cin >> emp[i].emp_experience;
        cout << "Company: ";
        cin >> emp[i].emp_company_name;
        cout << endl;
    }

    cout << "Employee Records:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Employee " << i + 1 << " ID: " << emp[i].emp_id << ", Name: " << emp[i].emp_name << ", Age: " << emp[i].emp_age  << " City: "  << emp[i].emp_city  << endl;
    }

    cout << endl;
    cout << "Question 2=>" << endl;

    

    for (int i = 0; i < 5; ++i) {
        cout << "Enter details for Car " << i + 1 << ":" << endl;
        cout << "ID: ";
        cin >> cars[i].car_id;
        cout << "Company Name: ";
        cin >> cars[i].car_company_name;
        cout << "Color: ";
        cin >> cars[i].car_color;
        cout << "Model: ";
        cin >> cars[i].car_model;
        cout << "Release Year: ";
        cin >> cars[i].car_release_year;
        cout << endl;
    }

    cout << "Car Records:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Car " << i + 1 << " ID: " << cars[i].car_id << ", Company Name: " << cars[i].car_company_name
             << ", Color: " << cars[i].car_color << ", Model: " << cars[i].car_model << ", Release Year: " << cars[i].car_release_year << endl;
    }

    return 0;
}
