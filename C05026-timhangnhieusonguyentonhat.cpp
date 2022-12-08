#include <stdio.h>
#include <math.h>

int snt(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", & n);
    int max = 0;
    int hangi = 0;
    int a[101][101];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", & a[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        int dem = 0;
        for (int j = 0; j < n; j++) {
            if (snt(a[i][j]))
                dem++;
            if (dem > max) {
                max = dem;
                hangi = i;
            }
        }
    }
    printf("%d\n", hangi + 1);
    for (int i = 0; i < n; i++)
        if (snt(a[hangi][i]))
            printf("%d ", a[hangi][i]);
}