#include<stdio.h>
int main()
{
	int numbers,A[10010],i,count=0,j,r;
	while(scanf("%d",&numbers)){
		if(numbers==0)break;
		for(i=0;i<numbers;i++){
			scanf("%d",&A[i]);
		}
		count=0;
		for(i=0;i<numbers;i++){
			count+=(A[i]>A[(i+1)%numbers])&&(A[i]>A[(i-1+numbers)%numbers]);
			count+=(A[i]<A[(i+1)%numbers])&&(A[i]<A[(i-1+numbers)%numbers]);
		}
		printf("%d\n",count);
	}
	return 0;
}