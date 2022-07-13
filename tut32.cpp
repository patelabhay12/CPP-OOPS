#include <bits/stdc++.h>
using namespace std;

class Simple
{

    int data1;
    int data2;

public:
    Simple(int a, int b = 9)
    {
        data1 = a;
        data2 = b;
    }

    void printData();
};

void Simple ::printData()
{
    cout << "The data1 and data2 is " << data1 << " and " << data2 << endl;
}

int main()
{
    Simple c1(10);
    c1.printData();
    return 0;
}