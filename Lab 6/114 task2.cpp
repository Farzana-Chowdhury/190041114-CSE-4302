#include<bits/stdc++.h>
using namespace std;

class Matrix3D
{
private:
    double M[3][3];
public:
    Matrix3D()
    {
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                M[i][j] = 0;
    }
    Matrix3D(double a[3][3])
    {
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                M[i][j] = a[i][j];
    }
    ~Matrix3D() {}

    void setValues()
    {
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                cin>>M[i][j];
    }

    void displayValues()
    {
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
                cout<<M[i][j]<<"  ";
            cout<<"\n";
        }
    }
    double det()
    {
        double Det = 0;
        //      for(int i=0; i<3; i++)
        //         Det = Det+ (M[0][i]* (M[1][(i + 1) % 3] * M[2][( i + 2) % 3] - M[1][(i + 2) % 3]*M[2][(i + 1) % 3]));
        Det = M[0][0]*(M[1][1]*M[2][2]-M[1][2]*M[2][1])-M[0][1]*(M[1][0]*M[2][2]-M[1][2]*M[2][0])+M[0][2]*(M[1][0]*M[2][1]-M[2][0]*M[1][1]);

        return Det;
    }
    Matrix3D inverse()
    {
        Matrix3D In;
        double D=det();
        if(D == 0)
            cout<<"Inverse does not exist"<<endl;
        else
        {
            for (int i = 0; i < 3; ++i)
            {
                for (int j = 0; j < 3; ++j)
                {
                    In.M[i][j] = ((M[(j + 1) % 3][(i + 1) % 3] * M[(j + 2) % 3][(i + 2) % 3]) - (M[(j + 1) % 3][(i + 2) % 3] * M[(j + 2) % 3][(i + 1) % 3])) / D;
                }
            }
            return In;
        }

    }
    Matrix3D operator + (Matrix3D a)
    {
        Matrix3D b;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                b.M[i][j]=M[i][j] + a.M[i][j];
        return b;
    }

    Matrix3D operator - (Matrix3D a)
    {
        Matrix3D b;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                b.M[i][j]=M[i][j] - a.M[i][j];
        return b;
    }

    Matrix3D operator * (Matrix3D a)
    {
        Matrix3D b;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                for(int k=0; k<3; k++)
                    b.M[i][j]=M[i][k]*a.M[k][j];
        return b;
    }
};
int main()
{
    double x[3][3]= {{9,2,5},{3,1,2},{8,7,4}};
    Matrix3D A(x),B;
    cout<<"Matrix A:\n";
    A.displayValues();

    cout<<"Enter values for Matrix B\n";
    B.setValues();
    cout<<"Matrix B\n";
    B.displayValues();

    cout<<"After Addition:\n";
    (A+B).displayValues();

    cout<<"After Subtraction:\n";
    (A-B).displayValues();

    cout<<"After Multiplication:\n";
    (A*B).displayValues();





}
