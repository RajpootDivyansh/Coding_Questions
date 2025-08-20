#include <iostream>
#include <string>
using namespace std;


class Student{
    public:
    string name;

    Student(){
        cout<<"non-parameterized";
    }
    Student(string name){
        this->name=name;
        cout<<"parameterized";
    }
    

};



int main(){
   Student s1;
   Student s2('Divyansh');
    return 0;
}