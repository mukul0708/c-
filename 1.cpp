//Static datamember
#include <bits/stdc++.h>
using namespace std;

class stat{
    public:
    void func(){
    static int x = 1;
    int y=1;
    cout <<"static: " <<x <<"\t" <<"Non static: " <<y <<endl;
    x++;
    y++;
    }
};

int main() {
    stat s1;
    for(int i=1;i<=5;i++){
        s1.func();
    }
    return 0;
}
