//짝수, 홀수 구별 프로그램
#include <stdio.h>

void main(void) {

	int a;
	printf("짝수 홀수를 구별해 주는 프로그램입니다.\n");
	printf("수 입력 : ");
	scanf("%d", &a);

	if (a % 2 == 0) {
		printf("-> 짝수\n");
	}
	else {
		printf("-> 홀수\n");
	}

}