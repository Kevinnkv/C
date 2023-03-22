#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c,d,e,f;
	scanf("%d %d",&a,&b);
	scanf("%d %d",&c,&d);
	scanf("%d %d",&e,&f);
	int s=a*b+c*d+e*f;
	int res=sqrt(s);
	int check=0;
	int k;
	if(res*res==s){
		if(b>a){
			int tmp=a;
			a=b;
			b=tmp;
		}
		if(d>c){
			int tmp=c;
			c=d;
			d=tmp;
		}
		if(f>e){
			int tmp=e;
			e=f;
			f=tmp;
		}
		if(a==c==e && (b+d+f)==a) check=1;
		else{
			if(a==res){
				k=res-b;
				if(c==k||d==k && e==k||f==k){
					check=1;
				}
			}
			if(c==res){
				k=res-d;
				if(a==k||b==k && e==k||f==k){
					check=1;
				}
			}
			if(e==res){
				k=res-f;
				if(c==k||d==k && a==k||b==k){
					check=1;
				}
			}
		}
	}
	if(check==1) printf("YES");
	else printf("NO");
	return 0;
}