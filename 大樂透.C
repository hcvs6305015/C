#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int m,a,i;	
	for(i=0;i<=5;i++){
	printf("請輸入一個數字:");
	scanf("%d",&a);
    }
	for(i=0;i<=5;i++){
	printf("\n數字:%d",m);
	m=rand()%49+1;
	if(a==m)
	printf("恭喜答對");
	else
	printf("答錯了");
}
	return 0;
}
