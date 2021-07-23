#include<bits/stdc++.h>
using namespace std;

class rationalNumber
{
private:
    int n,d;
    void check()
    {
        if(d==0)
        {
            cout<<"Denominator cannot be zero\n";
        }
    }
public:
    rationalNumber() {}

    void getValues()
    {
        cout<<"Numerator: "<<n<<"\nDenominator:"<<d<<endl;
    }
    void setValues(int a, int b)
    {
        n=a;
        d=b;
        check();
    }
    ~rationalNumber() {}
    double convert()
    {
        double r= (double)n/(double)d;
        return r;
    }
    double operator + (rationalNumber a)

    {
        return (double)n/d + (double)a.n/a.d;
    }
    double operator - (rationalNumber a)
    {
        return (double)n/d - (double)a.n/a.d;
    }
    double operator * (rationalNumber a)
    {
        return (double)n/d * (double)a.n/a.d;
    }
    double operator / (rationalNumber a)
    {
        return (double)n/d / (double)a.n/a.d;
    }
};

int main()
{
    rationalNumber obj1, obj2;
    int n,d;

        cout<<"Enter Numerator: ";
        cin>>n;
        cout<<"Enter Denominator: ";
        cin>>d;
        obj1.setValues(n,d);
        obj1.getValues();

        cout<<"Enter Numerator: ";
        cin>>n;
        cout<<"Enter Denominator: ";
        cin>>d;
        obj2.setValues(n,d);
        obj2.getValues();


    cout<<"After Addition: "<<obj1 + obj2<<endl;
    cout<<"After Subtraction: "<< obj1 - obj2<<endl;
    cout<<"After Multiplication: "<< obj1 * obj2<<endl;
    cout<<"After Division: "<< obj1 / obj2<<endl;
}
