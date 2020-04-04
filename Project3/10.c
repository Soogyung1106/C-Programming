#include <stdio.h>
void ary_prn(int(*ap)[4]);
void prn_ary1(char**);

void main(void) {
	/*
	포인터 배열  vs  배열 포인터
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
	
	ary_prn(ary);  //<포인트1> 2차원 배열은 어떤 형태로 전달해야 하는가? 배열 포인터(괄호가 들어가는 포인터) 형식으로 전달

	return 0;
	*/


	/* 
	
	char *bp[4] = { "aaa", "bbb", "ccc", "ddd" };  // 포인터 배열 : 포인터들을 담고 있음
	int i, j;

	for (i = 0; i < 4; i++)
		printf("%s\n", bp[i]);

	prn_ary1(bp); //<포인트2>포인터 배열을 전달할 때는 더블 포인터로 취해준다.

	system("pause");
	*/
	int num;
	char grade;
	char name[20];
	while (1) {

		printf("학번을 입력하세요.\n");
		scanf_s("%d", &num);
		printf("이름을 입력하세요.\n");
		scanf_s("%s", &name, sizeof(name));
		printf("학점을 입력하세요(A/B/C/D)\n");
		getchar();
		scanf_s("%c", &grade, 1);
		

		printf("학번은 %d입니다 \n", num);
		printf("이름은 %s입니다 \n", name);
		printf("학점은 %c입니다 \n", grade);



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