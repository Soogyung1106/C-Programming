/*
0�� �Է��ϱ� ������ �Է°��� ��� ���� �ִ� ���α׷�
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

	printf("���� %d �Դϴ�. \n", sum);

}