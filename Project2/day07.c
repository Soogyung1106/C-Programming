#include <stdio.h>

void main(void) {

	//int rank;
	//printf("너 이번에 로또에서 몇등했니?");
	//scanf("%d", &rank);

	//switch (rank) {  //<주의> switch~case와 break는 항상 세트로 생각!! 
	//case 1:
	//	printf("외제차 사줘\n");
	//	break; //<주의> break는 선택이 아니라 매 케이스마다 필수적으로 반드시 있어야 되는 것! 없으면 안 됨!
	//			//<역할>스캐너가 그 아래로 내려가서 읽는 것을 막게 함
	//case 2:
	//	printf("아이맥 사줘");
	//	break;
	//case 3:
	//	printf("유모차 사줘");
	//	break;
	//default:
	//	printf("정신차려");
	//}

	//<?>스캐너


	//<문제1>
	/*
	int a, b;
	int res = 0;  //a와 b 두 수를 가지고 연산한 결과
	char math;

	printf("첫 번째 수가 두 번째 수보다 크도록!\n");
	printf("두 수 입력 :");
	scanf("%d%d", &a, &b);

	getchar();  //1바이트 가져가게!  -> <주의> 문자열을 입력받을 경우는 안 해도됨!! 문자 1개를 입력 받을 경우에만!
	printf("연산자 선택 : ");
	scanf("%c", &math);

	switch (math) {
	case '+':
	res = a + b;
	printf("연산 결과 : %d\n", res);
	break;
	case '-':
	res = a - b;
	printf("연산 결과 : %d\n", res);
	break;
	case '*':
	res = a * b;
	printf("연산 결과 : %d\n", res);
	break;
	case '/':
	if (b == 0) {
	printf("0으로 나눌 수 없습니다.\n");
	}
	else {
	res = a / b;
	printf("연산 결과 : %d\n", res);
	}
	break;
	case '%':
	if (b == 0) {
	printf("0으로 나눌 수 없습니다.\n");
	}
	else {
	res = a % b;
	printf("연산 결과 : %d\n", res);
	}
	break;
	default:
	printf("연산자를 잘못 누르셨습니다.\n");
	}
	*/

	//<문제2> switch~case 이용
	//세 과목(국어, 영어, 수학) 성적 입력 -> 합계, 평균 출력 -> 학점 출력

	int kor, eng, math;
	int total;
	double aver;

	printf("국어, 영어, 수학 점수 입력 : ");
	scanf("%d%d%d", &kor, &eng, &math);

	total = kor + eng + math;
	printf("합계 : %d\n", total);

	aver = (double)(kor + eng + math) / 3;  // 강제형변환
	printf("평균 : %.2f\n", aver);

	//switch 조건문에 계산식이 들어가야! -> 표에서 규칙을 찾아야!
	//<학점 판정 기준>
	//100~90 aver+0 ~ aver+10
	//89~80  aver+11 ~ aver+20
	//79~70
	//69~60
	//59~0

	// 변수(숫자 혹은 문자)
	switch (100 - aver) {
	case(0):
		printf("학점 : A\n");
		break;
	case(21):
		printf("학점 : B\n");
		break;
	case(31):
		printf("학점 : C\n");
		break;
	case(31):
		printf("학점 : D\n");
		break;
	default:
		printf("학점 : F\n");

	}


}