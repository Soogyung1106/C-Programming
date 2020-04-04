#include <stdio.h>

void main(void) {
	
	//do ~ while 실습
	/*
	int kor;

	do {
		printf("국어점수 입력 : ");
		scanf("%d", &kor);
	} while (kor >= 0 && kor <= 100); //<주의> 이 반복문이 돌아가게 만들 조건식을 여기다 작성하는 것임!
									//<주의> 이 반복문을 break시킬 조건을 여기다 적는 것이 아님!
	*/

	/* while의 경우
	while (1) {
		printf("국어점수 입력 : ");
		scanf("%d", &kor);

		if (kor < 0 || kor>100) {
			break;
		}
	}
	*/

	//for 실습
	/*(1)
	int i = 1;  //이 방식 권장x

	for (; i <= 10; i++) { //<주의> for문 조건문 안에 내용물은 없더라도 ;은 반드시 있어야!
		printf("%d번째 반복\n", i); 
	}
	printf("%d\n", i);  // <주의>i는 11상태로 출력됨! 
	// -> 왜냐하면 i는 11인 상태로 끝나기 때문에(조건에 안 맞아서 for문을 중단했을 뿐)

	*/
	//<실행순서> 초기화 // ->조건 확인->실행->증감-> // 조건 확인->실행->증감->... (반복)

	/*(2)
	//<?> for문 조건문에 쓰인 지역 변수 i는 그 자리에서 선언과 동시에 초기화가 된것이기 때문에
	//for문 밖에서 사용한다고 선언해주거나 지역변수라고 초기화시킬 필요x 
	
	for (int i = 1; ; i++) { //무한 반복됨 -> break 될 조건이 없기 때문에(권장x)
		printf("%d번째 반복\n", i);
	}
	*/
	
	/*(3)
	for (int i = 1; i <= 10; i++) { //식보다 1증가 혹은 감소식을 제일 많이 씀!
		printf("%d번째 반복\n", i);
	}
	*/

	//<참고> for문을 어떻게 적어야할 지 모르겠다면 우선 다 하나하나 적어보면서 규칙을 가지고 변하는 수를 변수로 정하기!
	
	/* <문제1>
	printf("1부터 100까지의 정수\n");
	for (int i = 1; i <= 100; i++) {
		printf("%d\n", i);
	}
	
	printf("\n");

	printf("53부터 25까지의 정수\n");
	for (int i = 53; i >= 25; i--) {
		printf("%d\n", i);
	}
	printf("\n");

	//30부터 60까지의 홀수
	printf("30부터 60까지의 홀수\n");
	for (int i = 31; i <= 60; i+=2) {
		printf("%d\n", i);
	}
	//(방법2) -> 조건문의 증감식을 i++로 주로 쓰고 그 안에서 조건을 더 다는 식으로 for문 많이 작성함!
	for (int i = 31; i <= 60; i++) {
		if( i % 2 == 1)
			printf("%d\n", i);
	}


	printf("\n");

	//100부터 0까지의 5의 배수
	printf("100부터 0까지의 5의 배수\n");
	for (int i = 100; i >= 0; i-=5) {
		printf("%d\n", i);
	}

	for (int i = 100; i >= 0; i -= 5) { //다른 방법!
		if (i % 5 == 0) {  //
			printf("%d\n", i);
		}
	}
	*/

	//<문제2>
	/*int a = 65;
	printf("%c\n", a); A = 65 아스키코드표 이용! */

	//printf("A부터 Z까지의 알파벳\n");

	//<내 방식>
	//for (int i = 65; i <= 90; i++) {  
	//	printf("%c\n", i); // <사고> 아스키코드표 이용
	//}

	//<방법2>
	/*
	for (char a = 'A'; a <= 'Z'; a++) { //<생각> 이렇게도 가능..<?>어떻게??
		printf("%c\n", a); // <사고> 아스키코드표 이용
	}

	printf("\n");
	
	printf("1.0부터 30.0까지 0.5씩 증가\n");

	for (double i = 1.0; i <= 30.0; i += 0.5) {
		printf("%.1f\n", i);
	}
	printf("\n");

	printf("숫자 1개를 입력받아 1부터 해당 수까지 출력\n");
	int input;
	printf("숫자 입력 :");
	scanf("%d", &input);

	for (int i = 1; i <= input; i++) {
		printf("%d\n", i);
	}
	printf("\n");


	printf("숫자 1개를 입력받아 1부터 해당 수까지 홀수 출력\n");
	int put;
	printf("숫자 입력 :");
	scanf("%d", &put);

	for (int i = 1; i <= put; i++) {
		if (i % 2 == 1) {
			printf("%d\n", i);
		}
	}
	printf("\n");
	*/
	
	//<문제3> for문과 scanf를 사용하여 입력받은 수까지의 합계 구하기
	/*
	int input;
	int sum=0; // 합계를 담아낼 누적변수
	printf("수 입력 :");
	scanf("%d", &input);

	for (int i = 1; i <= input; i++) {
		sum += i; 
	}
	printf("1~%d 합계 : %d\n", input, sum);
	*/

}