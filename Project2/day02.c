#include <stdio.h>
//전처리기 : 컴파일 전에 다른 파일
//#include <파일이름>  C에서 기본적으로 사용하는 파일 포함시
//#include "파일이름"  프로그래머가 직접 작성한 설명서를 포함시
//#define : 매크로 (치환시)
//<?>메크로를언제 사용하는가?

#define FULL 100
#define EMPTY 0 // 메크로 작성시 일반적으로  main안에 있는 글자와 구분하기 위해 대문자로 작성함

void main(void) {  // 프로젝트 1개에는 메인문 하나가 있어야 한다. 자바와 다르게(자바는 한 클래스에 여러개의 메인이 있어도 되지만!)   

	// \ : 이스케이프 문자(역슬래시) 
	// \n
//?	// \b : 한 문자 왼쪽으로 
	// \t
//?	// \r : 줄의 처음으로
	// \\ : 역슬래시 자체를 출력하고 싶을 경우
	// \" : 큰따옴표 자체를 출력하고 싶은 경우
	//<point> 이스케이프 문자 뒤에! 
	//printf("abcd\refgh");
	//printf("abcd\befgh");


	//printf("1\t123\t12345");
	//printf("역슬래쉬 : \\");
	//printf("역슬래쉬 : \");  오류 발생
	//printf("큰따옴표 : \" ");  // 큰 따옴표 출력하고 싶은 경우 이스케이프 문자 뒤에 작성해야!

	//(실습1)
	/*printf("\t\t\t### 회비 정보 ###\t\t\t\n");
	printf("=======================================================\n");
	printf("이름\t\t\t나이\t\t\t회비\n");
	printf("=======================================================\n");
	printf("홍길동\t\t\t15\t\t\t\\20000\n");
	printf("임꺽정\t\t\t20\t\t\t\\30000\n");
	printf("김말숙\t\t\t28\t\t\t\\50000\n");
	printf("=======================================================\n");
	printf("총합계\t\t\t\t\t\t\\10000\n");
	printf("=======================================================\n");
	*/

	// 가독성이 쉽게 프로그램을 짜야 하는 이유 : 나중에 오류 찾기가 쉽다!

	//printf("%d + %d = %d\n", 5, 10, 5 + 10);
	//printf("%d + %d = %d\n", 5, 10, 5 * 10);
	//printf("%d + %d = %d\n", 5, 12, 5 + 12);
	//printf("%d + %d =	\n", 5, 12, 5 + 12); // 데이터는 있지만 담을 그릇이 없음
	//printf("%d + %d = %d\n", 5, 12		  );  //담을 그릇을 있지만 데이터가 없음 
	//-> 쓰레기 값 출력됨! 그릇을 생성하는 순간 그 안에는 초기화된 값이 아닌 쓰레기값이 있다! 
//?	//printf("키 : %fcm\n", 193.4);
//?	//pirntf("몸무게 : %fkg\n", 99.4);

	//printf("%c, %c\n", A, a); //식별자 "A"가 정의되어 있지 않습니다. <- 컴퓨터가 컴파일 할때 이부분이 뭔지 모르겠다.
	//printf("%c, %c\n", 'A', 'a'); //작은 따옴표로 감싸야 컴파일 시에 문자로 받아들인다! 
	//printf("%c + %c = %c\n", '1', '1', '1' + '1'); //'1' + '1' 문자끼리 연산할 경우에 컴퓨터가 아스키코드 방식을 사용함!
	//printf("%d + %d = %d\n", '1', '1', '1' + '1'); //담는 그릇을 정수로 바꾸었을 경우 아스키코드 방식에 따라 문자를 숫자로 연결한다.
	//printf("%s\n", "C언어 수업");

	//<아스키코드> 문자 A = 65, a = 97  -> 기억!!!
	
	//제어문자 : %d(10진 정수), %f(10진형 부동 소수점수), %c(단일문자 character), %s(문자열 string) 
	//<?>한글은 2바이트여서...제어문자 c가 아닌 s로 받아야 함!

	//stackoverflow(영어), 생활코딩(유명) -> 코딩 질문

	char a[5] = "가";
	char b = 'c';
	printf("%s", a); // 반드시 string으로 받아야! 한 글자를 문자열로 받았다 하더라도!
	printf("\n");
	//printf("%c", a'); <오류> 식별자 a가 정의되어 있지 않습니다. -> ' ' 를 붙히지 않으면 컴퓨터는 a가 문자라고 읽지 못한다.
	printf("%c", b); 
	printf("\n");
	// 아무것도 안 붙으면 우리가 평소에 쓰는 십진수, 0이 붙으면 8진수, 0x가 붙으면 16진수
	
	//printf("173을 10진수로 출력 : %d\n", 173);
	//printf("173을 8진수로 출력 : %o\n", 173); //10진수를 8진수로 그릇에 담아서 바꿔서 출력하겠다.
	//printf("173을 16진수로 출력 : %x\n", 173); //10진수를 16진수 그릇에 담겠다.

	//printf("173을 8진수로 출력 : %o\n", 0173); //10진수를 8진수로 그릇에 담겠다.
	//printf("173을 16진수로 출력 : %x\n", 0x173); //10진수를 16진수 그릇에 담겠다.

	//printf("주유 최고상태 : %d\n", 100);
	//printf("주유 최저상태 : %d\n", 0);
	//printf("주유 최고상태 : %d\n", FULL);
	//printf("주유 최저상태 : %d\n", EMPTY);

	//printf("%d\n", 10); // 상수 : 재사용과 변경이 불가능, 일회용, 한 번 쓰고 벼려짐 
	//printf("%d\n", 10); 
	//첫 번째 줄 10과 두 번째 줄 10은 다르다. -> 상수이기 때문에 -> 메모리 낭비 -> 이름 공간(변수) 등장

	//CPU RAM(주기억장치) : 메모리 공간 

	// C는 double을 주로 사용

	// 대표적 자료형
	//정수 -> int(4byte), 실수 -> double(8byte), 문자 -> char(1byte) 
	//주의 한글은 2바이트, 알파벳은 1바이트 -> 한글은 문자열로 받아야!

	//국가 사업 -> 정보 처리 기사 반드시 따야! (2020년부턴가 어려워짐)
	//기사 미리 미리 따놔야! -> 입사 : 포트폴리오, 경력, 기사 

}