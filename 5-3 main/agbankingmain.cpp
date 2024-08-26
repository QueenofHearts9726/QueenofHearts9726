//Jordan T. Gensler
//August 18, 2024
// 5-3 Project Submission: Design functional programs that comply with industry regulations and best practice 

#include <iostream>
#include "agbanking.h";

using namespace std;

int getInteger(int);
int getInteger(int, string);
double getDouble(int, string);


int main() {
    /*
    *input
    *initialDeposit
    *montly deposit
    *interest rate
    *years
    */

    Banking airgead;
    int numYears = 0; // the number of years until maturity
    double
        initialInvestment = 0.0, //how much is deposited to start
        monthlyDeposit = 0.0, //how much money is contributed each month
        interestRate = 0.0,
        beginningBalance = 0.0,
        interest = 0.0, 
        closingBalance = 0.0;

    return 0;
}//main

int getInteger(int lowest)
{
    /*
    * The purpose getInteger is
    */
    int number = 0;
    bool needData = true;

    do {
        cout << "Enter a number greater than or equal to " << lowest << " ";
        cin >> number;
        needData = (number < lowest);
        if (needData) {
            cout << "Invalid number - must be greater than or equal to " << (lowest) << endl;
        }//if needData

    } while (needData);

    return number;
}

int getInteger(int lowest, string prompt)
{
    /*
    * The purpose getInteger is
    */
   int number = 0;
   bool needData = true;

   do {
    cout << prompt << lowest << " ";
    cin >> number;
    needData = (number < lowest);
    if (needData) {
        cout << "Invalid number - must be greater than or queal to "; << (lowest) << endl;
    }//if needData

   } while (needData);

   return number;
}

double getDouble(int lowest, string prompt)
{
    double number = 0;
    bool needData = true;

    do {
        cout << prompt << "Must be greater than " << lowest << " ";
        cine >> number;
        needData = (nu8mber < lowest);
        if (needData) {
            cout << "Invalid number - must be greater than or equal to " << (lowest) << endl;
        }//if needData

    } while (needData);

    return number;
}