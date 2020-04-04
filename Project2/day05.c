// 이름 -> 문자열, 나이 -> 정수, 성별-> 문자, 혈액형 -> 문자열 키-> 실수   
//scanf로 입력받은 후 그 결과를 출력하기
#include <stdio.h>

void main(void) {

	//<문제1>
	char name[30];
	printf("이름 입력 : ");
	scanf("%s", name);

	// 치고서 엔터 전에는 '버퍼'라는 임시공간에 존재 -> 엔터 치면 버퍼에 들어가 있는 데이터는 변수 메모리 공간으로 들어가고 \n이 들어감

	int age;
	printf("나이 입력 : ");
	scanf("%d", &age);
	//
	////<해결책>
	//getchar(); // 1바이트만 가져와라! 버퍼를 비우는 기능은x, 1바이트만 가져와라!
	////while(getchar() != '\n'){}  -> 비슷한 기능!	(나중에 배울것임)
	////<?> 그럼 getchar()은 주로 어떤어떤 기능으로 많이 사용됨?

	/*char gender;
	printf("성별 입력 : ");
	scanf("%c", &gender);*/  //<오류> 한문자만 받을 수 있는 %c 그릇으로 받아서, '버퍼'라는 임시공간에 남아있던 \n이 자기 맘대로 
						//gender라는 이름의 변수 메모리 공간에 들어가게됨

	//<POINT> '여러개를 입력'받을 경우 중간에 '문자 글자 1개'만 받을 경우 반드시 문자를 입력받기 전 
	//getchar(); 명령어를 적어줘야!!

	/*char bloodT[30];
	printf("혈액형 입력 : ");
	scanf("%s", bloodT);

	double height;
	printf("키 입력 : ");
	scanf("%lf", &height);
	
	printf("\n");
	printf("<출력>\n");
	printf("이름 : %s\n", name);
	printf("나이 : %d\n", age);
	printf("성별 : %c\n", gender);
	printf("혈액형 : %s\n", bloodT);
	printf("키 : %.3f\n", height); */


	//int a, b;
	//
	////<bad case>
	///*printf("정수 입력 : ");
	//scanf("%d", &a);
	//
	//printf("정수 입력 : ");
	//scnaf("%d", &b);*/  //코딩 비효율적(똑같은 작업 반복)

	////<good case>
	//printf("정수 2개 입력 : ");
	//scanf("%d%d", &a, &b);  //<오류> scanf에 \n 붙히면 결과 이상하게 나옴
	//printf("%d, %d\n", a, b);
	/*
	<scanf 사용시 주의>
	(1) scanf 입력 명령어 안에는 역슬래시\n 절대 넣어주는 것 아님!! 엔터칠 때 알아서 \n이 버퍼공간에 들어가므로
	(2) 데이터를 scanf 명령어 1줄을 통해 한 번에 여러개 받을 경우( " "안에 데이터 여러개 받을 경우)
	-> 그릇만 따닥따닥 붙어서 써야함! 컴마(,)나 띄어쓰기 절대 포함x
	<왜?> 입력시 scanf는 스페이바나 앤터키를 데이터로 인식x, 알아서 숫자들만 데이터로 인식할 수 있음
	*/
	//<?> " "는 입력 형식임 
	//scanf("%d, %d", &a, &b); // 데이터 입려시 "10, 20"식으로 반드시 입력해줘야! 안 그럼 오류 뜸
	//scanf("%d %d", &a, &b); // 데이터 입력시 "10 20"식으로 반드시 입력해줘야! 안 그럼 오류 뜸

	//<문제2>  // <주의> 변수 한 곳에 몰아서 선언해주도록
	/*char name[30];
	printf("당신의 이름은 무엇입니까?");
	scanf("%s", name);

	printf("%s님의 나이는 몇 살입니까?", name);
	int age;
	scanf("%d", &age);

	printf("%s님의 나이는 %d살 입니다.\n", name, age);*/


	//<문제3>

	//int kor, eng, math;
	//int sum = kor + eng + math; <주의> 데이터 아님 넘겨받지 않은 변수들을 가지고 연산해서 변수에 넣으라는 것은
	// 기존에 있는 쓰레기값들을 가지고 연산하라는 뜻
	//<bad case>
	/*printf("국어 점수 : ");
	scanf("%d", &kor);
	printf("영어 점수 : ");
	scanf("%d", &eng);
	printf("수학 점수 : ");
	scanf("%d", &math);*/

	/*printf("국어, 영어, 수학점수 입력 : ");
	scanf("%d%d%d", &kor, &eng, &math);

	printf("\n");
	printf("합계 : %d\n", kor + eng + math);
	printf("평균 : %.2f\n", (double)(kor + eng + math) / 3);*/
	//<주의> 정수들끼리 연산하므로 소수로 나오게 하고 싶은 경우 강제형변환 시켜야!
	//<?> .1f, .2f, .3f의 차이 -> 반올림 기능 o, n번째 자리까지 출력(즉 n+1번째자리에서 반올림해서 n번째 자리까지만 출력함)


	//<sdl 체크시> -> 속성 -> C/C++   
	//1. scanf_s로 써줘야 
	//2. 오류 발생시 프로그래머한테 불편 => 때문에 프로그래머들이 잘 안 쓰는 트렌드임


}