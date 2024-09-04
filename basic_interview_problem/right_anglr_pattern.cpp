#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        cout << " ";
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}



// #include <iostream>
// using namespace std;

// int main() {
//     // Modify the number of rows as needed
//     int rows = 5;
//     char ch = 'A';  // Starting character
    
//     for(int i = 1; i <= rows; i++) {
//         cout << " ";  // Add space before each row if needed
//         for(int j = 1; j <= i; j++) {
//             cout << ch;  // Print the current alphabet
//             ch++;  // Move to the next alphabet
//         }
//         cout << endl;
//     }

//     return 0;
// }



// #include <iostream>
// using namespace std;

// class Pattern {
// public:
//     void logic() {
//         int rows;  
//         cout << "Enter the number of rows to print: ";
//         cin >> rows;
//         char ch = 'A';

//         for (int i = 0; i < rows; i++) {  
//             // ch = 'A';  
//             // ch = ch + i; 
//             for (int j = 0; j <= i; j++) {  
//                 cout << ch;
//                 ch++;
//             }
//             cout << endl;  
//         }
//     }
// };

// int main() {
//     Pattern p;
//     p.logic();  
//     return 0;
// }

