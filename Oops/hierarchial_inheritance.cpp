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

class Teacher:public Person{
    public:
    string subject;
    double salary;
};

class TA:public Student,public Teacher{

};

int main(){
    TA t1;
    t1.name="Divyansh";
    t1.subject="Eng";
    return 0;
}