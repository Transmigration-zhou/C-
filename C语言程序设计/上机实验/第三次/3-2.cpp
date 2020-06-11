#include <stdio.h>
int mylength(char s[]) {
  	int i = 0;
	while (s[i] != '\0'){
    	i++;   
	}
	return i;
}

int main() {
	char str[100]="";
	int len = 0;
	
	gets(str);
	len = mylength(str);
	printf("%d\n", len);
	return 0;
}
