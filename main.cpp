#include<iostream>
#include<cmath>
using namespace std;

//problem1
/* float convertgrade (string grade) {
    if (grade=="A+")
        return 4.5;
    if (grade=="A")
        return 4;
    if (grade == "B+") return 3.5;
    if (grade == "B") return 3;
    if (grade =="C+") return 2.75;
    if (grade=="C") return 2.75;
    if (grade=="D")  return 2;
    return 0;
}


    int main() {
        string g1, g2, g3, g4;
        cout<<"Calculus 1:\n";
        cin>>g1;
        cout<<"Microecon 1: \n";
        cin>>g2;
        cout<<"ACS1; \n";
        cin>>g3;
        cout<<"DSG; \n";
        cin>>g4;

        float grade1= convertgrade(g1);
        float grade2 = convertgrade(g2);
        float grade3 = convertgrade(g3);
        float grade4= convertgrade(g4);
        float GPA=(grade1+grade2+grade3+grade4)/4;
        cout<<"Your GPA; "<<GPA<<endl;
        return 0;


} */

//problem2
/* int main() {
    float num1, num2, num3, num4, num5;
    cout<<"Enter 5 numbers"<<endl;
    cin>>num1>>num2>>num3>>num4>>num5;
    float sum=(num1+num2+num3+num4+num5);
    cout<<"The sum is "<<sum<<endl;

} */
//problem3
 /*int main () {
    cout<<"Write length of rectangle"<<endl;
    int length, width;
    cin>>length;
    cout<<"Write width of rectangle"<<endl;
    cin>>width;
    int surface = length * width;
    cout<<"Surface of rectangle is "<<surface<<endl;
    return 0;

}*/
//problem4
/*int main () {
    cout<<"Enter length of rectangle"<<endl;
    int length, width;
    cin>>length;
    cout<<"Enter width of rectangle"<<endl;
    cin>>width;
    int parimeter=2*(length+width);
    cout<<"The parimeter of rectangle is "<<parimeter<<endl;
    return 0;

}*/
//problem5
 /* int main() {

    int sum=0;
    int i;

    for (int i=2; i<=20; i++);
    sum +=i ;
    cout<<sum;



    return 0;


}*/
//problem6
/*
float convertgrade (string grade) {
    if (grade=="A+")
        return 4.5;
    if (grade=="A")
        return 4;
    if (grade == "B+") return 3.5;
    if (grade == "B") return 3;
    if (grade =="C+") return 2.75;
    if (grade=="C") return 2.75;
    if (grade=="D")  return 2;
}
int main() {

    string g1, g2, g3, g4;
    int credit1, credit2, credit3, credit4;
    cout<<"What is your grade for Calculus1"<<endl;
    cin>>g1;
    cout<<"How much credit for Calculus 1?"<<endl;
    cin>>credit1;
    cout<<"What is your grade for Microecon1"<<endl;
    cin>>g2;
    cout<<"How much credit for Microecon1"<<endl;
    cin>>credit2;
    cout<<"What is your grade for ACS1"<<endl;
    cin>>g3;
    cout<<"How much credit for ACS1"<<endl;
    cin>>credit3;
    cout<<"What is your grade for DSG"<<endl;
    cin>>g4;
    cout<<"How much credit for DSG"<<endl;
    cin>>credit4;

    float grade1= convertgrade(g1);
    float grade2 = convertgrade(g2);
    float grade3 = convertgrade(g3);
    float grade4= convertgrade(g4);
    float GPA=(grade1*credit1+grade2*credit2+grade3*credit3+grade4*credit4)/24;

    cout<<"Your GPA is "<<GPA<<endl;
    return 0;







}*/
//problem3
/*int main() {
    float tempC;
    cout<<"Enter temperature in Celsius: ";
    cin>>tempC;
    float tempF = tempC * 9 / 5 + 32;
    cout<<"Temperature in Fahrenheit: "<<tempF;
    return 0;

}
*/
//preblem5
/*int main() {
    int a1, a2,a3,a4;
    cout<<"Father`s age "<<endl;
    cin>>a1;
    cout<<"Mother`s age "<<endl;
    cin>>a2;
    cout<<"Your age "<<endl;
    cin>>a3;
    cout<<"Brother`s age "<<endl;
    cin>>a4;
    const float avg=(a1+a2+a3+a4)/4;
    cout<<"Your family`s average age is "<<avg<<endl;
    return 0;



}
*/
//problem9
/*
int main() {
    int a,d, result, remainder;
    cout<<"Enter the dividend"<<endl;
    cin>>a;
    cout<<"Enter the divisor"<<endl;
    cin>>d;
    remainder=a%d;
    result=(a-remainder)/d;
    cout<<"Result is : "<<result<<endl;
    cout<<"Remainder is: "<<remainder;
    return 0;



}
*/
//problem 9
/*
int main() {
    int r;
    const float PI = 3.14159;

    cout<<"Enter value of radius"<<endl;
    cin>>r;
    float surface=PI*r*r;
    cout<<"Surface of circle with radius of "<<r<<" is :"<<surface<<endl;



    return 0;


}*/
//problem 12
/*
int main() {
    int min, hour, remainder;
    cout<<"Enter Minutes: ";
    cin>>min;
    remainder=min%60;
    hour=(min-remainder)/60;
    cout<<"Hours: "<<hour<<". Minutes: "<<remainder<<endl;

    return 0;


}*/
//problem14
/*int main () {
    int salary, netsalary;
    cout<<"Enter your salary: ";
    cin>>salary;
    netsalary=salary*0.88;
    cout<<"Your net salary is "<<netsalary;
    return 0;

}*/
//problem15
/*
int main () {
    int price, discount, discountamount, finalprice;;
    cout << "Enter Price: "<<endl;
    cin>>price;
    cout<<"Enter Discount: "<<endl;
    cin>>discount;
    discountamount=price*discount/100;
    finalprice=price-discountamount;
    cout<<"Original price: "<<price<<endl;
    cout<<"discount amount; "<<discountamount<<endl;
    cout<<"Final price: "<<finalprice<<endl;
    return 0;


}*/
//problem17
/*
int main() {
    int p1,p2;
    cout<<"Price in last year: "<<endl;
    cin>>p1;
    cout<<"Price in this year: "<<endl;
    cin>>p2;
    float ir=100*(p2-p1)/p1;
    cout<<"Inflation rate: "<<ir<<endl;
    return 0;

}
*/
//problem 18
/* int main() {
    int fee, ft;
    float sr,r, sa;
    cout<<"Enter the amount of fee: "<<endl;
    cin>>fee;
    cout<<"Enter the scholarship rate: "<<endl;
    cin>>sr;

    r=sr/100;
    sa = r*fee;
    ft =fee-sa;
    cout<<"Original TuitionFee: "<<fee<<endl;
    cout<<"ScholarshipRate: "<<sr<<endl;
    cout<<"Scholarship amount "<<sa<<endl;
    cout<<"Final tuition fee: "<<ft<<endl;
    return 0;




}*/
//problem19


/*
int main() {
    double m, i, y; // Use double for better precision
    cout << "Enter money you have: "<<endl;
    cin >> m;
    cout << "Enter interest rate (in %): "<<endl;
    cin >> i;
    cout << "How many years do you want to wait: "<<endl;
    cin >> y;
    double q, finalm;
    q=1+i/100.0;
    double x=pow(q,y);
    finalm=x*m;





    cout << "Final money is: " << finalm << endl;
    return 0;
}
*/


int main() {
    char cal;
    float a,b, sum,mult,dif,div, power, root;

    cout<<"Enter first number"<<endl;
    cin>>a;

    cout<<"Enter +,-,*,/,^"<<endl;
    cin>>cal;
    cout<<"Enter second number"<<endl;
    cin>>b;
    float x=pow(a,b);

    sum=a+b;
    mult=a*b;
    div=a/b;
    dif=a-b;
    power=x;


    if (cal=='+')
        cout<<sum;
    if (cal=='-')
        cout<<dif;
    if (cal=='*')
        cout<<mult;
    if (cal=='/')
        cout<<div;
    if (cal=='^')
        cout<<power;




    return 0;
}




