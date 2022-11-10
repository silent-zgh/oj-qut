#include <stdio.h>
int main ()
{
	char s[100];
	int n,i,j,cnt=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",s);
		if(s[0]>=65&&s[0]<=71 ||s[0]>=82&&s[0]<=84){
			
		} else {
			cnt++;
		}
	}
	printf("%d",cnt);
}
