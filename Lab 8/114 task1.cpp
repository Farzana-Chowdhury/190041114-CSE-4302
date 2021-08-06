#include<bits/stdc++.h>
using namespace std;

class Animal
{
private:
    string nameOfAnimal, habitat_area, sound;
    int weight, height, birthYear;
public:
    Animal():birthYear(2021)
    {}
    Animal(string Sound):sound(Sound),birthYear(2021)
    {}
//    Animal(string Name, string Habitat, int w, int h): nameOfAnimal(Name),habitat_area(Habitat),weight(w),height(h),birthYear(2021)
//    {}
//    Animal(string Name, string Habitat, int w, int h, int Birthyear): nameOfAnimal(Name),habitat_area(Habitat), weight(w),height(h),birthYear(Birthyear)
//    {
//        if(birthYear>2021)
//        {
//            cout<<"Birth Year cannot be greater than 2021\nSetting it to the default Birth Year"<<endl;
//            birthYear = 2021;
//        }
//    }

    Animal(string Name, string Habitat, string Sound, int w, int h): nameOfAnimal(Name),habitat_area(Habitat), sound(Sound),weight(w),height(h), birthYear(2021)
    {}
    Animal(string Name, string Habitat, string Sound, int w, int h, int Birthyear): nameOfAnimal(Name),habitat_area(Habitat), sound(Sound),weight(w),height(h), birthYear(Birthyear)
    {
        if(birthYear>2021)
        {
            cout<<"Birth Year cannot be greater than 2021\nSetting it to the default Birth Year"<<endl;
            birthYear = 2021;
        }
    }

    void setName()
    {
        string n;
        cin>>n;
        nameOfAnimal = n;
    }
    string getName() const
    {
        return nameOfAnimal;
    }

    void setHabitat()
    {
        string h;
        cin>>h;
        habitat_area= h;
    }
    string getHabitat() const
    {
        return habitat_area;
    }

    void setSound()
    {
        string s;
        cin>>s;
        sound=s;
    }
    string getSound() const
    {
        return sound;
    }

    void setWeight()
    {
        int w;
        cin>>w;
        weight = w;
    }
    int getWeight() const
    {
        return weight;
    }

    void setHeight()
    {
        int ht;
        cin>>ht;
        height = ht;
    }
    int getHeight() const
    {
        return height;
    }

    void setbirthYear(int birthyr=2021)
    {
        birthYear = birthyr;
    }
    int getbirthYear()
    {
        return birthYear;
    }

    int getAge() const
    {
        int Age = 2021 - birthYear;
        return Age;
    }

    void getInformation() const
    {
        cout<<"Name of the animal : "<<nameOfAnimal<<endl;
        cout<<"Habitat Area : "<<habitat_area<<endl;
        cout<<"Sound : "<<sound<<endl;
        cout<<"Birth Year : "<<birthYear<<endl;
        cout<<"Age : "<<getAge()<<endl;
        cout<<"Weight : "<<weight<<endl;
        cout<<"Height : "<<height<<endl;
        cout<<"\n";
    }
    void changeWeight(int pounds)
    {
        weight = pounds;
    }
    void vocalize()
    {
        cout<<"\""<<sound<<"\"";
    }
};

class Cow : public Animal
{
public:
    Cow():Animal("moo")
    {}
    Cow(string Name, string Habitat, string Sound, int w, int h):Animal(Name, Habitat, Sound, w, h)
    {}
    Cow(string Name, string Habitat, string Sound, int w, int h, int BirthYear):Animal(Name, Habitat, Sound, w, h, BirthYear)
    {}

};

class Chicken : public Animal
{
public:
    Chicken():Animal("buck buck")
    {}
    Chicken(string Name, string Habitat, string Sound, int w, int h):Animal(Name, Habitat, Sound, w, h)
    {}
    Chicken(string Name, string Habitat, string Sound,  int w, int h, int BirthYear):Animal(Name, Habitat, Sound, w, h, BirthYear)
    {}

};
class Cat : public Animal
{
public:
    Cat():Animal("meow")
    {}
    Cat(string Name, string Habitat, string Sound, int w, int h): Animal(Name, Habitat, Sound, w, h)
    {}
    Cat(string Name, string Habitat, string Sound, int w, int h, int BirthYear): Animal(Name, Habitat, Sound, w, h, BirthYear)
    {}

};
int main()
{
    string name, habitat,sound;
    int weight, height, birthYear, age;

    Cow obj1;
    Chicken obj2("Lali","Farm","buck buck", 2,3,2019);
    Cat obj3("Mini","Home","meow", 3,2);

    obj1.getInformation();
    obj2.getInformation();
    obj3.getInformation();

    return 0;
}
