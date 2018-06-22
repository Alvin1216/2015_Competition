#include<stdlib.h>
#include<stdio.h>
int cmp(const void* a,const void* b)
{
	return *(int*)b-*(int*)a;
}
int main(){
	int n,k,a[110],count=0;
	scanf("%d %d\n",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	qsort(a,n,sizeof(int),cmp);
	for(int i=0;i<n;i++){
		if(a[i]>0){
			if(a[i]>a[k-1]||a[i]==a[k-1]){
				count++;
			}
		}
	}
	printf("%d\n",count);
	return 0;
}