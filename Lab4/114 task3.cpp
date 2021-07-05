#include<bits/stdc++.h>

using namespace std;

class StudentResult
{
private:
    static int passingMark;
    static int HighestMark[6];
    int subjectMark[6];
    bool fail;
public:
    void displayMarks()
    {
        for(int i=0; i<6; i++)
            cout<<"Mark for Course "<<i+1<<": "<<subjectMark[i]<<endl;
    }

    void setMarks(int c1,int c2, int c3, int c4, int c5, int c6)
    {
        subjectMark[0] = c1;
        subjectMark[1] = c2;
        subjectMark[2] = c3;
        subjectMark[3] = c4;
        subjectMark[4] = c5;
        subjectMark[5] = c6;

        for(int i=0; i<6; i++)
            if(HighestMark[i]<subjectMark[i])
                HighestMark[i] = subjectMark[i];

        for(int i=0; i<6; i++)
            (subjectMark[i] < passingMark)? fail = 0 : fail = 1;

    }
    void checkPassing()
    {
        if(fail ==0)
            cout<<"Status : Fail\n"<<endl;

        else
            cout<<"Status : Pass\n"<<endl;


    }

//An extra function that was asked to do during viva session

    void Highest()
    {
        for(int i=0; i<6; i++)
            cout<<"Highest mark for Course "<<i+1<<": "<<HighestMark[i]<<endl;
    }
};
int StudentResult::passingMark = 40;
int StudentResult::HighestMark[6] = {0,0,0,0,0,0};


int main()
{
    StudentResult obj;
    obj.setMarks(85,67,74,59,82,81);
    obj.displayMarks();
    obj.checkPassing();
    obj.setMarks(80,78,75,68,79,85);
    obj.displayMarks();
    obj.checkPassing();

    obj.Highest();

}
