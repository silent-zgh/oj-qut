#include <stdio.h>
#include <string.h>
int main ()
{
	int n;
	int  cnt=0;
	char s[100];
	scanf("%d",&n);
	while (1){
		scanf("%s",s);
		if((cnt%n)!=0 || cnt==0 ){
			if(strcmp(s,"ChuiZi")==0){
				printf("Bu\n");
				cnt++;
			}else if(strcmp(s,"JianDao")==0){
				printf("ChuiZi\n");
				cnt++;
			}else if(strcmp(s,"Bu")==0){
				printf("JianDao\n");
				cnt++;
			}else if(strcmp(s,"End")==0){
				break;
			}
		}else{
			if(strcmp(s,"ChuiZi")==0){
				printf("ChuiZi\n");
				cnt=0;
			}else if(strcmp(s,"JianDao")==0){
				printf("JianDao\n");
				cnt=0;
			}else if(strcmp(s,"Bu")==0){
				printf("Bu\n");
				cnt=0;
			}else if(strcmp(s,"End")==0){
				break;
			}	
		}
	}
} 
