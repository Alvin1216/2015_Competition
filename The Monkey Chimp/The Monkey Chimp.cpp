#include<stdio.h>
#include<stdlib.h>
int cmp(const void *s1, const void *s2)
{
    return *(int *)s1 - *(int *)s2;
}
int main(){
	int n,m,i,j,key;
	long long int max,min;
	long long int f_monkey[50005],m_monkey[50005];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lld",&f_monkey[i]);
	}
	scanf("%d",&m);
	for(j=0;j<m;j++){
		scanf("%lld",&m_monkey[j]);
	}
	qsort(f_monkey,n, sizeof(long long int), cmp);
	for(j=0;j<m;j++){
		max=-1;
		min=-1;
		key=0;
		for(i=0;i<n;i++){
			if(f_monkey[i]>m_monkey[j]){
				max=f_monkey[i];
				key=i;
				break;
			}
		}
		if(key==0){
			for(i=n-1;i>=0;i--){
				if(f_monkey[i]<m_monkey[j]&&f_monkey[i]!=m_monkey[j]){
					min=f_monkey[i];
					break;
				}
			}
		}else{
			for(i=key;i>=0;i--){
			if(f_monkey[i]<m_monkey[j]){
				min=f_monkey[i];
				break;
				}
			}
		}
		if(min!=-1&&max==-1)printf("%lld X\n",min);
		if(min==-1&&max!=-1)printf("X %lld\n",max);
		if(min!=-1&&max!=-1)printf("%lld %lld\n",min,max);
	}
	return 0;
}
