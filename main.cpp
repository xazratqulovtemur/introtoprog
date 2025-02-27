/*
#include <iostream>
using namespace std;
int cost_for_pizza(int pq) {
    return 8*pq;
}
int cost_for_burger( int bq) {
    return 10* bq;
}
int cost_for_salad( int sq) {
    return 5*sq;
}

int main() {
    int  pq,bq,sq;
    int choice, total=0;
    cout<<"Menu: \n 1. Pizza - 8$ \n 2. Burger - 10$ \n 3. Salad - 5$ \n 4. Exit\n";
while (choice !=4) {

    cout<<"Enter your choice: ";
    cin>>choice;
    switch (choice) {
        case 1:
            cout<<"Enter the quantity :";
        cin>>pq;

        total+=cost_for_pizza(pq);
        break;

        case 2:

            cout<<"Enter the quantity :";
        cin>>bq;
        total+=cost_for_burger(bq);
        break;
        case 3:

            cout<<"Enter the quantity :";
        cin>>sq;
        total+=cost_for_salad(sq);
        break;
        case 4:
            exit(0);
        default:
            cout<<"Invalid Choice";
    }
    cout<<"Total cost: "<<total<<"\n";
}

    return 0;
}
*/
//problem2
/*
#include<iostream>

using namespace std;

int timeupto2( int time) {
    return 0;
}
int timeupto5(int time) {
    return (time-2)*2;
}
int timefrom6(int time) {
    return (time-2)*2 + (time-5)*5;
}
int main() {
    int time, total=0;
    cout<<"Enter hours of parking: ";
    cin>>time;
    if (time<=2) {
        total+=timeupto2(time);
        cout<<"Total cost: "<<timeupto2(time);


    }
    else if (time<=5) {
        total+=timeupto5(time);
        cout<<"Total cost: "<<timeupto5(time);

    }
    else if (time>5) {
        total+=timeupto5(time);
        cout<<"Total cost: "<<timefrom6(time);
    }
return 0;
}
*/

//problem3
/*
#include<iostream>
using namespace std;
int balance=500;
int deposit(int amount) {
    return balance+=amount;
}
int withdraw( int amount) {
    return balance -= amount;
}
int check(int amount) {
    return balance;
}

int main() {
    int choice, amount;

    cout<<"1. Deposit\n2. Withdraw\n3. Check\n4. Exit\n";

do {
    cout<<"Enter your choice: ";
    cin>>choice;
    switch (choice) {
        case 1: {
            cout<<"Enter quanity: ";
            cin>>amount;
            cout<<"Your balance: "<<deposit(amount)<<"\n";
            break;
        }
        case 2: {
            cout<<"Enter quanity: ";
            cin>>amount;
            cout<<"Your balance: "<<withdraw(amount)<<"\n";
            break;
        }
        case 3: {

            cout<<"Your balance: "<<check(amount)<<"\n";

        }
        case 4: {
            cout<<"Goodbye!";
            exit(0);
        }
        default:
            cout<<"Invalid choice!\n";
    }
}while (choice!=4);
}
*/

//problem4
/*
#include<iostream>
using namespace std;
int MovieA(int number) {
    return number*8;
}
int MovieB(int number) {
    return number*10;
}
int MovieC(int number) {
    return number*12;
}

int main() {
    char choice;
    int number, total=0;
    cout<<"Movie A: 8$ \nMovie B: 10$\nMovieC: 12$\nE to exit!\n";
    cout<<"Enter your choice: ";
    do {
        cin>>choice;
        if (choice =='A' || choice =='a') {
            cout<<"Enter number: ";
            cin>>number;
            total+=MovieA(number);
            cout<<"Total cost: "<<MovieA(number)<<"\n"<<endl;

        }
        else if (choice == 'B' || choice == 'b') {
            cout<<"Enter number: ";
            cin>>number;
            total+=MovieB(number);
            cout<<"Total cost: "<<MovieB(number)<<"\n"<<endl;

        }
        else if (choice == 'C' || choice == 'c') {
            cout<<"Enter number: ";
            cin>>number;
            total+=MovieC(number);
            cout<<"Total cost: "<<MovieC(number)<<"\n"<<endl;
        }
        else if(choice=='E' || choice=='e')
            exit(0);
    }while (true);
return 0;
}*/



//problem5
/*
#include<iostream>
using namespace std;
int train_x(int x) {
    return x*15;
}
int train_y(int y) {
    return y*20;
}
int train_z(int z) {
    return z*25;
}


int main() {
    cout<<"Choose train routes:\n1. Train X: 15$ \n2. Train Y: 20$ \n3. Train Z: 25$\n4. Exit! \nEnter 1-4: ";
    int choice, x,y,z, total_cost=0;
    do {
        cin>>choice;
        switch (choice) {
            case 1: {
                cout<<"How many tickets: ";
                cin>>x;
                total_cost+=train_x(x);
                cout<<"Total cost: "<<total_cost<<"\nEnter 1-4: "<<endl;
                cin>>choice;
                break;
            }
            case 2: {
                cout<<"How many tickets: ";
                cin>>y;
                total_cost+=train_y(y);
                cout<<"Total cost: "<<total_cost<<"\nEnter 1-4: "<<endl;
                cin>>choice;

                break;
            }
            case 3: {
                cout<<"How many tickets: ";
                cin>>z;
                total_cost+=train_z(z);
                cout<<"Total cost: "<<total_cost<<"\nEnter 1-4: "<<endl;
                cin>>choice;
                break;
            }
            case 4: {
                cout<<"Total cost: "<<total_cost<<"\nGoodbye! Have a nice trip!";
                exit(0);
            }
            default:
                cout<<"Invalid character!";
        }

    }while (true);
}
*/

//problem7
/*

#include <iostream>

using namespace std;

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to validate the entered date
bool isValidDate(int day, int month, int year) {
    if (month < 1 || month > 12) return false; // Month must be between 1 and 12

    int daysInMonth;

    // Determine the number of days in the given month
    if (month == 2) { // February
        daysInMonth = isLeapYear(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        daysInMonth = 30; // Months with 30 days
    } else {
        daysInMonth = 31; // Months with 31 days
    }

    return (day >= 1 && day <= daysInMonth);
}

// Function to calculate the next date
void nextDate(int &day, int &month, int &year) {
    int daysInMonth;

    // Determine the number of days in the given month
    if (month == 2) { // February
        daysInMonth = isLeapYear(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        daysInMonth = 30; // Months with 30 days
    } else {
        daysInMonth = 31; // Months with 31 days
    }

    if (day < daysInMonth) {
        day++; // Move to the next day
    } else {
        day = 1; // Reset day to 1
        if (month < 12) {
            month++; // Move to the next month
        } else {
            month = 1;
            year++; // Move to the next year
        }
    }
}

int main() {
    int day, month, year;

    // Get user input
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    // Validate the date
    if (!isValidDate(day, month, year)) {
        cout << "Invalid date! Please enter a valid date.\n";
        return 1;
    }

    // Calculate the next date
    nextDate(day, month, year);

    // Output the next date
    cout << "The next date is: " << day << "." << month << "." << year << endl;

    return 0;
}
*/

