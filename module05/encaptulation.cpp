#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    char name[100];
    void Hi(){
        cout<<"Hello "<<name<<" ";
    }
    void Greeting(){
        cout<<"How Are You ?"<<endl;
    }
};
int main(){
    Student Identity;
    strcpy(Identity.name,"Maruf Mobin");
    Identity.Hi();
    Identity.Greeting();
    return 0;
}
