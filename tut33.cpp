#include <bits/stdc++.h>
using namespace std;

class BankDeposite
{
    int principle;
    int year;
    float interestRate;
    float returnValue;

public:
    BankDeposite(){
        principle=0;
        year=0;
        interestRate=0;
        returnValue=0;
    }
    BankDeposite(int p, int y, float r); // r can be a value like 0.04
    BankDeposite(int p, int y, int r);   // r can be a value like 14%

    void show();
};

BankDeposite::BankDeposite(int p, int y, float r)
{
    principle = p;
    year = y;
    interestRate = r;

    returnValue = principle;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + r);
    }
}

BankDeposite::BankDeposite(int p, int y, int r)
{
    principle = p;
    year = y;
    interestRate = float(r) / 100;

    returnValue = principle;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + r);
    }
}

void BankDeposite ::show()
{
    cout << "Principal amount was " << principle << endl;
    cout << "Return value after " << year << endl;
    cout << "Is " << returnValue << endl;
}

int main()
{
    BankDeposite bd1;
    int p, y;
    float r;
    int R;
    cout << "Enter the value of p y and r" << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposite(p, y, r);
    bd1.show();
    return 0;
}