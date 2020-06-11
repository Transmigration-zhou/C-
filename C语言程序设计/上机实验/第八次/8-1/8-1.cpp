#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	FILE *fpa,*fpb,*fpc;
	int a;
	fpa=fopen("file-a.txt","r");
	fpb=fopen("file-b.txt","r");
	fpc=fopen("file-ab.txt","w");
	
	fscanf(fpa,"%d",&a);
	while(!feof(fpa)){
		fprintf(fpc,"%d ",a);
		fscanf(fpa,"%d",&a);
	}
	
	fscanf(fpb,"%d",&a);
	while(!feof(fpb)){
		fprintf(fpc,"%d ",a);
		fscanf(fpb,"%d",&a);
	}

	fclose(fpa);
	fclose(fpb);
	fclose(fpc);
	return 0;
}
