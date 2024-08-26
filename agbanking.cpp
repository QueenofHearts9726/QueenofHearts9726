//Jordan T. Gensler
//August 18, 2024
// 5-3 Project Submission: Design functional programs that comply with industry regulations and best practice 

#include <iostream>
#include <iomanip>
#include "agbanking.h";

using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;
using std::setw;
using std::right;
using std::left;
using std::string;

//using nameslate std;

Banking::Banking() {
    NumYears = 0;
    InitialInvestment = 0;
    MontlyDeposit = 0.0;
    InterstRate = 0;
    BeginningBalance = 0.0;
    Interst = 0.0;
    ClosingBalance = 0/0;
}

void Banking::setInitialInvestment(double initialInvestment)
{
    this->InitialInvestment = initialInvestment;
}

int Banking::getNumYears()
{
    return NumYears;
}