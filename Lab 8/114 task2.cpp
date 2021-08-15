#include<bits/stdc++.h>
using namespace std;

class Seat
{
private:
    string comfortability;
    bool seat_warmer;
public:
    Seat()
    {}
    Seat(string c,bool sw):comfortability(c), seat_warmer(sw)
    {}
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
private:
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
private:
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
private:
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

class Car
{
private:
    double max_acceleration;
    double fuel_capacity;





public:
    Car()
    {}
    Car(double acc, double capacity):max_acceleration(acc), fuel_capacity(capacity)
    {}


 Seat seat;
    Wheel wheel;
    Engine engine;
    Door door;

//    seat.setComfortability("Pleasant");
//    seat.setSeatWarmer(true);
//    wheel.setCircumference(35.4);
//    engine.setMFCR(5);
//    engine.setMEPR(45);
//    engine.setAvg_RPM(5000);
//    door.setOpeningMode("sideways");

    void set_Max_Acceleration(double a)
    {
        max_acceleration = a;
    }
    double get_Max_Acceleration() const
    {
        return max_acceleration;
    }

    void set_Fuel_Capacity(double cap)
    {
        fuel_capacity = cap;
    }
    double get_Fuel_Capacity() const
    {
        return fuel_capacity;
    }


    void display() const
    {


        cout<<"Maximum Acceleration: "<<get_Max_Acceleration()<<endl;
        cout<<"Fuel Capacity: "<<get_Fuel_Capacity()<<endl;
        cout<<"Comfortability of Seat: "<<seat.getComfortability()<<endl;
        cout<<"Presence of Seat Warmer: "<<seat.getSeatWarmer()<<endl;
        cout<<"Circumference of Wheel: "<<wheel.getCircumference()<<endl;
        cout<<"Maximum Fuel Consumption Rate: "<<engine.getMFCR()<<endl;
        cout<<"Maximum Energy Production Rate: "<<engine.getMEPR()<<endl;
        cout<<"Average RPM: "<<engine.getAvg_RPM()<<endl;
        cout<<"Opening Mode of Door: "<<door.getOpeningMode()<<endl;


    }
};
int main()
{
    Car car(140, 80);

    car.seat.setComfortability("Pleasant");
    car.seat.setSeatWarmer(true);
    car.wheel.setCircumference(35.4);
    car.engine.setMFCR(5);
    car.engine.setMEPR(45);
    car.engine.setAvg_RPM(5000);
    car.door.setOpeningMode("sideways");

    car.display();
}
