#include <stdio.h>
int main() {
  	int a[10][10] = { 0 };  	
	int t, i, j;
  	
	for (i = 0; i < 3; i++) {
    	for (j = 0; j < 3; j++) {
      		scanf("%d", &a[i][j]);
    	}
  	}
  	printf("\n");
  	for (i = 0; i < 3; i++) {
    	for (j = 0; j < 3; j++) {
      		printf("%d ", a[i][j]);
      		if (j == 2)  printf("\n");
    	}
  	}
 	printf("\n");	
	for (int i = 0; i < 2; i++) {
    	for (int j = i; j < 3; j++) {
      	t = a[i][j];
      	a[i][j] = a[j][i];
      	a[j][i] = t;
   		}
  	}
  	for (int i = 0; i < 3; i++) {
    	for (int j = 0; j < 3; j++) {
      		printf("%d ", a[i][j]);
      		if (j == 2) printf("\n");
    	}
 	}
  	return 0;
}
