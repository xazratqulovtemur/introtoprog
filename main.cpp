#include <iostream>
using namespace std;
int main() {
    /*int arr[2][2] = {
        {1,2},
            {3,4}
    };
    int sum = 0;
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            sum +=arr[i][j];
        }
    }
    cout<<"Sum of all elements in array: "<<sum;*/

    //problem2

    /*int row, column;

    cout<<"Enter row, then column: ";
    cin>>row>>column;
    int arr[row][column];
    for (int i=0; i<row; i++) {
        for (int j=0; j<column; j++) {
            cout<<"Enter element"<<j+1<<" for row "<<i+1<<": "<<endl;
            cin>>arr[i][j];
        }
    }
    for (int i=0; i<row; i++) {
        int max = arr[i][0];
        for (int j=0; j<column; j++) {
            if (arr[i][j]>max) {
                max=arr[i][j];
            }
        }
        cout<<"Max value in row "<<i+1<<": "<<max;
    }

*/

    //problem3

    /*int row, column;

    cout<<"Enter row, then column: ";
    cin>>row>>column;
    int arr[row][column];
    for (int i=0; i<row; i++) {
        for (int j=0; j<column; j++) {
            cout<<"Enter element"<<j+1<<" for row "<<i+1<<": "<<endl;
            cin>>arr[i][j];
        }
    }
    for (int i=0; i<row; i++) {
        int sum=0;
        for (int j=0; j<column; j++) {
            sum +=arr[j][i];
        }
        cout<<"Sum of all elements in column "<<i+1<<": "<<sum;
    }*/

    //problem4

    /*int n;
    cin>>n;
    int arr[n][n];
    for (int i=0; i<n; i++) {
        for (int j=0;j<n; j++) {
            cin>>arr[i][j];
        }
    }
    int sum=0;
    for (int i=0; i<n; i++) {

        sum +=arr[i][i];
    }

    cout<<"Sum of diagonal: "<<sum;*/

    //problem5
    int n, m;


    //problem1

    /*string s;
    cin>>s;
    int vowel=0, constant=0;
    for (char c:s) {
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u') {
            vowel++;
        }
        else {
            constant++;
        }

    }
    cout<<"\tVowels\tConstants"<<endl;
    cout<<"\t"<<vowel<<"\t"<<constant<<endl;*/


    //second way

    char sentence[101]
    return 0;
}