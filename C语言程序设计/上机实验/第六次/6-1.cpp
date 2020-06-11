#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
#include<math.h> 
double MyToDouble(char *s){
	int result1=0,result2=0;
	double result;
	int len=strlen(s),t=1,point=-1;
	for(int i=0;i<len;i++){
		if(*(s+i)=='-')	
			t=-1;
		else if(*(s+i)<='9'&&*(s+i)>='0')
			result1=result1*10+(*(s+i)-'0');
		else if(*(s+i)=='.'){
			point=i;
			break;	
		}
	}	
	if(point!=-1){
		for(int j=point+1;j<len;j++){
			if(*(s+j)<='9'&&*(s+j)>='0')
				result2=result2*10+(*(s+j)-'0');	
		}
	}
	result=result1+pow(0.1,len-point-1)*result2;
	result*=t;
	return result;
}

int main()                             
{                                        
	char *s;
	double ans;
	//s=(char *)malloc(20);   
	scanf("%s",s);
	ans=MyToDouble(s);
	printf("%llf",ans);
	return 0;
}
