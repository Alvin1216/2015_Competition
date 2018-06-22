#include<stdio.h>
#include<string.h>
int main()
{
	int i,len,j=1;
	char a[200];
	while(gets(a)){
		len=strlen(a);
		for(i=0;i<len;i++){
			if(a[i]=='"'){
				j++;
				if(j%2==1){
					printf("''");
				}else{
					printf("``");
				}
					
			}else{
				printf("%c",a[i]);
			}
		}
		printf("\n");
	}
	return 0;
}