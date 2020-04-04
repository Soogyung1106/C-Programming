#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*Topic2 : 배열 */
int main(void) {

	/* Tip
	(POINT1) 배열을 선언하면 처음에 쓰레기값이 존재한다.
	int ages[5] = {1};
	5칸 중에 한 칸만 1, 나머지는 0으로 초기화됨.

	(POINT2) 배열을 선언할 때 초기화하면 배열 요소의 개수를 생략할 수 있다.
	int ages[ ] = {1,2,3,4}; 

	(POINT3) 원칙 : 배열의 개수를 선언할 때는 반드시 '상수'를 사용해야 함!
	int a = 100; 
	int ages[a]; //변수로 배열의 개수 선언

	(POINT4) sizeof(배열의 이름)  -> 배열의 길이만큼 크기 출력(byte)
	int : 4byte
	
	sizeof(ages) //20바이트
	sizeof(ages)/sizeof(ages[0])

	*/

	/*실습1

	int ages[5]; //배열의 크기 선언
	int tot = 0;  //%d
	double avg;
	int i;
	//(POINT)
	//%lf :8바이트   -> 이거 사용
	//%f  : 4바이트 -> 잘 사용 x

	printf("다섯명의 나이를 입력하세요 : ");
	for (i = 0; i < 5; i++)
		scanf_s("%d", &ages[i]);

	for (i = 0; i < 5; i++)
		tot+=ages[i];

	avg = tot / 5.0;

	printf("입력된 다섯명의 나이 : ");

	for (i = 0; i < 5; i++)
		printf("%d ", ages[i]);

	printf("\n 다섯 명의 평균 나이는 %.1lf입니다.\n", avg);
	*/

	/*실습2

	//(POINT) 문자형 배열 선언하는 방법
	//(방법1)
	//char arr[] = "Good time"; //배열의 크기 선언x 
	char arr[10] = "Good time"; // 크기 지정 
	//(방법2)
	//char arr[10] = {'G', 'o', 'o', 'd', ' ', 't', 'i', 'm', 'e' };

	//<?> 방법1과 방법2의 차이점????

	printf("%s\n", arr); //(POINT) '배열의 이름 = 주소' 이용  -> %s써야!
	
	// for문을 이용해 배열의 요소 출력
	//for (int i = 0; i < 10; i++)
	//	printf("%c", arr[i]); //<실수> printf에서는 엔퍼센트(&) 안 붙힌다. -> %c 사용
	
	*/

	
	
	/* 실습3
	char word[50];
	word[0] = 'L';
	word[1] = 'O';
	word[2] = 'V';
	word[3] = 'E';
	//<에러> word[4] = '\0';   널문자('\0')를 요소로 넣어줘야 널문자 만날때까지 출력 
	//안 그러면 LOVE를 제외한 나머지 쓰레기 값까지 다 출력됨.
	printf("%s\n", word);
	*/

	
	//런타임 에러 발생 (실행 중에 발생하는 에러)
	//C는 메모리를 프로그래머가 직접 관리, 자바는 가비지 컬레션이 알아서 가비지 히수
	
	/* 실습4 <????>
	char word[4];
	scanf("%s", word);
	printf("%s", word); //<에러> 메모리 할당 공간을 벗어났기 때문에 자체적으로 프로그램 종료시킴
	*/

	/* (에러) ***
	char str[80] = "Hello";
	str= "good bye"; -> '배열의 이름 = 시작주소' -> 상수-> 상수에 변수처럼 문자열 대입x
	
	<해결책> strcpy(str, "good bye"); -> 복사하고 싶을 경우 문자열 함수 strcpy 사용해야!
	//OR 원소 한개씩 접근, 통째로는 문자열함수 사용 안 하고는 못 바꿈
	*/

	/*실습5 : 단어 거꾸로 출력하는 코드 

	char word[80];
	int i = 0;

	printf("단어를 입력하세요 : ");
	scanf("%s", word);

	printf("%s", word);
	printf("\n");

	// 입력한 단어 거꾸로 출력시키는 부분
	//<POINT> 널문자가 들어있는 위치를 찾기 
	while (word[i] != '\0') {// 현재 i=0인 상태에서 시작 
		i++;
	}
	
	// i=10인 상태로 끝남
	--i;

	for (; i >= 0; i--)  // <point> 
		printf("%c", word[i]);

	printf("\n");

	*/

	/* <오류>
	for (int i = 0; i < 80; i++) {
	if (word[i] = '\0')
	break;
	else
	printf("%c", word[i]);
	}
	*/

	/* <오류>
	for (int i = 79; i >= 0; i--) {
	/*
	if (word[i] = '\0')
	continue;
	else
	printf("%c", word[i]);


	if(word[i] != '\0')
	printf("%c", word[i]);
	}
	*/


	return 0;


}