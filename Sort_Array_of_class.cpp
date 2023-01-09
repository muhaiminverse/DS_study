#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    int std_id;
    int age;

///the array does not work without this empty constructor
Student()
{

}

Student(string name, int id, int ag)
    {
        this->name =name;
        std_id =id;
        age= ag;

    }
    void print_info()
    {

        cout<<name<<" "<<std_id<<" "<<age<<"\n";
    }

};
    bool comp(Student a, Student b)
    {
        return a.std_id <= b.std_id;
    }

int main()
{
    vector<Student>a;
    for(int i=0;i<10;i++)
        a.push_back(Student("A",20-i,20));

        sort(a.begin(),a.end(),comp);
    for(int i=0;i<10;i++)
        a[i].print_info();
}


