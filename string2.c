#include<stdio.h>
#include<string.h>

void strlen1();
void strcpy1();
void strcat1();
void strcmp1();
void strrev1();

    char str1[100];
    char str2[100];
    char str3[100];
    int i=0,j=0,ch;
int main(){

    printf("Enter string 1 \n");
    gets(str1);
    printf("Enter string 2 \n");
    gets(str2);

    while(1){
        printf("\n Enter 1 to find string length \n Enter 2 to copy string \n Enter 3 to compare string \n Enter 4 for string concatenation \n Enter 5 to reverse string \n Enter 6 to exit \n");
        scanf("%d",ch);

        switch(ch){
            case 1: strlen1(); break;
            case 2: strcpy1(); break;
            case 3: strcmp1(); break;
            case 4: strcat1(); break;
            case 5: strrev1(); break;
            case 6: return 0;
            default: printf("Wrong input");
        }
    }
}

void strlen1(){
    while(str1[i]!='\0'){
        i++;
    }
    printf("Length of the string is %d",i);
}

void strcpy1(){
    while(str1[i]!='\0'){
        str3[i]=str1[i];
        i++; 
    }
    str3[i+1]='\0';
    printf("Copied string is %s",str3);
}

void strcat1(){
    while(str1[i]!='\0'){
        i++;
    }
    while(str2[j]!='\0'){
        str1[i+j]=str2[j];
        j++;
    }
    str1[i+j]='\0';
    printf("Concatenated string is %s",str1);
}

void strcmp1(){
    int b=0;
    while(str1[i]!='\0' || str2[i]!='\0'){
        if(str2[i]!=str1[i]){
            b++; break;
        }
        i++;
    }
    if(b==0){
        printf("Both string are same");
    }
    else{
        printf("Both strings are different");
    }
}

void strrev1(){
    int j=0;
    while(str1[i]!='\0'){
        i++;
    }
    for(j=i-1;j>=0;j--){
    printf("Reversed string is %c",str1[j]);
    }
}
