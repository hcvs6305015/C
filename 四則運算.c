#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	char c;
	printf("請輸入數值:");
	scanf("%d,%c,%d",&a,&c,&b);
	switch(c){
		case'+':
			printf("你的答案為%d",a+b);
			break;
		case'-':
			printf("你的答案為%d",a-b);
			break;	
}
	return 0;
}
