#include <stdio.h>
#include <string.h>
int main (){
	int temp;
	char a[110];
	char b[110];
	int c[110]={0};
	int d[110]={0};
	int z[110]={0};
	int cnt=0;
	scanf("%s",a);
	scanf("%s",b);
	int l,m,i;
	l=strlen(a);
	m=strlen(b);
	for(i=l;i>-1;i--){
		c[l-i]=(a[i]-48);
	}
	for(i=m;i>-1;i--){
		d[m-i]=(b[i]-48);
	}
	if(l>m){
		temp=l; 
	}else {
		temp=m;
	}
	for(i=1;i<=temp;i++){
		z[i]=z[i]+c[i]+d[i];
		if(z[i]>=10){
			z[i+1]++;
			z[i]-=10;
			if(i==temp){
				cnt++;
			}
		}
	
		cnt++;
	}
	for(i=cnt;i>0;i--){
		printf("%d",z[i]);
	}
}
