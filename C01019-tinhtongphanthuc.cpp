#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	double sum=0;
	for(int i=1; i<=n; i++){
		sum+=1.0/(double)i;
	}
		printf("%.4f", sum);
}

