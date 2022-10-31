#include <stdio.h>
int table_by_do_while(){
    int n,a=1;
    printf("Enter n whose table you want \n");
    scanf("%d",&n);
    do{
        printf("%d*%d=%d \n",n,a,n*a);
        a++;
    }
    while(a<=10);
    
    return 0;
}
int table_by_while(){
    int n,a=1;
    printf("Enter n whose table you want \n");
    scanf("%d",&n);
    while(a<=10){
        printf("%d*%d=%d \n",n,a,n*a);
        a++;
    }
    return 0;
}
int table_by_for(){
    int n,a;
    printf("Enter n whose table you want \n");
    scanf("%d",&n);
    for(a=1;a<=10;a++){
        printf("%d*%d=%d \n",n,a,n*a);
    }
    return 0;
}
int main() {
    int ch;
    printf("Enter 1 for solving by do while loop \n");
    printf("Enter 2 for solving by while loop \n");
    printf("Enter 3 for solving by for loop \n");
    scanf("%d",&ch);
    switch(ch){
        case 1:table_by_do_while(); break;
        case 2:table_by_while(); break;
        case 3:table_by_for(); break;
        default:printf("Wrong input");
    }
    return 0;
}
