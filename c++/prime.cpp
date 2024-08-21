#include <iostream>

int main() {
    int n;
    std::cin >> n;

    for (int i = 2; i <= n; i++) {  
        int isPrime = 1;  // Assume i is prime
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {  
                isPrime = 0;  // i is not prime
                break;
            }
        }
        if (isPrime) {
            std::cout << i << " ";  // Print the prime number
        }
    }

    return 0;
}