#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&j);
		j=j*567;
		j=j/9;
		j=j+7492;
		j=j*235;
		j=j/47;
		j=j-498;
		if(j<0)j=j*(-1);
		printf("%d\n",(((j%100)-(j%10))/10));
	}
	return 0;
}