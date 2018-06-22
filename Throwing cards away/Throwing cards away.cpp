#include<stdio.h>
int main()
{
	int main[500],sub[500]={0};
	int i,j,m,n,cards;
	while(scanf("%d",&cards)!=EOF&&cards!=0){
		for(i=1;i<=cards;i++){
			main[i]=i;
		}
		int count=1;
		int add=cards+1;
		i=1;
		while(main[i]!=0){
			if(i%2==1){
				sub[count]=main[i];
				main[i]=0;
				count++;
				i++;
			}else{
				main[add]=main[i];
				main[i]=0;
				add++;
				i++;
			}
		}
		if(cards==1){
		printf("Discarded cards:\n");
		printf("Remaining card:");
		printf(" %d\n",sub[cards]);
		}else{
		printf("Discarded cards:");
		for(i=1;i<cards-1;i++){
			printf(" %d,",sub[i]);
		}
		printf(" %d\n",sub[cards-1]);
		printf("Remaining card:");
		printf(" %d\n",sub[cards]);
		}
	}
	return 0;
}