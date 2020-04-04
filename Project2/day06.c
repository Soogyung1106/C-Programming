#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <string.h> //strcmp함수

void main(void) {

	//<if 명령어 종류> -> 2가지 뿐!(if, if ~ else)
	//<if의 활용> -> 중첩 if문, elif
	//<?> elif는 뭐였더라

	/*int rank;
	printf("너 이번에 로또 몇 등 됐어?");
	scanf("%d", &rank);

	if (rank == 1) {
	printf("외제차 사줘. 니가 사준다면서.\n");
	}
	else if (rank == 2) {
	printf("아이맥 프로 풀옵으로 사줘. 고맙다.\n");
	}
	else if (rank == 3) {
	printf("유모차 사줘. 니꺼랑 같은 걸로.\n");
	}
	else {
	printf("정신차려.그 돈으로 차를 사겠다.\n");
	}*/


	//<문제1, 문제2>
	//int a, b = 0; <?> 초기화 왜 안해도 되는지? 지역변수 쓰레기 값
	//int a, b, c;

	//printf("세 수를 입력해주세요.\n");
	//scanf("%d%d%d", &a, &b, &c);
	//
	//if (a > b && b > c) { //<오류> a> b > c 이런식으로 한줄에 작성x, &&나 || 연산자를 반드시 포함해야
	//	printf("%d이(가) 제일 큽니다.\n", a);  //<오류> 출력명령어 printf에는 주소연산자 붙히지 x
	//}
	//else if (a == b && b > c) {
	//	printf("%d(이)가 제일 큽니다.\n", a);  //<오류> 출력명령어 printf에는 주소연산자 붙히지 x
	//}
	//else if (a > b && b == c) {
	//	printf("%d이(가) 제일 큽니다.\n", a);   //<오류> 출력명령어 printf에는 주소연산자 붙히지 x
	//}

	//else if(a> c && c> b){
	//	printf("%d이(가) 제일 큽니다.\n", a);
	//}
	//else if (a== c && c> b) {
	//	printf("%d(이)가 제일 큽니다.\n", a);
	//}
	//else if (a> c&&a== b) {
	//	printf("%d이(가) 제일 큽니다.\n", a);
	//}
	//else if (b> a&&a>c) {
	//	printf("%d이(가) 제일 큽니다.\n", b);
	//}
	//else if (b== a&&a>c) {
	//	printf("%d(이)가 제일 큽니다.\n", b);
	//}
	//else if (b> a && a== c) {
	//	printf("%d이(가) 제일 큽니다.\n", b);
	//}
	//else if (b>c&& c>a) {
	//	printf("%d이(가) 제일 큽니다.\n", b);
	//}
	//else if (b==c && c>a) {
	//	printf("%d(이)가 제일 큽니다.\n", b);
	//}
	//else if (b>c && c==a) {
	//	printf("%d이(가) 제일 큽니다.\n", b);
	//}
	//else if (c>a && a>b) {
	//	printf("%d이(가) 제일 큽니다.\n", c);
	//}
	//else if (c==a && a>b) {
	//	printf("%d(이)가 제일 큽니다.\n", c);
	//}
	//else if (c>a &&  a==b) {
	//	printf("%d이(가) 제일 큽니다.\n", c);
	//}
	//else if(c>b && b>a) {
	//	printf("%d이(가) 제일 큽니다.\n", c);
	//}
	//else if (c==b && b>a) {
	//	printf("%d(이)가 제일 큽니다.\n", c);
	//}
	//else {  //<오류> else는 절대 조건문을 써주지 않는다.
	//	printf("%d이(가) 제일 큽니다.\n", c);
	//}

	//<사고> 세 수를 판단하는 것이기 때문에 한 수가 나머지 두 수보다 큰지만 판단하면 됨!!!
	//<good>
	//int a, b, c;
	//printf("세 수 입력 :");
	//scanf("%d%d%d", &a, &b, &c);

	//int big;
	//if(a > b && a>c) { // a가 나머지 두 수 보다 큰 경우 a가 제일 큰 수!
	//	big = a;
	//}
	//if (b > a && b>c) { // a가 나머지 두 수 보다 큰 경우 a가 제일 큰 수!
	//	big = b;
	//}
	//if (c > a && c>b) { // a가 나머지 두 수 보다 큰 경우 a가 제일 큰 수!
	//	big = c;
	//}

	//printf("가장 큰 수는 %d입니다.", big);

	//<문제3> 계산기 프로그램
	//(가정) 입력하는 두 수에서 첫 번째수가 우선적으로 더 큼!

	//<bad case>
	//int a, b;
	//int res;  //a와 b 두 수를 가지고 연산한 결과
	//char math[5];

	//printf("첫 번째 수가 두 번째 수보다 크도록!\n");
	//printf("두 수 입력 :");
	//scanf("%d%d", &a, &b);

	//getchar();  //1바이트 가져가게!  -> 문자 1개를 입력 받을 경우에만!
	//printf("연산자 선택 : ");
	//scanf("%s", math);

	//if (strcmp(math, "+")==0) {
	//	res = a + b;
	//}
	//if (strcmp(math, "-") == 0) {
	//	res = a - b;
	//}
	//if (strcmp(math, "*") == 0) {
	//	res = a * b;
	//}
	//if(strcmp(math, "/") == 0) {
	//	if (b == 0) {
	//		printf("0으로 나눌 수 없습니다.\n");
	//	}
	//	else {
	//		res = a / b;
	//	}
	//}
	//if (strcmp(math, "%") == 0) {
	//	if (b == 0) {
	//		printf("0으로 나눌 수 없습니다.\n");
	//	}
	//	else {
	//		res = a % b;
	//	}
	//}

	//printf("연산 결과 : %d\n", res);

	//<good case>
	// strcmp 함수를 사용하지 않고 조건문을 만드는 방법
	// <?>문자열 같은 경우 '==' 사용 x, 한 글자인 문자는 가능 o

	/*
	<주의> if 조건문 안에서!
	(1) 문자열을 비교할 경우 -> '문자열'비교 함수인 strcmp함수 사용해야
	ex) strcmp(str1, str2)==0, strcmp(str, "yes")==0    (단, str은 배열로 선언되어 있어야!)
	(2) 문자 1개를 비교할 경우 -> str == 'a' 로 조건문 안에 바로 들어갈 수 있다!
	ex) char op; scanf("%c", &op), if(op =='+')
	<?> 문자열 같은 경우 '==' 사용 x, 한 글자인 문자는 가능 o
	*/

	//int a, b;
	//int res = 0;  //a와 b 두 수를 가지고 연산한 결과
	//char math;

	//printf("첫 번째 수가 두 번째 수보다 크도록!\n");
	//printf("두 수 입력 :");
	//scanf("%d%d", &a, &b);

	//getchar();  //1바이트 가져가게!  -> 문자 1개를 입력 받을 경우에만!
	//printf("연산자 선택 : ");
	//scanf("%c", &math);  //<오류> 문자 %c는 & 반드시 붙혀주고, 문자열 %s는 & 안 붙혀줘도 된다! 

	//if (math=='+') {
	//	res = a + b;
	//}
	//if (math == '-') {
	//	res = a - b;
	//}
	//if (math == '*') {
	//	res = a * b;
	//}
	//if(math == '/') {
	//	if (b == 0) {
	//		printf("0으로 나눌 수 없습니다.\n");
	//	}
	//	else {
	//		res = a / b;
	//	}
	//}
	//if (math == '%') {
	//	if (b == 0) {
	//		printf("0으로 나눌 수 없습니다.\n");
	//	}
	//	else {
	//		res = a % b;
	//	}
	//}

	//printf("연산 결과 : %d\n", res);

}