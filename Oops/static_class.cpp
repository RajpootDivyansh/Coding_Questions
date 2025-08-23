#include <iostream>
#include <string>
using namespace std;


class abc{
    public:
    abc(){
        cout<<"constructor";

    }
    ~abc(){
        cout<<"destructor";
    }
}
int main(){
    if(true){
        static ABC obj;
    }
    cout<<"Main";

    return 0;
}