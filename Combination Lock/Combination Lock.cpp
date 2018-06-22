#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,d,total;
	while(1){
		total=0;
		scanf("%d %d %d %d",&a,&b,&c,&d);
		if(a==0&&b==0&&c==0&&d==0)break;
		total=720+360;
		if((a-b)>0){
			total=total+(abs(a-b)*9);
		}else if((a-b)<0){
			total=total+(360-(abs(a-b)*9));
		}
		if((b-c)<0){
			total=total+(abs(b-c)*9);
		}else if((b-c)>0){
			total=total+(360-(abs(b-c)*9));
		}
		if((c-d)>0){
			total=total+(abs(c-d)*9);
		}else if((c-d)<0){
			total=total+(360-(abs(c-d)*9));
		}
		printf("%d\n",total);
	}
	return 0;
}
/*
	看圖自己對著算，指針轉，數字也會一起轉
	答案就會出來喔喔
	http://luckycat.kshs.kh.edu.tw/homework/q10550.htm
*/