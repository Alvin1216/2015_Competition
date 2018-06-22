#include<stdio.h>
int main()
{
	int a[1000],b,i,j,count=0,na,nb;
	while(scanf("%d %d",&na,&nb)!=EOF){
		if(na==0&&nb==0)break;
		for(i=0;i<na;i++){
			scanf("%d",&a[i]);
		}
		for(j=0;j<nb;j++){
			for(i=0;i<na;i++){
				scanf("%d",&b);
				if(b==a[i]){
					count++;
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}