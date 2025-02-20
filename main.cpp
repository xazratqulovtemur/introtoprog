#include <iostream>
using namespace std;
int main(){

  /*      int random=345;
        int counter=0;
        cout<<"Computer guessed a number, try to find it: ";
        int guess;

        while (true) {
            cin>>guess;
            if (guess<random) {
                cout<<"Too low!, try again: ";
                counter ++;


            }
            else if (guess >random) {
                cout<<"Too high! try again: ";
                counter ++;
            }
            else {
                cout<<"You found it right!";
                break;
            }
        }
        if (counter%5==0) {
            if (random%2==2) {
                cout<<"Hint: Random number i even! try again:";
            }

        }
        if (counter%5==0) {
            if (random%5==0) {
                cout<<"Hint: Random number is multiple of 5, try again: ";
            }

        }
    if (counter%5==0){
        if (random%5!=0 && random%2!=0 )
        cout<<"Random number is not multiple of 5 and 2, try again: ";

    }

*/



    //problem1

    //part a
    /*int sum =0;
    for (int i=1; i<=100; i++) {
        sum += i;
    }
    cout<<"Sum of 100 natural numbers: "<<sum;

*/


    //part b

   /* cout<<"Enter a number: ";
    int n;
    int sum=0;
    cin>>n;
    for (int i=1; i<=n; i++) {
        sum += i;
    }
    cout<<"Sum of the "<<n<<" numbers: "<<sum;*/

    //problem2

   /* int count=0, num=2;
    cout<<"First 10 prime numbers: ";
    for (; count<10; num ++) {
        bool isPrime=true;

        for (int i=2; i*i <=num; i++) {
            if  (num %i ==0) {
                isPrime=false;
                break;
            }
        }
        if (isPrime) {
            cout<<num;
            count ++;
        }
    }

    cout<<endl;
    */

    //problem3
/*
    int n;
    cout<<"Enter a number to write Col- latz sequence: ";
    cin>>n;

    while (n!=1){
        cout<<n<<" ";
        if (n%2==0) {
            n /= 2;
        }else{
        n=3*n+1;

        }

    }
    cout<<n<<endl;
*/

    //problem4

 /*   int n;
    int counter=0;
    cout<<"Enter a number :";
    cin>>n;
    while (n/10!=0) {
        n/=10;
        counter++;

    }
    cout<<"Number has "<<counter+1<<" integers";
    */

    //problem5
/*
    int a,b;
    cout<<"Enter a number: ";
    cin>>a;
    while (a>0) {
        b=a%10;
        a/=10;
        cout<<b<<" ";
    }*/

    //problem6

   /* int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    while (b!=0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    cout<<"The GCD is: "<<a;

*/

    ///problem7
   /* int a, sum=0, counter =0;

    cout<<"Enter a number: ";


    while (sum<100) {
        cin>>a;
        sum +=a;

        counter++;

    }
    cout<<"Sum is: "<<sum<<endl;
    cout<<"You entered "<<counter<<" numbers";*/

    //problem8

    /*int balance=500;
    int n;
    cout<<"Enter withdrawal amount: (or  0 to cancel)";

    while (balance>0 && n!=0) {
        cin>>n;
        balance -=n;
        cout<<"Remaining balance: "<<balance;
    }
    while ()
    if (balance <0) {
        cout<<"Insufficient funds!";
    }
    if (n==0) {
        return 0;

    }*/

    //problem9
   /* char letter;
    cout<<"Enter N or Y: ";
    do {
        cin>>letter;
        if(letter=='N' || letter=='Y') {
            cout<<"Accepted";
        }
        else {
            cout<<"Invalid";
        }


    }while (true) ;*/

    //problem11

    /*int n;
    cout<<" 1. Withdraw money \n 2. Check how money left \n 3. Change password \n 4. Exit, take your card. \n";
    cout<<"Enter the number between 1 and 4: ";
    do {
        cin>>n;
        if (n==1) {
            cout<<"Processing...";
        }
        else if (n==2) {
            cout<<"Checking...";
        }
        else if (n==3) {
            cout<<"Preparing...";
        }
        else if (n==4) {
            cout<<"Exit";
            break;
        }
    }while (true);
*/

    //problem12
   /* int a,b;
    char c;
    int sum;
    int subs;
    cout<<"Enter the first number and second number: ";
    cin>>a>>b;
    cout<<"Enter + or -: ";
    cin>>c;
    sum=a+b;
    subs=a-b;
    if (c=='+') {

        cout<<sum;
        }
    else if (c=='-') {

        cout<<subs;
        }*/


    //problem12

   /* int password=1234, guess;
    cout<<"Enter password: ";
    int attempt=0;
    do {
        cin>>guess;

        if (guess!=password) {
            cout<<"incorrect";
            attempt++;
        }
        else {
            cout<<"Access granted";
            break;
        }
    }while (attempt<3);*/

    //probelm13

   /* int random=345;
    int guess, counter=0;
    cout<<"Enter the number of guesses:";
    while(true) {
        cin >> guess;
        if (guess < random) {
            cout << "Too low";
            counter++;
        } else if (guess > random) {
            cout << "Too high";
            counter++;
        } else {
            cout << "correct";
            break;
        }
        if (counter % 5 == 0) {
            if (random % 2 == 0) {
                cout << "It is even";
            }
        }
        if (counter % 5 == 0) {
            if (random % 5 == 0) {
                cout << ". It is multiple of 5!";
            } else {
                cout << "It is odd, and not multiple of 5!";
            }
        }
    }*/
    return 0;
}