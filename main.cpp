#include<iostream>
using namespace std;
void greet() {
    cout<<"Hello from greet()";
}
void bye() {
    cout<<"Bye from bye()";
}
int add(int a, int b) {
    cin>>a>>b;
    return a + b;
}
int multiply(int a, int b) {
    cin>>a>>b;
    return a * b;
}

float average(int *arrptr, int size) {
    int sum=0;
    for (int i=0; i<size; i++) {
        sum+=*(arrptr+i);
    }
    int avg=sum/size;
    cout<<"Average: "<<avg<<endl;
    return avg;
}
int main() {
    /*problem1*/
    /*int arr[5]={1,2,3,4,5};
    int *arrp=arr;
    for (int i=0; i<5; i++ ) {
        cout<<arrp[i]<<" ";
    }*/

    /*problem2*/

    /*int arr[6]={2,4,6,8,10,12};
    int *arrp=arr;
    for (int i=0; i<6; i++) {
        cout<<3*arrp[i]<<" ";
    }*/


    //problem3

    /*int arr[5]={1,2,3,4,5};
    int *arrp=arr;
    cout<<"Third elements is "<<arrp[2];*/


    /*problem4*/

    /*int arr[5]={1,2,3,4,5};
    int *arrp=arr;
    for (int i=4; i>=0; i-- ) {
        cout<<arrp[i]<<" ";
    }*/


    //problem5

    /*int arr[5]={1,2,3,4,5};
    int *arrp=arr;
    arrp++;
    cout<<*arrp;*/


    //problem6

    /*int arr[4]={1,2,3,4};
    int *arrp=arr;
    for (int i=0; i<4; i++) {
        cout<<"Value "<<arrp[i]<<", Address: "<<arrp+i<<endl;
    }*/


    //problem7

    /*int arr[5] = {1,2,3,4,5};
    int *arrp=arr;
    for (int i=0; i<5; i++) {
        if (arrp[i]%2==0) {
            cout<<arrp[i]<<" ";
        }
    }*/


    //problem8

    /*int arr[2][3] = {{1,2,3}, {4,5,6}};
    int *arrp=&arr[0][0];
    for (int i=0; i<6; i++) {
        cout<<*arrp+i<<" ";
    }*/

    //problem9

    /*int a=1, b=2, c=3;
    int *arrp[3]={&a,&b, &c};
    for (int i=0; i<3; i++) {
        cout<<*arrp[i]<<" ";
    }*/

    //problem10

    /*int arr[5]={9,3,7,1,6};
    int *arrp=arr;

    for (int i=0; i<5-1; i++) {
        for (int j=0; j<5-1-i; j++) {
            if (*(arrp +j)> *(arrp+j+1) ) {
                int temp=*(arrp+j);
                *(arrp+j)=*(arrp+j+1);
                *(arrp+j+1)=temp;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        cout<<arrp[i]<<" ";
    }*/


    //problem11
    /*const char * suit[4] ={"Hearts","Diamonds","Clubs","Spades"};
    for (int i=0; i<4; i ++) {
        cout<<*(suit+i)<<" ";
    }*/


    //problem12
    /*const char*days[3]= {"Mon","Tue","Wed"};
    for (int i=0; i<3; i++) {
        cout<<*(*(days+i)+1)<<" ";
    }*/
//problem15

    /*void (*functionptr1)();
    functionptr1 = greet;

    void(*functionptr2)();
    functionptr2=bye;

    functionptr1();
    cout<<endl;
    functionptr2();
*/

    //problem16

   /* int (*funcptr1)(int a, int b);
    funcptr1 = add;
    int (*funcptr2)(int a, int b);
    funcptr2=multiply;

    cout<<"Addition: "<<funcptr1(1,2);
    cout<<endl;
    cout<<"Multiply: "<<funcptr2(1,2);*/

//problem17
   /* int (*funcptr2)(int a, int b);
    funcptr2=multiply;
    cout<<"Multiply: "<<funcptr2(1,2);
*/

//quiz
    /*int arr[5]={1,2,3,4,5};
    int *arrp = arr;
    average(arrp, 5);*/




    return 0;
}