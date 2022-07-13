#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b, c;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    void printNumber()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
    void printr()
    {
        cout << "Your Number is " << a + c << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1(3, 4, 5);
    c1.printr();

    return 0;
}