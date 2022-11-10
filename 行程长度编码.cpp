#include <stdio.h>
#include <string.h>
int main()
{
	int a[24];
	char s[1010];
	scanf("%s",s);
	int j,i,cnt=1;
	j=strlen(s);
	for(i=1;i<=j;i++)
	{
		if(s[i]==s[i-1] || s[i]==s[i-1]-32 || s[i]==s[i-1]+32){
			cnt++;
		}else {
			if(s[i-1]>91){
				printf("(%c,%d)",s[i-1]-32,cnt);
				cnt=1;
			}else{
				printf("(%c,%d)",s[i-1],cnt);
				cnt=1;
			}
		}
	}
} 
