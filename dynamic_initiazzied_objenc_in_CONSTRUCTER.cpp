#include<iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int year;
    float intresteRate;
    float returnValue;

public:
    BankDeposit()
    {
        principal = 0;
        year = 0;
        intresteRate = 0;
        returnValue = 0;
    }

    BankDeposit(int p, int y, float r); // r like 0.04
    BankDeposit(int p, int y, int r);   // r like 4
    void show();
};

BankDeposit::BankDeposit(int p, int y, float r)
{
    principal = p;
    year = y;
    intresteRate = r;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + intresteRate);
    }
}

BankDeposit::BankDeposit(int p, int y, int r)
{
    principal = p;
    year = y;
    intresteRate = float(r) / 100;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + intresteRate);
    }
}

void BankDeposit::show()
{
    cout << "Principal amount is: " << principal
         << "\nReturn value after " << year << " years is: " << returnValue << endl;
}

int main()
{
    BankDeposit dh1, dh2, dh3;

    int p, y;
    float r;
    int R;

    dh3.show();

    cout << "Enter the values of p, y, and r (float): ";
    cin >> p >> y >> r;
    dh1 = BankDeposit(p, y, r);
    dh1.show();

    cout << "Enter the values of p, y, and R (int): ";
    cin >> p >> y >> R;
    dh2 = BankDeposit(p, y, R);
    dh2.show();

    return 0;
}
