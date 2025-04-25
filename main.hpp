#ifndef Q1_HPP
#define Q1_HPP

#include <iostream>
#include <cmath>
using namespace std;

// Function Declarations
void getTwoValues(int& a, int& b);
int getNextPrime(int n);
int getPrevPrime(int n);
bool isPrime(int n);

// Function Definitions

void getTwoValues(int& a, int& b) {
    cout << "Enter two integers (begin and end): ";
    cin >> a >> b;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    int limit = sqrt(n);
    for (int i = 2; i <= limit; ++i)
        if (n % i == 0)
            return false;
    return true;
}

int getNextPrime(int n) {
    for (int i = n + 1; ; ++i)
        if (isPrime(i))
            return i;
}

int getPrevPrime(int n) {
    for (int i = n - 1; i > 1; --i)
        if (isPrime(i))
            return i;
    return -1; // No previous prime found
}

#endif
