#include <stdio.h>
void ary_prn(int(*ap)[4]);
void prn_ary1(char**);

void main(void) {
	/*
	������ �迭  vs  �迭 ������
	int * arr[4]         int (*arr) [4]
	*/
	/*
	int ary[3][4] = { { 1,2,3,4 },{ 5,6,7,8 },{ 9, 10, 11, 12 } };
	int(*ap)[4];
	int i, j = 0;
	ap = ary;
	for (j = 0; j< 3; j++) {
		for (i = 0; i< 3; i++) {
			printf("%5d", ap[j][i]);
		}
	}

	//int ary[3][4];
	//int(*ap)[4];
	//ap = ary;
	
	*/


	/*
	int ary[3][4] = { { 1,2,3,4 },{ 5,6,7,8 },{ 9, 10, 11, 12 } };
	
	ary_prn(ary);  //<����Ʈ1> 2���� �迭�� � ���·� �����ؾ� �ϴ°�? �迭 ������(��ȣ�� ���� ������) �������� ����

	return 0;
	*/


	/* 
	
	char *bp[4] = { "aaa", "bbb", "ccc", "ddd" };  // ������ �迭 : �����͵��� ��� ����
	int i, j;

	for (i = 0; i < 4; i++)
		printf("%s\n", bp[i]);

	prn_ary1(bp); //<����Ʈ2>������ �迭�� ������ ���� ���� �����ͷ� �����ش�.

	system("pause");
	*/
	int num;
	char grade;
	char name[20];
	while (1) {

		printf("�й��� �Է��ϼ���.\n");
		scanf_s("%d", &num);
		printf("�̸��� �Է��ϼ���.\n");
		scanf_s("%s", &name, sizeof(name));
		printf("������ �Է��ϼ���(A/B/C/D)\n");
		getchar();
		scanf_s("%c", &grade, 1);
		

		printf("�й��� %d�Դϴ� \n", num);
		printf("�̸��� %s�Դϴ� \n", name);
		printf("������ %c�Դϴ� \n", grade);



	}

}

void ary_prn(int(*ap)[4]) {
	int i, j = 0;
	
	for (j = 0; j< 3; j++) {
		for (i = 0; i< 4; i++) {
			printf("%5d", ap[j][i]);
		}
		printf("\n");
	}
}


void prn_ary1(char **bp) {
	int i;
	for (i = 0; i < 4; i++)
		printf("%s\n", bp[i]);

}