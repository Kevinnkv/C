#include <stdio.h>
#include <string.h>
int main(){
	long long max = 0, min = 1e9 + 7;
	long long n;
	while(scanf("%lld ",&n) != -1){
		if(n < min){
			min = n;
		}
		else if(n > max){
			max = n;
		}
	}
	printf("%lld %lld", max, min);
	return 0;
}

