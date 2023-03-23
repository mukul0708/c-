#include <iostream>
using namespace std;

class A{
    public:
    void disp(){
        int n=30;
        cout <<"n= " <<n <<endl;
    }
};

class B{
    public:
    void disp(){
        int n=10;
        cout <<"n= " <<n <<endl;
    }
};

class C: public A, public B{
    public:
    void disp(){
        int n=20;
        cout <<"n= " <<n <<endl;
    }
};
int main() {
    C obj;
    obj.B::disp();
    return 0;
}
