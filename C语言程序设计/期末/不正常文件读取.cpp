#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char line[128], *p;
	FILE *fp;
	
	printf("打开不正常文件 dict3.txt，即EOF没有另起一行:\n\n");
	
	fp= fopen("dict3.txt","r");
	if(fp==NULL){  
		printf("dict3.txt file open error.\n");
		exit(0);
	}
	
	printf("begin to read file...\n");
	p=fgets(line,128,fp); //读取数据，函数返回值 
    	
	while( !feof(fp))
	{	
		fputs(line,stdout);
	    p=fgets(line,128,fp);  //最后一行读不到，为什么？  

	}
	printf("\n\n End of reading ...\n");
	
    printf("最后一次读取，The P is: %d\n", p) ; //判断最后一次读取是否成功？ 
    
	printf("\n\n重新读取文件中数据...\n"); 
	rewind(fp);
    p=fgets(line,128,fp); 
    	
	while( !feof(fp))
	{	
		for(int i=0;line[i]!='\0';i++) 
			printf("%d ",line[i]);  //打印码值 
			
		putchar('\n');
	    p=fgets(line,128,fp);
	}
    
	fclose(fp);
	return 0;
}

