#include<stdio.h>
int main()
{
	int N,R,C,P,a,t;
	int sub[120][120],king[120][120];
	int i,j,w;
	while(1)
	{
		scanf("%d %d %d %d",&N,&R,&C,&P);
		if(N==0)break;
		for(i=0;i<=R+1;i++){
			for(j=0;j<=C+1;j++){
				sub[i][j]=-1;
				king[i][j]=-1;
			}
		}
		for(i=1;i<=R;i++){
			for(j=1;j<=C;j++){
				scanf("%d",&king[i][j]);
				sub[i][j]=king[i][j];
			}
		}
		for(w=0;w<P;w++){
			for(i=1;i<=R;i++){
				for(j=1;j<=C;j++){
					a=king[i][j];t=(king[i][j]+1)%N;
					if(king[i][j+1]==t){
						sub[i][j+1]=king[i][j];
					}
					if(king[i][j-1]==t){
						sub[i][j-1]=king[i][j];
					}
					if(king[i+1][j]==t){
						sub[i+1][j]=king[i][j];
					}
					if(king[i-1][j]==t){
						sub[i-1][j]=king[i][j];
					}
				}
			}
		for(i=1;i<=R;i++){
			for(j=1;j<=C;j++){
				king[i][j]=sub[i][j];
			}
		}
		}
		for(i=1;i<=R;i++){
			for(j=1;j<=C-1;j++){
				printf("%d ",sub[i][j]);
			}
			printf("%d\n",sub[i][C]);
		}
	}
	return 0;
}