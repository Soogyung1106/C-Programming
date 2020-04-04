/*
0을 입력하기 전까지 입력값을 모두 더해 주는 프로그램
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void) {

	int sum = 0;
	int value = 1;

	while(value){

		scanf("%d", &value);
		sum += value; //sum = sum + value
	}

	printf("합은 %d 입니다. \n", sum);

}