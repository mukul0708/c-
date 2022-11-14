
#include <stdio.h>

int main() {
    int arr[9];
    int i,j;
    printf("Enter array \n");
    for(i=1;i<=9;i++){
        scanf("%d",&arr[i-1]);
    }
    for(j=1;j<=3;j++){
        printf("%d \t",arr[j-1]);
    }
    printf("\n");
    for(j=4;j<=6;j++){
        printf("%d \t",arr[j-1]);
    }
    printf("\n");
    for(j=7;j<=9;j++){
        printf("%d \t",arr[j-1]);
    }

    return 0;
}
