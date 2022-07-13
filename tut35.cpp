#include <bits/stdc++.h>
using namespace std;




class Num
{
    int count = 0;
public:
    Num()
    {
        count++;
        cout << "This is the time when constructot is called for object number " << count << endl;
    }
    ~Num()
    {
        cout << "This is the time when my destructor is called for object number" << count << endl;
        count--;
    }
};
int main()
{
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    Num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Vreating two more object"<<endl;
        Num n2,n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}