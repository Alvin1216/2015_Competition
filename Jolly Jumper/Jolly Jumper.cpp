#include<stdio.h>
#include<stdlib.h> 
int main()
{
	int num,a[3002],i,j=0,k,r;
	while(scanf("%d",&num)!=EOF){
		int flag=0,count[3002]={0};
		for(i=0;i<num;i++){
			scanf("%d",&a[i]);
		}
		for(j=1;j<num;j++){
			r=abs(a[j]-a[j-1]);
			count[r]=1;
		}
		for(r=1;r<num;r++){
			if(count[r]==1)flag++;
		}
		if(flag==(num-1)){
			printf("Jolly\n");
		}else{
			printf("Not jolly\n");
		}
	}
	return 0;
}