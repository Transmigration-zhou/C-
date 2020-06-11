#include <stdio.h>
#include <math.h>
int main()
{ 	int n=1; 
 	double temp=1.0,sum=1.0; 
 	
	do { 
   		n=n+2;
   		temp=temp/(n*(n-1));
   		sum+=temp;
    } while (fabs(temp)>=1e-6);
	 
 	printf("sum=%lf\n",sum);
 	return 0; 
 }
