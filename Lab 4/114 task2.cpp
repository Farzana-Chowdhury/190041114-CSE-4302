#include<bits/stdc++.h>

using namespace std;

class Employee
{
private:
    string EmpName;
    int ID;
    int Age;
    float Salary;

    string getStatus(int a, int s)
    {
        if(a<=25)
        {
            if(s<=20000)
                return "Low";
            else
                return "Moderate";
        }
        else
        {
            if(s<=21000)
                return "Low";
            else if(s>21000 && s<=60000)
                return "Moderate";
            else
                return "High";
        }
    }
public:
    void FeedInfo(string name, int id, int age, float sal)
    {
        EmpName = name;
        ID = id;
        Age = age;
        Salary = sal;
    }
    void showInfo()
    {
        cout<<"Employee Name : "<<EmpName<<endl;
        cout<<"ID : "<<ID<<endl;
        cout<<"Age : "<<Age<<endl;
        cout<<"Salary : "<<Salary<<endl;
        cout<<"Status : "<<getStatus(Age,Salary)<<" Salaried Person\n"<<endl;
    }
};

int main()
{
    Employee obj;
    obj.FeedInfo("Jaman Ahmed", 1309, 32, 54000);
    obj.showInfo();
    obj.FeedInfo("Abul Kalam", 1630, 24, 18000);
    obj.showInfo();
    return 0;
}
