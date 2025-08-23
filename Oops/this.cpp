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
    Teacher(string name,string dept, string subject,double salary){

        this->name=name;
         this->dept=dept;
        this-> subject=subject;
         this->salary=salary;
    }

    //copy constructor
    Teacher(Teacher &orgObj){
        this->name=orgObj.name;
         this->dept=orgObj.dept;
        this-> subject=orgObj.subject;
         this->salary=orgObj.salary;

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
    //t1.getInfo();

    Teacher t2(t1);
    t2.getInfo();





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