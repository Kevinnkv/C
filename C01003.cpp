#include <stdio.h>
// <=9 chu so -> int -> %d (so nguyen)
// khi binh phuong len -> toi da len den 10^18
// 18 chu so <= long long -> %lld (so nguyen)
// float (%f) / double(%llf) -> so thuc
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		printf("%lld", (long long)n*n); // ep kieu
		printf("\n");
	}
	return 0;
}

