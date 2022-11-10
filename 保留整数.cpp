#include <stdio.h>
#include <string.h> 
int main ()
{
	char a[90];
	char b[90];
	gets(a);
	int i,l,cnt=0;
	for(i=0;a[i]!='\0';i++){
		if(a[i]>57||a[i]<48){
			a[i]='*';
			if(a[i+1]=='\0'){
				printf("*");
			}
		}else {
			if(i>0){
				if(a[i-1]=='*'){
					printf("*");
					printf("%c",a[i]) ;
				}else {
					printf("%c",a[i]);
				}
			}else {
				printf("%c",a[0]);
			}
		}
	}
}

