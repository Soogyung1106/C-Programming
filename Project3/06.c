#include <stdio.h> //복습 ok 
#include <stdio.h> //헤더파일 포함

void swap_string(char *, char*);
char func_strcat(char *, char *);

void main(void) {
	/*
	포인터의 종류 3가지
	포인터 상수, 변수, 선언

	(1) 포인터 상수 : 변하지 않는 주소
	int a;
	&a; //포인터 상수

	(2) 포인터 변수 : 포인터 상수를 저장하는 변수
	int *a;
	int a; //포인터 변수

	배열을 선언

	arr[1] == *(arrr+1); //배열의 이름은 = 배열의 '시작 주소'

	//된다고 한다.....<?>
	arr[5] == 5[arr]; //왜??  *(arr+5) == *(5+arr)

	//<오류>
	char name[100];
	name ="soogyung";  //왜? 상수에 상수를 대입할 수 없기 때문에


	char *a = "abc"; //가능 -> 왜??

	<주의, 기억> 포인터변수로 문자열 상수를 저장하면
	'읽기 전용 공간'에 저장되므로 '더 이상 변경 불가능'하다!!!
	char * a ="Hello";
	a[0]='h'; //불가능

	<POINT>배열과 포인터는 완전히 다른것이다! 
	int arr[50]; //배열
	int *a; //포인터 변수

	a=arr; 
	arr=a; //<오류> 상수에 어떤값을 대입 못하기 때문에

	<POINT> 
	(방법zzzz1)void sum(int  배열)
	(방법2)void sum(int 포인터)
	-> 이 경우에만 배열과 포인터가 같다
	// 배열을 전달하고 싶을 경우 두 가지 경우 모두 사용 가능
	
	<POINT> //가장 중요 포인트!!
	char *name = { "a", "b", "c"}

	-> 저장형태 : a \0 b \0 c \0

	name[0] // a
	name[1] // b -> 널문자를 제외한 그 다음 주소의 값을 참조한다.




	*/

	//월욜 : 문자열 상수의 두 얼굴...까지 함

	/*
	strcpy를 사용 안 하고 함수로 문자열을 복사하는 프로그램

	복사 strcpy, 길이 strlen, 비교 strcmp, 결합 strcat
	strcpy(값을 받을, ,,,) //인자 2개
	strlen() //인자1개
	strcmp() //인자 2개, 같으면 0을 반환 ..즉, 거짓을 반환
	-> if(!strcmp(...)


	*/
	/*실습1
	printf("주소값을 출력 : %u\n", "dream");
	printf("첫 번째 문자를 출력 : %c\n", *"dream");
	printf("세 번째 문자를 출력 : %c\n", "dream"[2]);
	*/

	/*실습2
	char str1[20] = "apple";
	char str2[20] = "banana";

	swap_string(str1, str2);

	printf("str1 : %s\n", str1);
	printf("str2 : %s\n", str2);
	*/

	/*
	Topic : 문자열의 입출력
	-> 대표적  : scanf //띄어쓰기 문자열 입력 받을 수 x

	=> 해결책 : gets, puts //주의 : <string.h> 헤더파일 포함시켜야
	char name[10];

	gets(name); //띄어쓰기를 포함한 문자열 입력 : printf기능
	puts(name); // 엔터기능이 포함된 출력 : scanf 기능

	*/


	/*실습3
	char novel[800] = { 0 }; //전체 줄거리를 저장할 배열, 반드시 초기화 해줘야 한다.
	char str_in[80]; //입력 문자열을 저장할 배열
	while (1) {
		//while문 종료 조건
		if (strcmp(str_in, "끝") == 0)
			break;

		printf("문자열을 입력하세요. : ");
		gets(str_in);

		strcat(novel, str_in);
		strcat(novel, " ");
		printf("현재까지의 줄거리 : ");
		puts(novel);
		puts("\n");

	}
	*/

	//strcat_s(des, sizeof(des), src);
	//novel.....str_in
	
//진도 : ppt 33까지 나감
//과제 : stringcat함수 직접 구현해오기
		
	char a[80] = { 0 }; //첫 번째 문자열을 저장할 배열
	char b[80] = { 0 }; //두 번쨰 문자열을 저장할 배열

	printf("첫 번째 문자열을 입력 : ");
	gets(a);
	printf("두 번째 문자열을 입력 : ");
	gets(b);
	
	char d=func_strcat(a, b);
	
	puts(d);

	puts("\n");


}

void swap_string(char *s1, char* s2) {
	char temp[80];

	strcpy(temp, s1);
	strcpy(s1, s2);
	strcpy(s2, temp);

}

char func_strcat(char *a, char *b) {
	char c[160] = { 0 }; //매개변수로 받은 두 문자열을 합쳐서 저장할 배열
	
	int i = 0;
	for (; i < strlen(a); i++) {
		if (a[i] == '\0') 
			break;
		c[i] = a[i];
	}
	//널문자가 있던 배열의 위치 변수 i에 저장

	for (int j=0; j < strlen(b); j++) {
		if (b[j] == '\0')
			break;
		c[i] = b[j];
		i++;
	}
	
	return *c;
}