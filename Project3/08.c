/*
14장 2차원 문자 배열과 포인터 배열
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void) {
	/* 2차원 배열
	int score[2][2] 
	score = &score[0][0] = 
	//score[0] +1 

	초기화  -> [][4] : 행은 비워도 열은 반드시 채워야!
	int score[ ][4] = {1,2,3,4,5,6,7,8,9,10,11,12} 

	score[1][2] -> 배열의 요소 찾아갈 때 인덱스 0부터 세는거 잊지 않기!

	*/
	
	/*실습1
	int score[3][4];
	int i, j;
	int tot;
	double avg;

	for (i = 0; i < 3; i++) {
		printf("네 과목의 점수를 입력하세요 : ");
		for (j = 0; j < 4; j++) {
			scanf("%d", &score[i][j]); //<Point> 요소를 입력받을 때는 &를 앞에 꼭 붙힌다!
		}
	}

	for (i = 0; i < 3; i++) {
		tot = 0;
		for (j = 0; j < 4; j++) {
			tot += score[i][j];
		}
		avg = tot / 4.0;
		printf("%d 번째 학생 총점 : %d, 평균 : %.21lf\n", i+1,tot, avg);
	}
	*/

	/*실습2 

	int row_order[4][5], col_order[4][5];
	int i, j;
	int n = 0, m = 0;

	//행 우선순위로 배열에 저장하기
	for (i = 0; i < 4; i++) { //<Idea> 저장순서 : [0][0], [0][1], [0][2]
		for (j = 0; j < 5; j++) {
			n++;
			row_order[i][j] = n;
		}
	}

	//출력
	printf("행우선순서로 저장된 배열\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 5; j++) {
			printf("%5d", row_order[i][j]);
		}
		printf("\n");
	}

	//열 우선순위로 배열에 저장하기
	for (i = 0; i < 5; i++) {  //<Idea> 저장순서 : [0][0], [1][0], [2][0], [3][0]
		for (j = 0; j < 4; j++) {
			m++;
			col_order[j][i] = m;
		}
	}

	//출력
	printf("열우선순서로 저장된 배열\n"); 
	for (i = 0; i < 4; i++) { 
		for (j = 0; j < 5; j++) {
			printf("%5d", col_order[i][j]);
		}
		printf("\n");
	}
	
	*/

	/*
	<Point> 중괄호는 한 행을 나타낸다.
	int num [3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}}; 
	-> 첫 번째, 두 번째, 세 번째 행에 들어갈 것을 중괄호로 묶어줌으로써 가독성 높인다

	<Point> char 2차원 배열일 경우 : 한 행당 20바이트씩 입력 가능하다.
	char animal[5][20] = {"monkey", "elephant",....} ; 
	-> 길이가 20인 문자열을 5개 입력 가능하다.
	
	animal[0], animal[1]..  //행이 시작 주소임

	*/

	/*실습3
	char animal[][10] = { "monkey", "elephant", "dog", "sheep", "pig","lion", "tiger", "puma", "turtle", "fox" };
	//<Point> char형 2차원 배열 사고방식 : 길이가 10인 문자열을 n개 저장할 수 있는 배열이다! 
	//첫 번째 행에 "monkey", 두 번째행에 "elephant"...가 들어간다.

	int i;
	int count;

	count = sizeof(animal) / sizeof(animal[0]); //<Point> 전체 배열의 크기 / 부분배열 한개의 크기
	for (i = 0; i < count; i++)
		printf("%s\n", animal[i]); //<Point>이 부분 이해 잘! '행'만을 적으면 그 행의 시작주소여서 입력된 문자열들이 쭉 들어간다.
	
	*/

	/* 
	<Point> 2차원 배열의 남는 공간은 문자열 널문자들로 채워진다.
	*/
	
	/*
	'포인터 배열'이란? 
	char *ptr[5]; // 포인터 변수 5개를 저장하는 배열 
	char a;
	char b;

	<Point> char *ptr = "hello";  //포인터 변수에는 " " 문자열을 저장할 수 있었다.

	*/

	/* '문자열 상수'란?
	 문자열 상수는 "hello world"와 같이 프로그램 소스안에 포함된 문자열을 의미하는데 이러한 문자열 상수는 메모리 영역 중에서 텍스트 세그먼트 라고 불리는 특수한 메모리에 저장된다. 텍스트 세그먼트는 우리가 변경할 수 없는 메모리 영역이다.
	*/
	

	/*실습4
	char *ptrary[5];
	int i;

	ptrary[0] = "dog";
	ptrary[1] = "elephant";
	ptrary[2] = "horse";
	ptrary[3] = "tiger";
	ptrary[4] = "lion";

	for (i = 0; i < 5; i++)
		printf("%s\n", ptrary[i]); 
		//<Point> 배열의 요소를 출력할 때는 &를 안 붙힌 '값'을 적고, 배열의 요소를 사용자로 부터 입력받을 떄는 &를 붙힘으로써 어디에 값을 저장할지 '주소'를 표시해준다.
		*/


	/*
	scanf("%s", animal[4]); //<Point> 해석 : animal[4] = &animal[4][0] 주소로 입력을 받겠다!
	*/

	/*
	만약 배열의 요소를 바꾸고 싶을 경우 
	strcpy(ptrary[0], "change"); 
	ptrary[0]은 ptrary[0][0]의 시작주소임.

	ary[20] = "hello"; 초기화할 떄
	ary = " world"; 초기화 후  

	14장 피피티44까지 진도 나감!
	*/
	
	/*
	2차원 char 배열을 초기화 하는 방법
	1. 문자상수 ->  {{'c', 'a', 't'}, {'h', 'o', 'r', 's', 'e'}, {'l', 'i', 'o', 'n'}};
	2. 문자열상수 -> {"monkey", "horse", "dog"};
	*/
	
	/* 
	배운 개념 : 포인터 배열, 
	*/

}