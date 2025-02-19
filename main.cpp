#include <iostream>
using namespace std;

int main() {
    /* Problem 1.1: Print first 10 natural numbers
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;
/*
    /* Problem 1.2: Print first N natural numbers
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cout << i << " ";
    }
    cout << endl;*/

    /* Problem 1.3: Sum of first 10 natural numbers
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    cout << sum << endl;*/

    /* Problem 1.4: Sum of first N natural numbers
    sum = 0;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        sum += i;
    }
    cout << sum << endl;*/

    /* Problem 1.5: Average of first 10 natural numbers
    sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    cout << (sum / 10.0) << endl;*/

    /* Problem 1.6: Average of first N natural numbers
    sum = 0;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        sum += i;
    }
    cout << (sum / (double)N) << endl;*/

    /* Problem 2.1: Print odd numbers among first 10 natural numbers
    for (int i = 1; i <= 10; i += 2) {
        cout << i << " ";
    }
    cout << endl;*/

    /* Problem 2.2: Print even numbers among first 10 natural numbers
    for (int i = 2; i <= 10; i += 2) {
        cout << i << " ";
    }
    cout << endl;*/

    /* Problem 4: Factorial Calculation
    cin >> N;
    if (N < 0) {
        cout << "Factorial of a negative number is not defined." << endl;
    } else {
        long long factorial = 1;
        for (int i = 1; i <= N; i++) {
            factorial *= i;
        }
        cout << "Factorial of " << N << " is " << factorial << endl;
    }*/

    /* Problem 9: Check if a number is prime
    cin >> N;
    bool isPrime = true;
    for (int i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            isPrime = false;
            break;
        }
    }
    cout << (isPrime ? "Number is prime" : "Number is not prime") << endl;*/

    /* Problem 10: Sum of squares series
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cout << i << "*" << i << "=" << i * i << endl;
    }

    return 0;
} /*
