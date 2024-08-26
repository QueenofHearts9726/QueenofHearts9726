//Jordan T. Gensler
//August 18, 2024
// 5-3 Project Submission: Design functional programs that comply with industry regulations and best practice 



using std::string;
//using namespace std;


class Banking
{
private:
    int NumYears;
    double
        InitialInvestment,
        MonthlyDeposti,
        InterestRate,
        BeginningBalance,
        Interest,
        ClosingBalance;

    void calcBalance();
    void updateBalances();

public:
    Banking();
    //setters
    void setInitialInvestment(double);
    void setNumYears(int);
    void setMontlyDeposit(double);
    void setInterestRate(double);
    //getters
    int getNumYears();
    double getInitialIUnvestment();
    double getMontlyDeposit();
    double getInterestRate();

}