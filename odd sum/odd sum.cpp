#include<stdio.h>
#include<string.h>
int main()
{
	int a,b,i,j,sum;
	int num;
	scanf("%d",&num);
	for(i=0;i<num;i++){
		scanf("%d",&a);
		scanf("%d",&b);
		if(a%2==0)a=a+1;
		if(b%2==0)b=b-1;
		sum=0;
		for(j=a;j<=b;){
			sum=sum+j;
			j=j+2;
		}
		printf("Case %d: %d\n",i+1,sum);
	}
	return 0;
}