#include <iostream>
#include <string>
using namespace std;


class Person{
    public:
    string name;
    int age;

};

class Student:public Person{
    public:
    int rollno;

};

class gradStudent:public Student{
    public:
    string reasearArea;
};

int main(){
    gradStudent s1;
    s1.name="Divyansh Rajpoot";
    s1.reasearArea="Physics"
    s1.age=21;
    s1.rollno=2221;

    return 0;
}