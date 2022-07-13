#include <bits/stdc++.h>
using namespace std;

// Base class
class Employee
{

public:
    int id;
    float salary;
    Employee(){}
    Employee(int inp)
    {
        id = inp;
        salary = 340000;
    }
};

// Derived Class syntax
/*class {{derived-class-name}} : {{visibolity-mode}} {{base-class-name}}
{
    class members/methods/etc..
}
Note
1 Default visibility mode is private
2. public visibility mode : public member of the base class becomes public members of the derived class
3. private visibility mode : public member of the base class becomes private members of the derived class

4.private memebr are never inherited ;


*/

// Creating a programer class deriver from employee Base class

class Programmer : public Employee
{
public:
   int languageCode;
   Programmer(int impid)
    {
        id = impid;
        languageCode = 9;
    }
};

int main()
{
    Employee abhi(1), abhay(2);
    cout << abhi.salary << endl;
    cout << abhay.salary << endl;
    Programmer skillf(10);
    cout<<skillf.languageCode<<endl;
    cout<<skillf.id<<endl;

    return 0;
}