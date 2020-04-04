#include <stdio.h>
/*구조체 
- 사용자 정의 자료형
- 같은 성격의 데이터들을 보다 쉽게 관리하기 위해 사용한다.
- 구조체 안의 데이터들을 구분하기 위해서 멤버 or 필드를 정의한다.
- 각 데이터들을 멤버필드명으로 그 공간을 구분짓는다.
- C언어에서는 struct Info 계속 한 묶음으로 같이 적어줘야 함

-> 귀찮 -> typedef Info in; typedef 등장

struct 구조체명{
	멤버필드 정의
	변수, 배열,  포인터...모두 가능함!
	
	-구조체 안에 정의할 수 없는 것 : ?? 자기 자신과 같은 타입의 변수 또는 배열
	단, 포인터는 가능하다. -> 자기 참조 구조체
};

ex) 사람의 정보(이름, 나이) -> 100명이 있다 할 때 변수 200개 만들어야!

*/

//구조체 선언 작업 -> 공간 생성 아직x
typedef struct Info {  //(설명)C언어에서는 struct Info 계속 한 묶음으로 같이 적어줘야 함
	char name[10];
	int age;
	//struct info in; (x)
	//strict info* in; (o)

}IN;  //(설명) struct Info를 앞으로 IN으로 줄여 쓰겠다

/*
typedef 별명, 별명, 별명....;
- 자료형에 새로운 별칭을 지어주는 키워드..
- 같은 형태와 같은 성격의 데이터들을 보다 '쉽게 구분'하고 관리하기 위해 사용
- (원래 쓰는 목적) 자료형 선언 잘못 했을 경우 쉽게 고치기 위해 
- (구조체에서의 목적) struct Info 계속 적어주기 귀찮아서
*/

typedef int NUM, AGE;
typedef int GRA; //-> typedef char GRA; 자료형 선언 잘못 했을 경우 쉽게 고치기 위해 

NUM num;
NUM su;
AGE age;
GRA gra;
int main() {
	
	/*구조체 변수
	- 구조체를 이용하여 만든 변수
	
	자료형 변수명;
	in.age -> (.) 멤버 참조 연산자 

	호출 : 구조체는 각각의 멤버 변수를 호출해야 한다.
	.(멤버 참조 연산자)  : 구조체 또는 공용체 공간의 멤버를 참조하는 연산자
	
	*/
	
	/*
	struct Info in; //구조체 생성
	in.age = 20;  
	printf("%d", in.age);*/

	/*struct Info in= { "김민준", 20 };

	printf("%s", in.name);
	puts("");
	printf("%d", in.age);*/

	/* 구조체 배열
	- 구조체를 이용해 만든 배열
	- 배열의 요소가 구조체인 배열
	*/
	
	IN arr[2] = { {"정수경", 23}, {"정희경", 24 }};

	/* 구조체 배열의 사용
	배열명[인덱스].멤버변수명

	. -> 멤버 참조 연산자
	*/


	for (int i = 0; i < 2; i++) {
		printf("이름 : %s\n", arr[i].name);
		printf("나이 : %d\n", arr[i].age);
	}

	


	return 0;
}