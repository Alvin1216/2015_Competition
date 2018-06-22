#include<stdio.h>
int main()
{
	int n,i,j,r,a[10],temp;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(r=0;r<3;r++){
		scanf("%d",&a[r]);
		}
		for(int y=0;y<3;y++){
			for(j=y+1;j<3;j++){
				if(a[j]<a[y]){
					temp=a[y];
					a[y]=a[j];
					a[j]=temp;
				}
			}
		}
		printf("Case %d: %d\n",i+1,a[1]);
	}
	return 0;
}
