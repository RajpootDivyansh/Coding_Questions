#include <iostream>
#include <string>
using namespace std;

class Teacher{
private:
    double salary;

public:
//properties
    string name;
    string dept;
    string subject;
// non-parameterized
//    Teacher(){
//        cout<<"Hi, I am Constructor\n";
//        dept="Computer Science";
//    }

//parameterized
    Teacher(string n,string d, string s,double sal){

        name=n;
        dept=d;
        subject=s;
        salary=sal;
    }
    
    

    //methods/member functions
    void changeDept(string newDept){
        dept=newDept;
    }
    void getInfo(){
        cout<<"name :"<<name<<endl;
        cout<<"subject"<<subject<<endl;
    }
};



int main(){ 
    //Parameterized Constructor Call
    Teacher t1("Divyansh","Cse","C++",25000);//constructor call
    t1.getInfo();
    //Non-Parameterized Constructor Value Set up
    /*
    Teacher t1;
     t1.name ="Divyansh";
    t1.subject ="C++";
    t1.dept="Computer Science";
    t1.setSalary(25000);
    cout<<t1.name<<endl;
    cout<<t1.getSalary()<<endl;*/

    return 0;
}