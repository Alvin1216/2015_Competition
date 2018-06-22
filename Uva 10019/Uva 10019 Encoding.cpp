#include<stdio.h>
#include<stdlib.h>
int binary(int);
int hex(int);

int main(){
	int n,a,b,abinary,ahex;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		a=0;abinary=0;ahex=0;
		scanf("%d",&a);
		abinary=binary(a);
		ahex=hex(a);
		printf("%d %d\n",abinary,ahex);
	}
	return 0;
}
int binary(int k){
	int ans=0;
	while(k>-1){
		ans=k%2+ans;
		k=k/2;
		if(k==0)break;
	}
	return ans;
}
int hex(int k){
	int ans=0,a[5];
	a[0]=(k%10)/1;
	a[1]=(k%100-a[0])/10;
	a[2]=(k%1000-a[0]-a[1])/100;
	a[3]=(k%10000-a[2]-a[1]-a[0])/1000;
	a[4]=(k%100000-a[3]-a[2]-a[1]-a[0])/10000;
	for(int i=0;i<5;i++){
		ans=binary(a[i])+ans;
	}
	return ans;
}