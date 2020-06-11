#include <stdio.h>
#include <string.h>
void  mystrcat(char *s1,char *s2){
	int i,j,length;
	length=strlen(s1);
	for(i=length,j=0;s2[j]!='\0';i++,j++){
		s1[i]=s2[j];
	} 
	s1[i]='\0';
}

int main(){
	char s1[]="abcd",s2[]="ef";
	mystrcat(s1,s2);
	printf("%s",s1);
    return 0;
}
