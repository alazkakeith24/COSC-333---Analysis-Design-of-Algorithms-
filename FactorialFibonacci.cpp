//Program that uses recursion to compute both Factorial and Fibonacci sequence

#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)   // base case
        return 1;
    else
        return n * factorial(n - 1);  // recursive call
}

// Recursive function to calculate Fibonacci
int fibonacci(int n) {
    if (n == 0)   // base case
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);  // recursive call
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    // Factorial output
    cout << "Factorial of " << num << " = " << factorial(num) << endl;

    // Fibonacci output (sequence up to n terms)
    cout << "Fibonacci sequence up to " << num << " terms: ";
    for (int i = 0; i < num; i++) {
        cout << fibonacci(i) << " ";
    }

    return 0;
}