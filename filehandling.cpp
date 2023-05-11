#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // #ifdef ONLINE_JUDGE
    // freopen("input.txt","r",ios::in);
    // freopen("output.txt","w",ios::out);
    // #endif
    string a;
    fstream f1;
    f1.open("file.txt",ios::out);
    f1<<"Hello \n";
    getline(cin,a);
    f1<<a;
    f1.close();
	return 0;
}