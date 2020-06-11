#include <stdio.h>
int main()
{
  	int sum=0;
  	printf("取出一分、二分、五分数量分别是：\n") ;
  	for (int a=0;a<20;a++)
  	{	for (int b=0;b<20;b++)
		{
			for (int c=0;c<20;c++)
			{
				if(a+b+c==20&&a+2*b+5*c==60)
				{
					printf("%d %d %d\n",a,b,c);
					sum++;
				}
			}
		}
	}		
  	printf("取法的数量：%d",sum); 
  	return 0;
}
