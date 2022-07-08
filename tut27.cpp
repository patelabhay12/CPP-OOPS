#include <bits/stdc++.h>
using namespace std;

// Forword Declaration
class Complex;

class Calculator
{

public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};
class Complex
{
    int a, b;
    // Individually declaring functions as friends


    /*friend int Calculator ::sumRealComplex(Complex o1, Complex o2);
    friend int Calculator ::sumCompComplex(Complex o1, Complex o2);   */

    // Aliter : Declaring the entire calculator class as frined 

    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your Number is " << a << " + " << b << 'i' << endl;
    }
};

int Calculator::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex c1, c2;
    c1.setNumber(3, 4);
    c2.setNumber(6, 7);
    Calculator calc;
    int res = calc.sumRealComplex(c1, c2);
    cout <<"The sum of real part fo the Complex Number = " <<res << endl;
    int resc = calc.sumCompComplex(c1, c2);
    cout <<"The sum of Complex part of the Complex Number = "<< resc << endl;
    return 0;
}