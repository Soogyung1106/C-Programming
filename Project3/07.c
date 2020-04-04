#include <stdio.h>  
#include <string.h>
int *add_ten(int *);
void increase();

void main(void) {
	/*저번시간 복습
	strcpy(ary, "apple")
	strlen(ary)
	strcmp("c", "b") //비밀번호 입력해서 같냐 다르냐 확인할 때 많이 사용됨!
	strcat()
	*/

	/*실습1
	char password[] = "123456";
	char str[30];
	int val;
	while (1) {

		puts("비밀번호를 입력하세요.");
		gets(str);
		val = strcmp(password, str);
		printf("%d\n", val);

	}
	*/

	
	/* 실습2 :  일치하면 ok, 그렇지 않으면 invalid password 출력
	char password[] = "123456";
	char str[30];
	
	while (1) {

		puts("비밀번호를 입력하세요.");
		gets(str);
		
		if (!strcmp(password, str))
			puts("ok\n");
		else
			puts("invalid password\n");
	}

	*/


	/*실습3 : scanf와 gets의 차이
	char str[80];
	printf("문자열을 입력하세요.");
	//scanf_s("%s", str, sizeof(str));  //sizeof(str) 반드시 써주도록
	gets(str);
	printf("입력된 문자열 : %s\n", str);
	system("pause");
	*/

	 /*실습4 <printf와 puts의 차이 > 뒤에 \n이 포함되고 안 되고의 차이 

	printf("a");
	printf("b");
	printf("c");
	printf("\n");
	puts("a");
	puts("b");
	puts("c");
	system("puase");
	*/

	/* 실습5 :  문자 입출력 함수 getchar putchar 기본예제
	int ch;
	printf("문자열 하나를 입력하세요.");
	ch = getchar();
	printf("입력된 문자 : ");
	putchar(ch);
	printf("\n");
	system("pause");
	*/

	 //실습6 
	//int ch;
	//printf("문자 하나를 입력하세요.");
	//ch = getchar();
	//printf("입력된 문자의 아스키코드는 : %d\n", ch); //ch의 아스키코드 값 '정수'로 나옴
	//printf("입력된 문자의 %%c값은 : %c\n", ch); //ch의 아스키코드 값에서 대응되는 '문자'로 나옴
	//system("pause");
	

	//<point> ->버퍼는엔터를 칠때마다 데이터를 모아뒀다가 전달한다.


	/* 실습7
	char str[80];  //문자열을 저장할 배열
	int ch; //getchar 함수의 리턴값을 저장할 변수
	int i; //반복 제어변수

	printf("문자열을 입력하세요 : ");
	for (i = 0; i < 4; i++) { // i는 0부터 3까지 변하면서 4번 반복
		ch = getchar(); //키보드로부터 문자를 입력 받아 리턴한다.
		str[i] = ch; //리턴된 문자를 배열에 차례로 저장
	}

	str[i] = '\0'; //마지막에 널문자를 저장하여 문자열을 완성
	printf("입력된 문자열 : ");
	
	i = 0; //강제 초기화 
	while (str[i] = '\0') {
		putchar(str[i]); //화면에 문자 출력
		i++; //다음 문자로 이동
	}
	printf("\n");
	*/

	//13장 : 변수의 영역과 데이터의 전달 
	/*
	변수의 이름이 같다면 더 가까이 있는 변수를 쓴다.
	자동변수란? 함수 안에서 선언된 변수
	-> 생존기간은 함수가 호출되어 실행되는 동안임.
	-> 메모리의 위치 : 스택 영역(왜? 효율적인 메모리 관리를 위해)

	Call by value : 

	Call by reference : 

	*/

	

	/*실습8 : 자동변수의 포인터를 리턴하여 호출함수에서 다시 참고하는 것은 위험하다. // 오류
	
	int a = 10;
	int *ap;
	ap = add_ten(a);
	printf("a : %d\n", *ap);
	*/	
	
	/*정적 변수 static의 특징
	1. 굳이 초기화 하지 않아도 항상 0으로 초기화되어 있다.
	2. 함수가 닫혀도 값이 날라가지 않는다.
	*/


	/* 실습9 : static 정적 변수 <-> 자동변수 

	int i;
	for (i = 0; i < 5; i++) {
		increase();
	}
	*/

	/* 외부변수 = 전역변수 
	(장점) 
	(단점) 쓰지 않는 것을 추천! 모두가 값을 변경할 수 있으므로 변경시 어디서 변경되었는지 찾기 힘들다.
	*/

}

int *add_ten(int b) {
	b = b + 10;
	return &b;
}

void increase() {
	static int sum = 0;
	//int sum = 0;
	sum++;
	printf("sum : %d\n", sum);
}