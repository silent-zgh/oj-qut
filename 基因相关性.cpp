#include <stdio.h>
#include <string.h>
int main ()
{
	int i; 
	double s;
	double cnt=0;
	char a[510];
	char b[510];
	scanf("%lf",&s);
	scanf("%s",a);
	scanf("%s",b);
	double l;
	l=strlen(a);
	for(i=0;i<l;i++){
		if(a[i]==b[i]){
			cnt++;
		}
	}
	double t;
	t= cnt/l;
	if(t>=s){
		printf("yes");
	}else {
		printf("no");
	}
} 
