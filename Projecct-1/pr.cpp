#include <iostream>
using namespace std;

class Distance {
public:
   
    int feet;
    int inch;

};



int main() {
   
    cout << "Question 1=>" << endl;
   Distance d1, d2, totalDistance;

    
    cout << "Enter distance 1 in feet: ";
    cin >> d1.feet;
    cout << "Enter distance 1 in inches: ";
    cin >> d1.inch;

   
    cout << "Enter distance 2 in feet: ";
    cin >> d2.feet;
    cout << "Enter distance 2 in inches: ";
    cin >> d2.inch;

    
    totalDistance.feet = d1.feet + d2.feet;
    totalDistance.inch = d1.inch + d2.inch;

    if (totalDistance.inch >= 12) {
        totalDistance.feet += totalDistance.inch / 12;
        totalDistance.inch %= 12;
    }

   
    cout << "Total distance: " << totalDistance.feet << " feet " << totalDistance.inch << " inches" << endl;
   
    cout << endl;
    cout << "Question 2=>" << endl;

     int totalSeconds;

    
    cout << "Enter seconds: ";
    cin >> totalSeconds;

  
    int hours = totalSeconds / 3600;
    int remainingSeconds = totalSeconds % 3600;
    int minutes = remainingSeconds / 60;
    int seconds = remainingSeconds % 60;

  
    cout << "Output: " << hours << ":" << minutes << ":" << seconds << endl;
   
    return 0;
}
