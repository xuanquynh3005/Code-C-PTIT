#include <stdio.h>
#include <math.h>

// int Nto(int n){
//     if(n<2) return 0;
//     for(int i=2; i<=sqrt(n); i++)
//         if(n%i==0) return 0;
//     return 1;
// }
int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int n; 
        scanf("%d", &n);
        for(int i=2; i<=n; i++){
            while(n%i==0){
                printf("%d ", i);
                n/=i;
            }
        }
        printf("\n");
    }
}