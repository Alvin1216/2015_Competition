#include<stdio.h>
#include<stdlib.h>
int cmp(const void* a,const void* b)
{
	return *(int*)a-*(int*)b;
}
int main()
{
	int m,n,i,j,d[20010]={0},k[20010]={0},head=0,t=0,cur=0;
	long long int coin=0;
	while(scanf("%d %d",&n,&m)){
		if(n==0&&m==0)break;
	for(i=0;i<n;i++)scanf("%d",&d[i]);
	for(i=0;i<m;i++)scanf("%d",&k[i]);
	qsort(d,n,sizeof(int),cmp);
	qsort(k,m,sizeof(int),cmp);
	cur=0;
	coin=0;
	for(i=0;i<m;i++){
			if(k[i]>d[cur]||k[i]==d[cur]){
				coin+=k[i];
				if(++cur==n)break;
			}
		}
	if(cur<n)printf("Loowater is doomed!\n");
	else printf("%lld\n",coin);
	}
	return 0;
}