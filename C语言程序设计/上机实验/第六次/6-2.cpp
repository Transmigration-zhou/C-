#include <stdio.h>
#include <string.h>
#include<stdlib.h> 
int CountWord(char *s){
	int len=strlen(s),ans=0,word=0; //wordÅĞ¶ÏÊÇ·ñÓĞ×Ö·û´æÔÚ 
	for(int i=0;i<len;i++){
		if(*(s+i)==' '){
			word=0;
		}
		else if(word==0){
			word=1;
			ans++;
		}
	}
	return ans;
}
int main() {
	char *s;
	int ans;
	s=(char *)malloc(100);
	gets(s);
	ans=CountWord(s);
	printf("%d",ans);
    return 0;
}
