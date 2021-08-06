#include<bits/stdc++.h>
using namespace std;

class Seat
{
protected:
    string comfortability;
    bool seat_warmer;
public:
    Seat()
    {
    }
    Seat(string c,bool sw):comfortability(c),seat_warmer(sw)
    {

    }
    void setComfortability(string c)
    {
        comfortability = c;
    }
    string getComfortability() const
    {
        return comfortability;
    }

    void setSeatWarmer(bool s)
    {
        seat_warmer = s;
    }
    bool getSeatWarmer() const
    {
        return seat_warmer;
    }
};

class Wheel
{
protected:
    double circumference;
public:
    Wheel()
    {}
    Wheel(double c):circumference(c)
    {}
    void setCircumference(double c)
    {
        circumference = c;
    }
    double getCircumference() const
    {
        return circumference;
    }
};

class Engine
{
protected:
    double Maximum_Fuel_Consumption_Rate, Maximum_Energy_Production_Rate, Average_RPM;
public:
    Engine()
    {}
    Engine(double MFCR, double MEPR, double AR):Maximum_Fuel_Consumption_Rate(MFCR),Maximum_Energy_Production_Rate(MEPR),Average_RPM(AR)
    {}
    void setMFCR(double mfcr)
    {
        Maximum_Fuel_Consumption_Rate = mfcr;
    }
    double getMFCR() const
    {
        return Maximum_Fuel_Consumption_Rate;
    }

    void setMEPR(double mepr)
    {
        Maximum_Energy_Production_Rate = mepr;
    }
    double getMEPR() const
    {
        return Maximum_Energy_Production_Rate;
    }

    void setAvg_RPM(int ar)
    {
        Average_RPM = ar;
    }
    double getAvg_RPM() const
    {
        return Average_RPM;
    }
};
class Door
{
protected:
    string opening_mode;

public:
    Door()
    { }
    Door(string op_mode): opening_mode(op_mode)
    { }

    void setOpeningMode(string mode)
    {
        opening_mode = mode;
    }

    string getOpeningMode() const
    {
        return opening_mode;
    }
};

class Car: public Seat, public Wheel, public Engine, public Door
{
private:
    double max_acceleration;
    double fuel_capacity;
public:
    Car(): Seat(), Wheel(), Engine(), Door()
    { }
    Car(double a, double cap): Seat(), Wheel(), Engine(), Door(), max_acceleration(a), fuel_capacity(cap)
    { }
    Car(double a, double cap, string comf, bool sw, double c, double MFCR, double MEPR, int rpm, string op_mode):
        max_acceleration(a), fuel_capacity(cap), Seat(comf, sw), Wheel(c), Engine(MFCR, MEPR, rpm), Door(op_mode)
    { }
    void setMax_Acceleration(double a)
    {
        max_acceleration = a;
    }
    double get_Max_Acceleration() const
    {
        return max_acceleration;
    }

    void set_Fuel_Capacity(double f_cap)
    {
        fuel_capacity = f_cap;
    }
    double get_Fuel_Capacity() const
    {
        return fuel_capacity;
    }

    void display() const
    {
        cout<<"Maximum Acceleration: "<<get_Max_Acceleration()<<endl;
        cout<<"Fuel Capacity: "<<get_Fuel_Capacity()<<endl;
        cout<<"Seat Comfortability: "<<getComfortability()<<endl;
        cout<<"Seat Warmer Presence: "<<getSeatWarmer()<<endl;
        cout<<"Wheel Circumference: "<<getCircumference()<<endl;
        cout<<"Maximum Fuel Consumption Rate: "<<getMFCR()<<endl;
        cout<<"Maximum Energy Production Rate: "<<getMEPR()<<endl;
        cout<<"Average RPM: "<<getAvg_RPM()<<endl;
        cout<<"Door Opening Mode: "<<getOpeningMode()<<endl;
    }
};

int main()
{
    Car obj(140, 80, "Pleasant", true, 35.4, 5, 45, 5000, "sideways");

    obj.display();

    return 0;
}
