#include<stdio.h>
int main()
{
	int times,i,j,temp,v,m,n;
	int a[20];
	scanf("%d",&times);
	for(i=0;i<times;i++){
		
		scanf("%d",&v);
		for(j=0;j<v;j++){
			scanf("%d",&a[j]);
		}
		for(m=0;m<v;m++){
			for(n=m+1;n<v;n++){
				if(a[n]>a[m]){
					temp=a[m];
					a[m]=a[n];
					a[n]=temp;
				}
			}
		}
		printf("%d\n",(a[0]-a[v-1])*2);
	}
	return 0;
}