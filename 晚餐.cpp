#include <stdio.h>
#include <string.h>
int main ()
{
	int n,i,z=0;
	int cnt;
	char a[100];
	scanf("%d",&n);
	while(n){
		cnt=0;
		scanf("%s",a);
		if( strcmp(a,"bowl")==0 || strcmp(a,"knife") ==0|| strcmp(a,"fork") ==0|| strcmp(a,"chopsticks")==0){
			cnt++; 
		}
		if(cnt>0){
			if(z>0)
			printf(" %s",a);
			else{
				printf("%s",a);
				z++;
			}
		}else{	
		}
		n--;
	}
}
