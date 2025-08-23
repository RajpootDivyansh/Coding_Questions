#include <iostream>
#include <string>
using namespace std;


class Student{
    public:
       void getInfo(){
            cout<<"Hello";
        }
        virtual void hello(){

            cout<<"hello";
        }
};

class Child:public Student{
    public:
    void getInfo(){
        cout<<"bye";
    }
    void hello(){
        cout<<"bye";
    }
}

int main(){
   Student s1;
   Student s2('Divyansh');
    return 0;
}