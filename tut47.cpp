#include <bits/stdc++.h>
using namespace std;

class SimpleCalculator
{
    int a, b;

public:
    void getDataSimple()
    {
        cout << "Enter the value of a " << endl;
        cin >> a;
        cout << "Enter the value of b " << endl;
        cin >> b;
    }

    void performOperationSimple()
    {
        cout<<"The value of a+b "<<a+b<<endl;
        cout<<"The value of a-b "<<a-b<<endl;
        cout<<"The value of a*b "<<a*b<<endl;
        cout<<"The value of a/b "<<a/b<<endl;

    }
};
class ScientficCalculator
{

int a,b;
public:
    void getDataScientific()
    {
        cout << "Enter the value of a " << endl;
        cin >> a;
        cout << "Enter the value of b " << endl;
        cin >> b;
    }

    void performOperationScinetific()
    {
        cout<<"The value of cos(a) "<<cos(a)<<endl;
        cout<<"The value of sin(a) "<<sin(a)<<endl;
        cout<<"The value of exp(a) "<<exp(a)<<endl;
        cout<<"The value of tan(a) "<<tan(a)<<endl;

    }

};

class HybridCalculator : public SimpleCalculator , public ScientficCalculator{

};

int main()
{
    HybridCalculator cls;
    cls.getDataScientific();
    cls.performOperationScinetific();
    cls.getDataSimple();
    cls.performOperationSimple();

    return 0;
}