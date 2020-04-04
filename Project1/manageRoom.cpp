/* 방 관리 프로그램
1. 입실 2. 퇴실 3. 보기 4. 종료

(생각)
입실 함수 : 배열에 추가
퇴실 함수 : 배열에서 제거
보기 함수 : 배열의 요소 모두 출력

*/


/*코드 짜면서 질문
return 0과 exit(0)의 차이
break와의 차이
*/
#include <stdio.h>
#include <stdlib.h> //malloc(), free(), exit()

void menu(int, int *); //메뉴 함수
void add(int, int *); //입실 함수
void minus(int, int *); //퇴실 함수
void print(int, int*); //보기 함수

int main(void) {

	int num; //방의 개수
	int *x; //힙 영역에 동적할당한 메모리의 주소를 포인팅할 변수 


	printf("방의 개수 설정 : ");
	scanf_s("%d", &num);

	x = (int *)malloc(sizeof(int)*num); //동적할당


	//(생각) 방들을 '빈방(0값)'으로 모두 초기화
	for (int i = 0; i < num; i++) {
		x[i] = 0;
	}

	//메뉴 호출
	menu(num, x);


	return 0;
}

void menu(int num, int * x) {

	while (1) {

		int choice;
		printf("\n<메뉴>\n");
		printf("1. 입실 2. 퇴실 3. 보기 4. 종료\n");
		printf("선택 : ");
		scanf_s("%d", &choice);
		if (choice == 1)
			add(num, x);
		else if (choice == 2)
			minus(num, x);
		else if (choice == 3)
			print(num, x);
		if (choice == 4) {  //무한 반복문 종료 조건
			printf("프로그램을 종료합니다.\n"); //free(); //동적 할당 해제
			//<에러해결>break; break대신 exit()함수를 사용한다.
			free(x);// 동적할당한 메모리 해제하고 프로그램 종료
			exit(0); //(설명)에러없이 정상적으로 프로그램을 완전히 종료합니다.
			//break;  ????왜 종료 안 됨??
		}
		//(예외처리)
		else {
			printf("**1, 2, 3, 4 외의 키는 누를 수 없습니다!!**\n");
			menu(num, x); //(설명) 필요하다면..함수 안에서 자기와 똑같은 함수를 다시 호출할 수 있음!
		}

		/*
		switch(choice){
			case 1:
				add(num, x);
				break;
			case2:
				minus(num, x);
				break;
			case3:
				print(num, x);
				break;
			case4:
				printf("프로그램을 종료합니다.\n"); //free(); //동적 할당 해제
				exit(0);
			defalut
				printf("**1, 2, 3, 4 외의 키는 누를 수 없습니다!!**\n");
				menu(num, x);
		}
		*/


	}
}

void add(int num, int * x) { //입실 함수

	int number; //배열의 인덱스로 연결

	printf("입실하실 방의 번호는?");
	scanf_s("%d", &number);

	//(예외처리)방의 번호를 배열의 인덱스 초과해버거나 그 미만일 경우
	if (number - 1 < 0 || number - 1 > num - 1) {
		printf("**그런 방 번호는 없습니다. 방의 번호는 1번부터 %d번까지 있습니다.**\n", num);
		add(num, x);
	}

	//이미 사용중인 방의 경우
	if (x[number - 1] == 1) {
		printf("현재 사용중인 방입니다.\n");
		//메뉴 호출
		menu(num, x);
	}
	else if (x[number - 1] == 0)
	{
		x[number - 1] = 1; //(생각) 사람이 입실하면 1로 입력
		printf("%d호실에 입실하셨습니다.\n", number);
		menu(num, x);
	}

}

void minus(int num, int * x) {//퇴실 함수

	int number; //배열의 인덱스로 연결

	printf("퇴실하실 방의 번호는?");
	scanf_s("%d", &number);

	//(예외처리)방의 번호를 배열의 인덱스 초과해버거나 그 미만일 경우
	if (number - 1 < 0 || number - 1 > num - 1) {
		printf("**그런 방 번호는 없습니다. 방의 번호는 1번부터 %d번까지 있습니다.**\n", num);
		minus(num, x);
	}

	if (x[number - 1] == 0) {//빈 방인 경우
		printf("빈 방입니다.\n");
		//메뉴 호출
		menu(num, x);
	}
	else if (x[number - 1] == 1) {//빈 방이 아닌 경우 -> 배열에서 제거 0으로 초기화 
		x[number - 1] = 0; //(생각) 사람이 퇴실하면 0으로 입력
		printf("%d호실에서 퇴실하셨습니다.\n", number);
		menu(num, x);
	}


}

void print(int num, int * x) {//보기 함수

	for (int i = 0; i < num; i++) {

		if (x[i] == 0)
			printf("%d호실 - 빈방\n", i + 1);
		else if (x[i] == 1)	//(수정사항) 단순 if보다 else if를 쓰자!
			printf("%d호실 - 사용중\n", i + 1);
	}

	menu(num, x);
}