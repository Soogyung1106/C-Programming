#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
<do-while문 형태>
do{

}while( 조건);   
-> do 부분 1번 실행 후, 조건식이 '참'일 경우 위의 do 부분 계속 반복
*/


void main(void) {

	int choice;
	do {
		printf("\n");
		printf("**점심 메뉴 선택**\n");
		printf("1. 자장면\n");
		printf("2. 짬뽕\n");
		printf("3. 볶음밥\n");
		printf("\n");
		printf("메뉴를 선택하세요 : ");
		scanf("%d", &choice); 

	} while (choice <= 0 || choice >= 4); // <사고> 조건 : 1, 2, 3 외의 것을 눌렀을 경우 메뉴 반복 (0이하 or 4이상) => '논리합' 사용
	
	// choice 1,2,3 중에 하나 눌러서 반복문 빠져나왔을 경우
	
	printf("%d번을 누르셨습니다.\n", choice);

}