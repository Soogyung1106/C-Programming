#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
<do-while�� ����>
do{

}while( ����);   
-> do �κ� 1�� ���� ��, ���ǽ��� '��'�� ��� ���� do �κ� ��� �ݺ�
*/


void main(void) {

	int choice;
	do {
		printf("\n");
		printf("**���� �޴� ����**\n");
		printf("1. �����\n");
		printf("2. «��\n");
		printf("3. ������\n");
		printf("\n");
		printf("�޴��� �����ϼ��� : ");
		scanf("%d", &choice); 

	} while (choice <= 0 || choice >= 4); // <���> ���� : 1, 2, 3 ���� ���� ������ ��� �޴� �ݺ� (0���� or 4�̻�) => '����' ���
	
	// choice 1,2,3 �߿� �ϳ� ������ �ݺ��� ���������� ���
	
	printf("%d���� �����̽��ϴ�.\n", choice);

}