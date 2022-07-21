#include<bits/stdc++.h>
using namespace std;
class Student
{
public: //Access Modifier  / Specifier
    char name[100];
    int roll;
};
int main()
{
    Student Maruf;
    Student Firoj;

    strcpy(Maruf.name, "Md Maruf Mobin");
    Maruf.roll = 30;

    strcpy(Firoj.name, "Md Firoj Khan");
    Firoj.roll = 22;

    cout<<Maruf.name<<" "<<Maruf.roll<<endl;
    cout<<Firoj.name<<" "<<Firoj.roll<<endl;
    return 0;
}
