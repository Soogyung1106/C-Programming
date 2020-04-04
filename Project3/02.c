/*  //복습 ok
Topic1 : 실수하거나 간과할만한 C언어 문법
*/
#include <stdio.h>

int swap(int *, int *); //꼭 변수 x, y를 써줘야 되나? 있어도 없어도 상관없다.

void  main() { 
	
//(Point1)int main(void)가 main문 시작의 표준이지만 return 0 쓰기 귀찮기 때문에 출력형태 void로 씀.
//(Point2) 출력 + 함수이름 + 입력

	/*실습1
	int x, y, z = 2; //(실수 Point1) int x, y = 2; -> 결과적으로 y만 초기화 됨.
	printf("%d %d %d", x, y, z);
	
	//<에러>  x, y값이 초기화되지 않았기 때문 
	//에러 메시지 : 지역 변수를 초기화하지 않았습니다. 
	*/
	
	/*
	변수 이름  객관식 다음중 틀린 것은?
	1.Aa
	2.A100
	3.A_100
	4.A*100   -> *는 안된다
	5.4Ab    -> 숫자로 시작해서 안된다
	6._Ab    -> 된다('_'로 시작할수 있다)
	7._45    -> '_'로 시작했기 때문에 된다.
	8.A a    -> 스페이스바(공백) 있으면 안 된다
	
	정답 : 4, 5, 8
	*/

	/*실습2
	char ch[5];
	ch[0] = 'L';
	ch[1] = 'O';
	ch[2] = 'V';
	ch[3] = 'E';
	printf("%s", ch); // (Point1)여기에는 변수와 다르게 &를 안 쓰는 이유
							// int a; printf("%d", &a);

	//<해결책> ch[4] = '\0'; 널문자를 넣어줘야 함. 안 그러면 쓰레기 값을 다 읽어버린다.
	
	//(Point2) 배열에서 널문자 전까지 읽는다. 
	//널문자가 자동으로 넣어지는 경우도 있지만, 위의 경우처럼 배열을 읽어들일 때 개발자가 널문자를 넣어줘야 한다.	
	
	*/


	/*실습3

	
	//한글은 2바이트 -> char
	//영어는 1바이트
	

	//<?>자바랑 비교

	char str[] = "kpu"; //(Point1) 큰 따옴표로 배열의 크기 설정시에 자동적으로 뒤에 널문자 포함 -> 그래서 배열의 크기는 3이 아니라 4임
	char str2[] = "산기대"; //대괄호 안에 크기 설정 안하면 자동으로 설정
	printf("%s 배열의 크기는 %d\n", str, sizeof(str)); //4출력
	printf("%s 배열의 크기는 %d\n", str2, sizeof(str2)); //7출력 ('8' 아님 -> 왜? /0은 1바이트 차지함)

	//<?> C언어 배열선언시 주의사항 vs 자바랑 비교
	
	//(Point2) 널문자('\0')란? 문자열의 끝을 알려주기 위해 사용하는 문자
	//(Point3) 항상 널문자를 계산하고 배열의 크기를 지정해줘야 함!
	
	//*/

	/*실습4

	표준 입출력
	변환 문자열, 문자 출력서식

	<?> KGIT bank 필기했던 것 찾아보기
	%f -	float형 변수
	%lf - double형 변수

	*/

	/* 실습5
	int a, b;
	a = 10;
	b = a++; //b=10, a=11
	printf("b = a++ \n a = %d, b = %d\n", a, b);

	a = 10;
	b = ++a; //a=11, b=11
	printf("b = ++a \n a = %d, b = %d\n", a, b);
	*/

	/*Tip
	if(1), if(2), ....if(0)  <--> if(0) 
	if 문 안에 숫자를 넣어서 참, 거짓을 표현할 수도 있다.
	*/
	

	/*실습6
	int kor, eng, math = 0;
	double aver;

	printf("3과목의 점수 입력 : ");
	scanf_s("%d%d%d", &kor, &eng, &math); 
	//<실수노트> %d -> &a 배열(문자열) 빼고 변수의 주소를 다 적어줘야 한다!

	aver = (double)(kor + eng + math) / 3;
	//(Point1) 정수 나누기 정수 = 정수 -> 묵시적 형변환
	//(Point2) 실수 나누기 정수 or 정수 나누기 실수 -> 결과값 실수로 묵시적 형변환
	//avg = (double)sum / 3; -> 둘중 하나만 형변환 하여도 결과는 형변환 된다.

	if (aver >= 60)
		printf("평균은 %.2lf이므로합격입니다.", aver);
	//<실수노트> &는 scanf에서만 붙힌다. printf에서는 &안 붙힌다.
	
	//<실수노트> double은 출력시 %lf로 출력한다.
	//<?> C언어 KG it bank 필기 찾아보기
	else
		printf("불합격입니다.");

	*/


	/* 실습7
	int kor = 0;
	int eng = 0;
	int math=0;
	char score; //학점
	double sum = kor + eng + math;
	double aver; 

	printf("3과목의 점수 입력 : ");
	scanf_s("%d%d%d", &kor, &eng, &math);
	//<실수노트> %d -> &a 배열 빼고 변수의 주소를 다 적어줘야 한다!
	double aver= (kor + eng + math) / 3

	if (sum >= 90)
		score = 'A';
	else if (sum >= 80)
		score = 'B';
	else if (sum >= 70)
		score = 'C';
	else if (sum >= 60)
		score = 'D';
	else
		score = 'E';

	printf("학점은 %c 평균은 %.2lf입니다.", score, aver);
	//<실수 노트> printf 출력에서는 & 사용x, scanf와 &가 짝을 이룬다!
	*/

	
	/* Tip
	함수 선언시에 매개변수 자료형만 써줘도 된다.
	int sum(int a, int b); //함수 선언시에 a, b 꼭 써줘야되나? 안 써줘도 된다.
	int sum(int, int);
	*/

	/*
	<포인터를 사용하는 이유> 장점
	1. 함수에서 값을 2개 전달할 수 있기 때문에
	3. 변수를 외부에서 조작해준다.

	- 포인터에 메모리 주소를 저장하는 변수
	- 포인터 또한 변수이기 때문에 포인터 변수라고도 부름

	*/


	/* 실습8 : 스와핑 함수
	int a = 20, b = 30;
	printf("바뀌기 전 a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("바뀐 후  a = %d, b = %d\n", a, b);
	*/
	
}

/*
int swap(int *x, int *y) {
	int z;
	z = *x;
	*x = *y;
	*y = z;
}
*/