//Jordan T. Gensler
//August 18, 2024
// 5-3 Project Submission: Design functional programs that comply with industry regulations and best practice 

#pragma once
#ifndef banking_h
#define banking_h

#include <string>

using std::string;
//using namespace std;


class Banking
{
private:
    int NumYears;
    double
        InitialInvestment,
        MontlyDeposit,
        InterestRate,
        BeginningBalance,
        Interest,
        ClosingBalance;

    void calcBalance();
    void updateBalances();

public:
    Banking();
    //setters
    void setInitialInvestment(double)
    void setNumYears(int);
    void setMontlyDeposit(double);
    void setInterstRate(double);
    //getters
    intgetNumYears();
    double getInitialInvestment()
    double getMontlyDeposit();
    double getInterstRAte();

    void displayBalances();
};

#endif