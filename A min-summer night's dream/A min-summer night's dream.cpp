#include<stdio.h>
#include<stdlib.h>
int cmp(const void *s1, const void *s2);
int main()
{
	int i,j,n,a[1000]={0},h;
	int Inumber,Onumber,keyIndex;
	while(scanf("%d",&n)==1){
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		Inumber=0;
		Onumber=0;
		qsort(a,n,sizeof(int),cmp);
		if(n%2==1){
			keyIndex=n/2;
			for(h=0;h<n;h++){
				if(a[h]==a[n/2]){
					Inumber++;
				}
			}
			printf("%d %d 1\n",a[keyIndex],Inumber);
		}else{
			keyIndex=(n/2)-1;
			if(a[keyIndex]<a[keyIndex+1]){
				int keyIndex2=keyIndex+1;
				for(h=0;h<n;h++){
					if(a[h]==a[keyIndex2]||a[h]==a[keyIndex]){
						Inumber++;
					}
				}
				Onumber=a[keyIndex2]-a[keyIndex]+1;
			}else{
				for(h=0;h<n;h++){
					if(a[h]==a[keyIndex]){
						Inumber++;
					}
				}
				Onumber=1;
			}
			printf("%d %d %d\n",a[keyIndex],Inumber,Onumber);
			}
			Inumber=0;
			Onumber=0;
		}
	return 0;
}
int cmp(const void *s1, const void *s2){
    return *(char *)s1 - *(char *)s2;
}