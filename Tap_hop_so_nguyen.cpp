#include <stdio.h>

int main(){
	int n,m;
	scanf("%d %d", &n, &m);
	int a[n],b[m];
	int dd1[1001]={0},dd2[1001]={0};
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		dd1[a[i]] = 1;
	}
	for(int i=0;i<m;i++){
		scanf("%d",&b[i]);
		dd2[b[i]] = 1;
	}
	for(int i=0;i<1000;i++){
		if(dd1[i] == 1 && dd2[i] == 1) printf("%d ",i);
	}
	printf("\n");
	for(int i=0;i<1000;i++){
		if(dd1[i] == 1 && dd2[i] == 0) printf("%d ",i);
	}
	printf("\n");
	for(int i=0;i<1000;i++){
		if(dd1[i] == 0 && dd2[i] == 1) printf("%d ",i);
	}
	return 0;
}

