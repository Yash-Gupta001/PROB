#include <iostream> 
using namespace std;

int main(){
    char c;
    cin >> c;          // Read a single character

    char str[100];     // Define a character array with a fixed size
    cin >> str;        // Read a string into the character array

    cout << str << endl;   // Output the string
    cout << c << endl;     // Output the single character

    return 0;
}
