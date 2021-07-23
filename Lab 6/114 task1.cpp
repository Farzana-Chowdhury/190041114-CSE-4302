#include<bits/stdc++.h>
using namespace std;

class Counter
{
private:
    int step,_count;
public:

    Counter(int a=0,int b=0): _count(a),step(b) {}
    ~Counter() {}
    void setIncrementStep(int step_val =1)
    {
        if(step_val<0)
        {
            cout<<"Enter a positive value\n";
            exit(0);
        }
        step = step_val;
    }
    int getCount()
    {
        return _count;
    }
    void increment()
    {
        _count += step;
    }
    void resetCount()
    {
        _count = 0;
    }
    Counter operator + (Counter a)
    {
        Counter temp;
        temp._count = _count + a._count;
        temp.step = min (step, a.step);
        return temp;
    }
    Counter operator + (int var)
    {
        Counter temp;
        temp._count = _count + var;
        temp.step = step;
        return temp;
    }
    Counter operator += (Counter b)
    {
        Counter temp;
        temp._count = _count + b._count;
        temp.step = step + b.step;
        return temp;
    }
    Counter operator ++()
    {
        Counter temp;
        temp._count=_count++;
        temp.step = step++;
        return temp;

    }
    Counter operator ++(int)
    {
        Counter temp;
        temp._count=_count++;
        temp.step = step++;
        return temp;

    }
};

int main()
{
    Counter c1,c2(7,2),c3(3,5);
    cout<<"Initial count for c2: "<<c2.getCount()<<endl;
    c2.increment();
    cout<<"Count for c2 after incremention: "<<c2.getCount()<<endl;
    c2.resetCount();
    cout<<"Count for c2 after resetting: "<<c2.getCount()<<endl;

    c1 = c2 + c3;
    cout<<"c1 = c2 + c3 = "<<c1.getCount()<<endl;

    c1 = c2 + 6;
    cout<<"c1 = c2 + 6 = "<<c1.getCount()<<endl;
    c1 += c2;
    cout<<"c1 += c2 = "<<c1.getCount()<<endl;
    c1 = c2++;
    cout<<"c1 = c2++ = "<<c1.getCount()<<endl;
    c1 = ++c2;
    cout<<"c1 = ++c2 = "<<c1.getCount()<<endl;

}
