#include <stdio.h>

int main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int n; 
		scanf("%d", &n);
		int a;
		int sum=0;
		while(n){
			a=n%10;
			sum+=a;
			n/=10;
		}
		if(sum%10==0) printf("YES\n");
		else printf("NO\n");
	}
}

