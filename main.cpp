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
    /* Problem 3 - Display uppercase ASCII characters
    for (char c = 'A'; c <= 'Z'; c++) {
        cout << c << " ";
        if ((c - 'A' + 1) % 5 == 0) cout << endl;
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

    /* Problem 5 - Square pattern
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "*";
        }
        cout << endl;
    }*/

    /* Problem 6 - Right-angled triangle pattern
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }*/

    /* Problem 7 - Check if a number is prime
    bool isPrime = true;
    if (N < 2) isPrime = false;
    for (int i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            isPrime = false;
            break;
        }
    }
    cout << "Number is " << (isPrime ? "prime" : "not prime") << endl;*/

    /* Problem 8 - Sum of squares series
    sum = 0;
    for (int i = 1; i <= N; i++) {
        cout << i << "*" << i << "=" << i * i << endl;
        sum += i * i;
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
    }*/

    int N;
    cout << "Enter a number: ";
    cin >> N;

    /* Problem 11 - Count positives, negatives, and compute average
    int num, positive = 0, negative = 0, total = 0, count = 0;
    cout << "Enter numbers (end with 0): ";
    while (cin >> num && num != 0) {
        if (num > 0) positive++;
        else negative++;
        total += num;
        count++;
    }
    cout << "Positives: " << positive << ", Negatives: " << negative << ", Average: " << (count ? total / (double)count : 0) << endl;*/

    /* Problem 12 - Print digits of N in reverse order
    cout << "Reversed digits: ";
    int temp = N;
    while (temp > 0) {
        cout << temp % 10;
        temp /= 10;
    }
    cout << endl;*/

    /* Problem 13 - Number triangle pattern
    if (N == 0) {
        cout << "The depth is 0" << endl;
    } else {
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= i; j++) {
                cout << i;
            }
            cout << endl;
        }
    }*/

    /* Problem 14 - Convert binary to decimal
    int binary, decimal = 0, base = 1;
    cout << "Enter a binary number: ";
    cin >> binary;
    while (binary > 0) {
        int lastDigit = binary % 10;
        decimal += lastDigit * base;
        binary /= 10;
        base *= 2;
    }
    cout << "Decimal number: " << decimal << endl;*/

    return 0;
}
