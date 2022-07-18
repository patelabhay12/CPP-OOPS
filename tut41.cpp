#include <bits/stdc++.h>
using namespace std;

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int b)
    {
        base2int = b;
    }
};


class Derived : public Base1 ,public Base2{
    public:
    void  show()
    {
        cout<<"The value of Base1int is = "<<base1int<<endl;
        cout<<"The value of Base2int is = "<<base2int<<endl;
        cout<<"The sum of base1int and base2int is = "<<base1int+base2int<<endl;
    }
};


int main()
{
    Derived a;
    a.set_base1int(10);
    a.set_base2int(20);
    a.show();
    return 0;
}