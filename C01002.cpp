#include <stdio.h>
// <=9 chu so -> int -> %d
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		printf("%d", 2*n);
		printf("\n"); // xuong dong
	}
	return 0;
}

