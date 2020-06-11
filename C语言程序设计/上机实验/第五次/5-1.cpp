#include <stdio.h>
int main(){
	int a,b,n=5;
	char s='A';
	for(int i=1;i<=n;i++){
		b=2*i-1;
		a=n-i;
		while(a--){
			printf(" ");
		}
		while(b--){
			printf("%c",s);
		}
		printf("\n");	 
		s++;
	}
    return 0;
}
