#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    int std_id;
    int age;
    string Fname;
    string Mname;

///this is a constructor. it basically sets the class variable. its exactly like a function just doesn't return anyting -->
Student(string name, int id, int ag, string Fm, string Mf)
    {
        this->name =name;
        std_id =id;
        age= ag;
        Fname = Fm;
        Mname =Mf;
    }
Student(string name, int id, int ag)
    {
        this->name =name;
        std_id =id;
        age= ag;

    }
    void print_info()
    {

        cout<<name<<" "<<std_id<<" "<<age<<" "<<Fname<<" "<<Mname<<"\n";
    }
    ///Destructor is used only when you use "new int" taken from heap. it is called when exiting the schope
    ~Student()
    {
    //cout<<"Called"<<"\n"; //its useless to use destructor here;
    }
};


int main()
{
    Student s1("Muhaimin",153,21,"Anowar","Sheuly");
    s1.print_info();
    Student s2("Suhan",151,20);
    s2.print_info();

    ///Dynamic Object
    Student *s = new Student("Salman",154,20);
    s->print_info();

}

