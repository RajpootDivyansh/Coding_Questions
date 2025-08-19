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

    //destructor
    ~Student(){
        cout<<"Hi i delete";
        delete cgpaPtr;
    }

    void getInfo(){
        cout<<"name:"<<name<<endl;
        cout<<"cgpa:"<<*cgpaPtr<<endl;
    }
};


int main(){ 
   
    Student s1("Divyansh",8.0);
    s1.getInfo();
    
    return 0;
}