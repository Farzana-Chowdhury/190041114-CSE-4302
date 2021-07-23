#include<bits/stdc++.h>
using namespace std;

class RationalNumber
{
private:
    int numerator;
    int denominator;
public:
    void assign(int numerator,int denominator)
    {
        if(denominator==0)
            cout<<"Error: Invalid number"<<endl;
        else
        {
            this->numerator=numerator;
            this->denominator=denominator;
        }
    }
    double convert()
    {
        double r= (double)numerator/(double)denominator;
     return r;
    }

    void invert()
    {
        if(numerator==0)
            cout<<"Error: Invalid number"<<endl;
        else
            swap(numerator,denominator);
    }
    void print()
    {
        cout<<"The rational number is: "<<numerator<<"/"<<denominator<<endl;
    }
};

int main()
{
    RationalNumber obj;
    int n,d;
    double r;
    cout<<"Enter Numerator: ";
    cin>>n;
    cout<<"\nEnter Denominator: ";
    cin>>d;
    obj.assign(n,d);
    obj.print();

    cout<<"\nAfter convertion: ";
    r=obj.convert();
    cout<<r<<endl;

    cout<<"\nAfter Inversion : \n";
    obj.invert();
    obj.print();

}
