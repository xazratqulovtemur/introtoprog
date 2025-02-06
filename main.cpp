#include <iostream>
#include <cmath>
#include<cctype>
#include<string>
using namespace std;

void stoi(int i );

int main() {
    //problem1
    /* int n;
     cin>>n;
     if (n>=0)
         cout<<"Positive number"<<endl;
     if (n<0)
         cout<<"Negative number"<<endl;
     if (n%2==0)
         cout<<"Even"<<endl;
     if (n%2!=0)
         cout<<"Odd"<<endl;
     return 0;*/





    //problem2

    /*   int n1, n2, n3;
        cout<<"Enter 3 numbers"<<endl;
        int greatest;
        cin>>n1>>n2>>n3;
        if (n1>n2 && n1>n3)
            greatest=n1;
         else if (n2>n3)
            greatest=n2;
        else
            greatest=n3;

        cout<<"Greatest number is "<<greatest<<endl;*/


    //preoblem4
    /*   int a,b;
       cin>>a>>b;
       if (a%b==0) {
           cout<<a<<" is divisable by "<<b<<endl;
       }
       else {cout<<a<<" is not divisable by "<<b<<endl;} */


    //problem6
    /* double a,b,c;
     cout<<"Enter values of a,b,c"<<endl;
     cin>>a>>b>>c;
     double disc=b*b-4*a*c;
     if (disc>0) {
         double x1=(-b+sqrt(disc)/2*a);
         double x2=(-b-sqrt(disc)/2*a);
         cout<<"x1 is "<<x1<<endl;
         cout<<"x2 is "<<x2<<endl;
     } else if (disc<0) {
         cout<<"No root"<<endl;
     }






 */
    //problem7
    /* int a,b,c;
     cout<<"Enter sides of triangle"<<endl;
     cin>>a>>b>>c;
     if ((a+b)>c &&(a+c)>b && (b+c)>a)
         cout<<"Traingle is valid"<<endl;
     else cout<<"Traingle is not valid"<<endl;


 */



    //newproblems

    //problem1
    /* int n;
    cin>>n;
    if (n>=0)
        cout<<"Positive number"<<endl;
    if (n<0)
        cout<<"Negative number"<<endl;
    if (n%2==0)
        cout<<"Even"<<endl;
    if (n%2!=0)
        cout<<"Odd"<<endl;
    return 0;*/



    //problem3
    /*
      int n1, n2, n3;
       cout<<"Enter 3 numbers"<<endl;
       int greatest;
       cin>>n1>>n2>>n3;
       if (n1>n2 && n1>n3)
           greatest=n1;
        else if (n2>n3)
           greatest=n2;
       else
           greatest=n3;

       cout<<"Greatest number is "<<greatest<<endl;*/




    //problem6
    /*
    cout<<"Enter the speed"<<endl;
    int speed;
    cin>>speed;
    if (speed<20) {
        cout<<"too slow"<<endl;
    }
    else if (speed>20 && speed<80) {
        cout<<"Just right"<<endl;

    }
    else {
        cout<<"Too fast"<<endl;
    }
    return 0;
*/

    //problem7

    /*
    cout<<"Enter mark"<<endl;
    int mark;
    cin>>mark;
    if (mark >50)
        cout<<"Pass"<<endl;
    else
        cout<<"Fail";
    return 0;

*/
    //problem 8
    /*
    cout<<"Enter number";
    int n;
    cin>>n;
    if (n>0)
        cout<<"Positive"<<endl;
    else if (n<0)
        cout<<"Negative"<<endl;
    else
        cout<<"Zero"<<endl;
    return 0;
*/

    //problem 9
    /*
    cout<<"Enter g, y, r"<<endl;
    char l;
    cin>>l;
    if (l=='g')
        cout<<"Go";

    else if(l=='y')
        cout<<"Get ready";
    else if(l=='r')
        cout<<"Stop";
    return 0;
    

*/

    //problem 10
    /*
    cout<<"Enter your grade"<<endl;
    int grade;
    cin>>grade;
    if (grade>90 && grade<=100)
        cout<<"A"<<endl;
    else if (grade>80 && grade<=89)
        cout<<"B";
    else if (grade>70 && grade<=79)
        cout <<"C";
    else if (grade>60 && grade <=69)
        cout <<"D";
    else
        cout<<"F";
    return 0;

*/

    //problem 11
/*
    cout<<"Enter two numbers: "<<endl;
    int a,b;
    cin>>a>>b;
    if (a%b==0)
        cout<<a<<" is divisible by "<<b<<endl;
    else
        cout<<"Not divisible"<<endl;
    return 0;
    */

    //problem12
    /* int a,b,c;
     cout<<"Enter sides of triangle"<<endl;
     cin>>a>>b>>c;
     if ((a+b)>c &&(a+c)>b && (b+c)>a)
         cout<<"Traingle is valid"<<endl;
     else cout<<"Traingle is not valid"<<endl;


 */
    //problem13
    /*
    cout<<"Enter the character"<<endl;
    char a;
    cin>>a;
    if (isupper(a))
        cout<<"It is uppercase"<<endl;
    else if (islower (a))
        cout<<"It is lowercase"<<endl;
    else
        cout<<"It is not a letter";
    return 0;
*/

    //problem14

    /*
    cout<<"Enter your weight of rice1 and price: ";
    float w1, p1, r1, w2, p2, r2;

    cin>>w1>>p1;
    r1=p1/w1;
    cout<<"Enter your weight of rice2 and price: ";
    cin>>w2>>p2;
    r2=p2/w2;
    if (r1>r2) {
        cout<<"Second rice has better price"<<endl;
        }
    else if (r1<r2)
        cout<<"First rice has better price"<<endl;

    else {
        cout<<"Both have same prices"<<endl;

    }

    return 0;
*/




   //problem16
    /*

       cout<<"Enter points x, y: ";
    int x,y;
    cin>>x>>y;
    cout<<"Points are: "<<x<<" "<<y<<endl;
    float distance = sqrt(pow(x, 2)+pow(y, 2));
    cout<<distance;
    if (distance<10)
        cout<<"Point is inside the circle"<<endl;
    else
        cout<<"It is not inside the circle"<<endl;


    return 0;
    */



    //problem17

    /*
    cout<<"Enter your GPA"<<endl;
    float gpa;
    cin>>gpa;
    if (gpa>=4 && gpa<=4.5)
        cout<<"80% scholarship"<<endl;
    else if (gpa>=3.5 && gpa<4)
        cout<<"60% scholarship"<<endl;
    else if (gpa>=3 && gpa<3.5)
        cout <<"50% scholarship"<<endl;
    else
        cout<<"No scholarship";
    return 0;
*/

}
