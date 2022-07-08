#include <bits/stdc++.h>
using namespace std;

class Shop
{

    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void){
        counter = 0;
    }
    void setprice(void);
    void displayPrice(void);
};

void Shop ::setprice(void)
{
    cout << "Enter Id of your item" << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{

    Shop dukan;
    dukan.initCounter();
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.displayPrice();
    return 0;
}