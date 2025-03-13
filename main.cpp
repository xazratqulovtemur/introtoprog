#include <iostream>
#include<cmath>
using namespace std;
int factorial(int n) {
    if (n==0)
        return 1;

    return n*factorial(n-1);
}
int mult(int a, int b) {
    b-=1;
    if (b==0)
        return a;
    return a+mult(a,b);
}
int fib(int n) {
    if (n==0)
        return 0;
    else if (n==1)
        return 1;
    return fib(n-1)+fib(n-2);
}
int sumofNnumbers(int n) {

    if (n==0)
        return 0;

    return n+sumofNnumbers(n-1);
}
void show(int n) {

    if (n<1)
        return ;
    cout<<n<<" ";
    show(n-1);
}
int count(int n) {
    int integers=0;

    while (n>0) {
        n/=10;
        integers++;
    }
    return integers;
}
int sumofremainder(int n) {
    int sum=0, remainder;
    while (n>0) {
        remainder=n%10;
        n/=10;
        sum+=remainder;
    }
    return sum;
}
int power(int x, int y) {
    int result=1;
    if (y==0)
        return 1;
    while (y>0) {
        result*=x;
        y-=1;
    }
    return result;
}
int reverse(int n, int reversed=0) {
    if (n==0)
        return reversed;

    return reverse(n/10, reversed*10 + n%10);

}
bool isPrime(int n) {
    if (n<2) return false;
    for (int i=1; i<=sqrt(n); i++) {
        if (n/i==0) return false;
    }
    return true;
}

int sumofeven(int s, int e) {
    int evensum=0;
    for (int i=s; i<=e; i++) {
        if (i%2==0)
            evensum+=i;
    }
    return evensum;
}
int sumofodd(int s, int e) {
    int oddsum=0;
    for (int i=s; i<=e; i++) {
        if (i%2==1)
            oddsum+=i;
    }
    return oddsum;
}
int main() {
   /* int num=9;
    cout<<factorial(num);
    return 0;*/

    //problem1
    /*int a, b;
    cin>>a>>b;
    cout<<mult(a,b);*/

    //problem2

    /*int n;
    cin>>n;
    cout<<factorial(n);*/

    //problem3
    /*int n;
    cin>>n;
    cout<<fib(n);*/

    //problem4
    /*int n;
    cin>>n;

    cout<<"Sum of "<<n<<" natural numbers: "<<sumofNnumbers(n);*/


    //problem5

   /* int n;
    cin>>n;
    show(n);*/

    //problem6
    /*int n;
    cin>>n;
    cout<<count(n);*/

    //problem7
    /*int n;
    cin>>n;
    cout<<sumofremainder(n);*/

    //problem8

    /*int a, b;
    cin>>a>>b;
    cout<<power(a,b);*/

    //problem9

    /*int n;
    cin>>n;
    cout<<reverse(n, 0);*/

    //problem10
    /*int n, reversednum;
    cin>>n;
    reversednum=reverse(n, 0);
    if (n==reversednum)
      cout<<"Palindrome";
    else
       cout<<"Not palindrome";*/

    //problem11

    /*int n;
    cin>>n;
    if (isPrime(n))
        cout<<"Yes";
    else
        cout<<"No";*/

    //quiz
    /*int start, end;
    cout<<"Enter starting point: ";
    cin>>start;
    cout<<"Enter ending point: ";
    cin>>end;
    cout<<"Sum of even numbers in range ("<<start<<","<<end<<") : "<<sumofeven(start, end)<<endl;
    cout<<"Sum of odd numbers in range ("<<start<<","<<end<<") : "<<sumofodd(start, end);*/

//problem12
   return 0;
}