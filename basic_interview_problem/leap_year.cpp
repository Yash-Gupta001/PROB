// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    cout << "enter a year to check it is leap year or not";
    int year;
    cin >> year;
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        cout << "leap year";
    }
    else{
        cout << "not a leap year";
    }
    return 0;
}

// this prog is used to find the leap year