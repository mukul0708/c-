#include<stdio.h>
int add_by_do_while(){
    int n,sum=0,a=1;
    printf("Enter n upto whom you want sum \n");
    scanf("%d",&n);
    do{
        sum+=a;
        a++;
    }
    while(a<=n);
    printf("%d \n",sum);
    return 0;
}
int add_by_while(){
    int n,sum=0,a=1;
    printf("Enter n upto whom you want sum \n");
    scanf("%d",&n);
    do{
        sum+=a;
        a++;
    }
    while(a<=n);
    printf("%d \n",sum);
    return 0;
}
int add_by_for(){
    int n,sum=0,i;
    printf("Enter n upto whom you want sum \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=i;
    }
        printf("%d",sum);
    return 0;
}
int main() {
    int ch;
    printf("Enter 1 for solving by do while loop \n");
    printf("Enter 2 for solving by while loop \n");
    printf("Enter 3 for solving by for loop \n");
    scanf("%d",&ch);
    switch(ch){
        case 1:add_by_do_while(); break;
        case 2:add_by_while(); break;
        case 3:add_by_for(); break;
        default:printf("Wrong Input \n");
    }
    return 0;
}
