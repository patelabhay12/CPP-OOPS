#include <bits/stdc++.h>
using namespace std;

// Constructor in cpp

class Complex
{
    int a, b;

public:
    Complex(void); // Constructor declaration

    void printNumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

Complex :: Complex(void) // Default constructor as it takes no parameter
{ 
    a=10;
    b=0;
}

int main()
{
    Complex c1;
    c1.printNumber();
    return 0;
}