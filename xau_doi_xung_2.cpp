#include <stdio.h>
#include <string.h>

int main(){
	char s[1000001];
	gets(s);
	int l = strlen(s);
	printf("%d",l-1);
	return 0;
}

