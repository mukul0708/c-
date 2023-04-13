#include <iostream>
using namespace std;

class Test{
    int a;
    public:
    void disp(int a){
        this->a=a;          //if this pointer is not used then it will generate an garbage value
    }
    //declaration of this pointer is not needed(this is a keyword)
    //it is  a pointer which is accessable only within the non static data members of a class
    //it can be used to pass current object as a parametor 
    //it can be used to refer current class instance variable
    //syntax   this->member_identifier
    void display(){
         cout <<"A is " <<a;
    }
};
int main(){
    Test o,*p;
    o.disp(20);
    o.display();
return 0;
}