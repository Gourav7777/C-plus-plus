#include <iostream>

using namespace std;

int main() {
    int size;
    cout << "Question 1 =>\n";
    
    
    int arr[5] = {4,6,7,8,3};
    
    cout << "given array elements:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << ' ';
        
    }
    cout << endl;
    cout << "Even elements of an Array: ";
    
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
           cout << arr[i] << ' ';
        }
    }
    cout << endl;
    cout << "Question 2 =>\n";

    int start = 2020, end = 2040; 
     cout << "Leap Year between 2020 and 2040: \n";
    
    for (int i = 2020; i < 2040; i++) {
        if (i  % 4 == 0) {
           cout << i << ' ';
        }
    }
    return 0;
}