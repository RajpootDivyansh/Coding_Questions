#include <iostream>
#include <string>
using namespace std;


class Student{
    public:
    string name;
    double* cgpaPtr;

    //constructor
    Student(string name,double cgpa){
        this->name=name;
       cgpaPtr = new double;
       *cgpaPtr=cgpa;
    }
//Shallow Copy
//    Student(Student &obj){
//        this->name=obj.name;
//        this->cgpaPtr=obj.cgpaPtr;
//    }

// Deep Copy
Student(Student &obj){
        this->name=obj.name;
        cgpaPtr=new double;
        *cgpaPtr=*obj.cgpaPtr;
    }


    void getInfo(){
        cout<<"name:"<<name<<endl;
        cout<<"cgpa:"<<*cgpaPtr<<endl;
    }
};


int main(){ 
   
    Student s1("Divyansh",8.0);
    Student s2(s1);
    s1.getInfo();

    *{s2.cgpaPtr}=9.0;
    s1.getInfo();
    return 0;
}