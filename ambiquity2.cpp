#include <iostream>
using namespace std;

class clg1{
    public:
    string clg_name;
};

class clg2{
    public:
    string clg_name;
};

class uni: public clg1, public clg2{
    public:
    string uni_name;
};

int main() {
    uni c;
    c.clg1:: clg_name="A";
    c.clg2:: clg_name="B";
    c.uni_name="CU";
    cout <<"clg1: " <<c.clg1::clg_name <<endl;
    cout <<"clg2: " <<c.clg2::clg_name <<endl;
    cout <<"University: " <<c.uni_name <<endl;
    return 0;
}
