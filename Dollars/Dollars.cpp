#include<stdio.h>
int main(){
	int intnumbers,tailnumbers;
	int i,j;
	long long times[30005]={0};
	int dollar[]={5,10,20,50,100,200,500,1000,2000,5000,10000};
	times[0]=1;
	for(i=0;i<=10;i++){
		for(j=dollar[i];j<=30000;j++){
			times[j]=times[j]+times[j-dollar[i]];
		}
	}
	while(scanf("%d.%d",&intnumbers,&tailnumbers)!=EOF){
		if(intnumbers==0&&tailnumbers==0)break;
		else{
			printf("%3d.%02d%17lld\n",intnumbers,tailnumbers,times[intnumbers*100+tailnumbers]);
		}
	}
	return 0;
}