#include <stdio.h>
void num(int i){
   
    printf("Number is %d\n",i);
        i++;
    if(i<=50){
        num(i);
    }
}
int main(){
    int i=1;
num(i);

    return 0;
}
