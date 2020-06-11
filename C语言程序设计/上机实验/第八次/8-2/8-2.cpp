/*编写程序，将一个.CPP文件加上行号。如自己编程的程序为 myp.cpp，
读取该文件的每一行内容，加上行号后形成文件 "new_myp.cpp"。*/ 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	FILE *fp1,*fp2;
	char s[150];
	int c=1;
	fp1=fopen("myp.cpp","r");
	if(fp1==NULL){
		printf("文件打开失败!\n");
		exit(0);
	}
	fp2=fopen("new_myp.cpp","w");
	fgets(s,128,fp1);
	while(!feof(fp1)){
		fprintf(fp2,"%d:",c);
		fputs(s,fp2);
		c++;
		fgets(s,128,fp1);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}
