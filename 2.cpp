#include <bits/stdc++.h>
using namespace std;

class con{
public:
int x,y;
con(int x1,int y1){
    x=x1;
    y=y1;
}
void disp(){
    cout <<x <<"\t" <<y <<endl;
}
};

int main(){
    con obj(200,300);
    obj.disp();
return 0;
}