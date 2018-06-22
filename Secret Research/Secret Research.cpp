#include<stdio.h>
#include<string.h>
int main()
{
	char a[200];
	int n,i,j,len;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		gets(a);
		len=strlen(a);
		if(a[len-1]=='5'&&a[len-2]=='3')printf("-\n");
		else if(a[0]=='9'&&a[len-1]=='4')printf("*\n");
		else if(a[0]=='1'&&a[1]=='9')printf("?\n");
		else if(strcmp(a,"1")==0||strcmp(a,"4")==0||strcmp(a,"78")==0)printf("+\n");
	}
	return 0;
}

