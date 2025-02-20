#include <iostream>
using namespace std;

[[noreturn]] int main(){

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

    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    while (b!=0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    cout<<"The GCD is: "<<a;


    return 0;
}

