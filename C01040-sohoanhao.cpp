#include <stdio.h>

int uoc(int n){
	int sum=0;
	for(int i=1; i<n; i++){
		if(n%i==0)
		sum+=i;
	}
	return sum;
}
int main(){
	int n;
	scanf("%d", &n);
	int sum=0;
	if(uoc(n)==n)
		printf("1");
	else 
		printf("0");
}

