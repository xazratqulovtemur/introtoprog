#include <iostream>
using namespace std;
void swap(int *a, int *b) {
    int temp = *a;
    *a =*b;
    *b=temp;
}
void square(int *a) {
    *a *= *a;
}
int main() {
//problem1
    /*
    int num;

    cin>>num;
    int *nump=&num;

    cout<<"Value: "<<num<<endl;
    cout<<"Address: "<<nump<<endl;
    cout<<"Value at address "<<nump<<": "<<*nump;*/


    //problem2

    /*int num, alter;
    cout<<"Enter the number: ";
    cin>>num;
    int *nump=&num;
    cout<<"Change it to: ";
    cin>>alter;
    *nump = alter;
    cout<<"Number changed to :"<<*nump<<" at address "<<nump;*/

    //problem3

    /*int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Original numbers: "<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"After swap: "<<a<<" "<<b<<endl;*/


    //problem4

    /*int arr[5]={1,2,3,4,5};
    int *arrp=&arr[0];
    for (int i=0;i<5;i++) {
        cout<<*arrp+i<<endl;
    }
*/

    //problem5
    /*int n, middle=0;
    int arr[n];
    cout<<"Enter number of elements: ";
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int *arrp = &arr[0];
    middle = *(arrp +n/2);
    cout<<"The middle element is: "<<middle;
*/

    //problem6

    /*int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Originally: "<<num<<endl;
    square(&num);
    cout<<"Then: "<<num;*/

    //problem7
    /*int arr[5] = {1,2,3,4,5};
    int *arrp = &arr[0];
    cout<<"Size of array: "<<sizeof(arr)<<endl;
    cout<<"Size of pointer: "<<sizeof(arrp);
*/

    //problem8
    /*int num=6;
    int *nump=&num;
    cout<<*nump;*/

//problem9

    int arr[7]={1,2,3,4,5,6,7}, max=0;
    int *arrp=&arr[0];
    for (int i=0; i<7; i++) {
        if (max<*(arrp+i)) {
            max=*arrp;
        }

    }
    cout<<"Max value: "<<max;
    return 0;


}