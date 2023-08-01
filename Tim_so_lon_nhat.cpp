#include <stdio.h>
#include <string.h>

int main(){
	long long max = 0;
	long long n;
	while(scanf("%lld ",&n) != -1){
		if(n > max){
			max = n;
		}
	}
	printf("%lld", max);
	return 0;
}

