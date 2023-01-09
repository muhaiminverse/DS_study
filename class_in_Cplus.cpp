#include<bits/stdc++.h>
using namespace std;
/*
3 types of access modifiers
public
privet
protected
*/

///Private example
class Student
{
private:
    string name;
    int std_id;
    int age;
    string Fname;
    string Mname;
public:

void setinfo(string s, int id, int ag)
{
    name = s;
    std_id = id;
    age =ag;
}

    void print_info()
    {

        cout<<name<<" "<<std_id<<" "<<age<<" "<<Fname<<" "<<Mname<<" ";
    }
};

class rac
{
public:

    int cal_area(int w,int h)
    {
        return 2*(w+h);
    }
};


///protected example
///protected can only be accessed if the another class has a inheritance of that protected class
class user{
protected:
    string name;
    int age;
};

class admin:user{
   private:
       string designation;
    public:
    void sett(string s, int ag, string d)
    {
    name = s;
    age = ag;
    designation=d;
    }
    void print()
    {
        cout<<name<<" "<<age<<" "<<designation<<"\n";
    }

};
///
int main()
{

    admin s;
    s.sett("Muhaimin",153,"editor");
    s.print();


    return 0;


}
