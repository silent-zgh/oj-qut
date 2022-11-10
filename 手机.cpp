#include <stdio.h>
int main (){
	char a[1010];
	gets(a);
	int i,sum=0;
	for(i=0;a[i]!='\0';i++){
		if(a[i]=='a'||a[i]=='d'||a[i]=='g'||a[i]=='j'||a[i]=='m'||a[i]=='p'||a[i]=='t'||a[i]=='w'||a[i]==' '){
			sum++;
		}else if(a[i]=='b'||a[i]=='e'||a[i]=='h'||a[i]=='k'||a[i]=='n'||a[i]=='q'||a[i]=='u'||a[i]=='x'){
			sum+=2;
		}else if(a[i]=='c'||a[i]=='f'||a[i]=='i'||a[i]=='l'||a[i]=='o'||a[i]=='r'||a[i]=='v'||a[i]=='y') {
			sum+=3;
		}else if(a[i]=='s'||a[i]=='z'){
			sum+=4;
		}
	}
	printf("%d",sum);
}
