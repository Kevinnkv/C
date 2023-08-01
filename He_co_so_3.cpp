#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char s[20];
		scanf("%s",&s);
		int check = 0;
		for(int i=0;i< strlen(s);i++){
			if(s[i] >'2' || s[i] <'0') check = 1;
		}
		if(check == 0) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

