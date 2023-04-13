#include <bits/stdc++.h>
using namespace std;

class Test{
    public:
    void disp(){
        cout <<"class A \n";
    }
};
int main(){
    Test o,*p;
    p=&o;
    p->disp();
return 0;
}