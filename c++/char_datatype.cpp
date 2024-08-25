#include <iostream> 
using namespace std;

int main(){
    char c;
    cin >> c;          // Read a single character

    char str[100];     // Define a character array with a fixed size
    cin >> str;        // Read a string into the character array

    cout << str << endl;   // Output the string
    cout << c << endl;     // Output the single character

    // Different ways to initialize a string
    string str1 = "Hello, World!";
    string str2("Hello, C++!");
    string str3;
    str3 = "String example";

    // Outputting the strings
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    
    return 0;
}
