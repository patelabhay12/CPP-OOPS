#include <bits/stdc++.h>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter ther Id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        
        cout <<"Employee Id is = "<< id<<" and this is employee number  "<<count<<endl;
    }

    static void getCount(void)
    {
        cout<<"The value of count is "<<count<<endl;
    }
};

int Employee ::count; // Default value is 0
int main()
{
    Employee m1,m2,m3;
    m1.setData();
    m1.getData();
    Employee::getCount();

    m2.setData();
    m2.getData();
    Employee::getCount();

    m3.setData();
    m3.getData();
    Employee::getCount();
    return 0;
}