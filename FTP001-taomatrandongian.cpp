#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n;i++){
        int x = 1;
        for(int j = 0; j <= i;j++){
            printf("0 ");
        }
        for(int j = i+1; j < n;j++){
            printf("%d ", x++);
        }
        printf("\n");
    }
}