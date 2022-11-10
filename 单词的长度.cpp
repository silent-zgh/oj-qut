#include <stdio.h>
#include <string.h> 
int main ()
{
	char s[1010];
	gets(s);
	int i,l,cnt=0,z=0;
	l=strlen(s);
	for(i=0;i<l;i++){
		if(s[i]!=' '){
			cnt++;
		}else {
			if(cnt>0){
				if(z>0){
					printf(",%d",cnt);
					cnt=0;
				}else {
					printf("%d",cnt);
					cnt=0;
					z++;
				}
				
			}
		}
	}
	if(cnt>0) 
	printf(",%d",cnt);
}
