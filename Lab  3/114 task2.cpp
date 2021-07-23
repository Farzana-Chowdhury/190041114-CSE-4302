#include<bits/stdc++.h>
using namespace std;

class Medicine
{
private:
    string name;
    string genericName;
    double discountPercent;
    double unitprice;

public:
    void assignName(char name[], char genericName[])
    {
        this->name = name;
        this->genericName = genericName;
    }
    void assignPrice(double price)
    {
        if(price>=0)
            unitprice=price;
        else
            unitprice=0;
    }
    void setDiscountPercent(double percent)
    {
        if(percent>=0&&percent<=45)
        {
            discountPercent=percent;
        }
        else
            discountPercent=5;
    }
    double getSellingPrice(int nos)
    {
        double s=(unitprice-unitprice*(discountPercent/100))*nos;
        cout<<"Selling price is "<<s;
    }
    void display()
    {
        cout<<name<<"("<<genericName<<")has a unit price of BDT "<<unitprice<<". Current discount "<<discountPercent<<"%"<<endl;
    }
};
int main()
{
    Medicine obj;
    char n[40],g[40];
    cout<<"Name :";
        cin>>n;
    cout<<"Generic name :";
    cin>>g;
    double p,d;
    int number;
    cout<<"Unit Price: ";
    cin>>p;
    cout<<"Discount percent : ";
    cin>>d;
    cout<<"Number of items: ";
    cin>>number;
    obj.assignName(n,g);
    obj.assignPrice(p);
    obj.setDiscountPercent(d);
    obj.getSellingPrice(number);
    obj.display();

}
