#include <bits/stdc++.h>
using namespace std;

class con{
public:
int x,y;
con(){
	x=200;
	y=300;
}
con(con & obj){
    x=obj.x;
    y=obj.y;
}
void disp(){
    cout <<x <<"\t" <<y <<endl;
}
};

int main(){
    con o1;
    con o2=o1;
    o1.disp();
    o2.disp();
return 0;
}