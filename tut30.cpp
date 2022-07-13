#include <bits/stdc++.h>
using namespace std;

// Constructor in cpp

class Complex
{
    int a, b;

public:
    Complex(int , int ); // Constructor declaration

    void printNumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

// Complex :: Complex(void) // Default constructor as it takes no parameter
// { 
//     a=0;
//     b=0;
// }
Complex :: Complex(int x,int y) // Paramiterized constructor as it takes no parameter
{ 
    a=x;
    b=y;
}

int main()
{
    Complex c1(3,4);
    c1.printNumber();
    return 0;
}