#include<bits/stdc++.h>
using namespace std;

class Car
{
public:
    string name;
    int price;


    wihttaxprice(int budget)
    {
        if(price<budget)
        cout<<"You can buy "<<name<<" with taxed price: $"<<price*1.7<<endl;
        else
            cout<<"Can't buy "<<name<<" its over budget";
    }

    model()
    {
        cout<<name<<" $"<<price<<endl;
    }
};

int main()
{
    Car c1,c2;
    int budget = 30000;
    c1.name= "2023 Mazda CX-50";
    c1.price = 27550;

    c2.name= "2023 Honda CR-V";
    c2.price = 31110;

    c1.model();
    c2.model();
    cout<<endl;
    c1.wihttaxprice(budget);
    c2.wihttaxprice(budget);
    cout<<endl;


    return 0;
}
