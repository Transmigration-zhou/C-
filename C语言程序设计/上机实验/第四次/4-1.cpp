#include<stdio.h>
int sum_yinzi(int n)
{	int sum=0;
	for(int i=1; i<n; i++){	
		if(n%i==0)	sum+=i;
    }
    return sum;
}

int main()
{
    int a,b;
    printf("5000以内所有的亲密数:\n");
    for(a=1;a<5000;a++){
    	b=sum_yinzi(a);
        if(a==sum_yinzi(b)&&sum_yinzi(b)<b) 
            printf("%d——%d\n",a,b);  
    }
    return 0;
}
