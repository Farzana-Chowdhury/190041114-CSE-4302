#include<bits/stdc++.h>
using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int second;
public:
    int hours()
    {
        return hour;
    }
    int minutes()
    {
        return minute;
    }
    int seconds()
    {
        return second;
    }
    void reset(int h,int m, int s)
    {
        hour=h;
        minute=m;
        second=s;
    }
    void advance(int h,int m, int s)
    {
        second=s+second;
        if(second>59)
        {
            minute++;
            second=second%60;
        }
        minute=minute+m;
        if(minute>59)
        {
            hour++;
            minute=minute%60;
        }
        hour=hour+h;
        if(hour>=24)
            hour=hour%24;
    }
    void print()
    {
        cout<<hour<<":"<<minute<<":"<<second<<endl;
    }
};
int main()
{
    Time t;
    int h,m,s;
    cin>>h>>m>>s;
    t.reset(h,m,s);
    cout<<"Initial time ";
    t.print();
    cin>>h>>m>>s;
    t.advance(h,m,s);
    cout<<"Advanced time ";
    t.print();
}
