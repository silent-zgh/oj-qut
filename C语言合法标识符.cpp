#include <stdio.h>
#include <string.h>
int main(){
	char a[60];
	int n,j,i,l;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		gets(a);
		l=strlen(a);
		for(j=0;j<l;j++){
			if(a[j]>57&&a[j]<65 || a[j]>90&&a[j]<94 ||  a[j]==96 || a[j]>122||a[j]<48 || a[0]>=48&&a[0]<=57){
				printf("no\n");
				break;
			}else {	
			}
			if(j==l-1)
			printf("yes\n");
		}
	}
}
