/*
대문자 개수 입력 : 100 //동적할당

***랜덤 알파벳 출력*** //rand함수 이용
A B C D D E A F
B C D E F X D F
A C E F E S K F

***각 알파벳의 개수***
A : 4개 B : 20개 C : 3개 E:50개  //1줄에 4개씩만 출력, 없을 시에 출력X
F :
...

*/
#include <stdio.h>
#include <stdlib.h> //malloc(), rand()
#include <time.h> //time()

int main(void) {

	int size;

	//1. 동적할당
	printf("대문자 개수 입력 : ");
	scanf_s("%d", &size);
	printf("\n");
	char* size_ptr = (char*)malloc(sizeof(char)*size); //(오류해결) ->입력받은 개수만큼 동적 할당

	//2. rand 함수 -> <?>포인터를 1차원 배열처럼 사용

	printf("*** 랜덤 알파벳 출력 ***\n");

	srand((unsigned)time(NULL)); //<?> unsigned랑 null

	for (int i = 0; i < size; i++) { //입력받은 크기만큼 rand 함수로 값 할당

		if (i % 10 == 0) //i=4 or i=8...12 한 줄에 10개씩 끊어서 출력
			printf("\n");


		//알파벳은 65~90
		size_ptr[i] = rand() % (90 + 1 - 65) + 65; //'저장' <?> 배열처럼 사용???
		//(포인트)rand함수 범위 지정 공식
		printf("%c ", size_ptr[i]);  //화면에 출력

	}

	

	//3. 각 알파벳의 개수 출력
	printf("\n\n*** 각 알파벳의 개수 ***\n\n");

	
	/*(생각)
	26개 for문 돌리기 
	'A'==size_ptr[i]
	65 == (int)size_ptr[i]
	66 == (int)size_ptr[i]
	...
	*/
	int count = 0; //(설명)알파벳의 개수를 세기 위한 변수
	int line_count = 0; //(설명)줄에 몇 개 들어가는지 세기 위한 변수

	for (int i = 65; i <= 90; i++) { //i=65('A'인 경우)

		for (int j = 0; j < size; j++) { //size_ptr[j] 처음부터 끝까지 돌면서 65랑 동일한 게 있는지 count 변수에 누적해서 계산
			if ((int)size_ptr[j] == i)
				count++;
			
			//(생각) i=65일 때 size_ptr[j] 첨부터까지 끝까지 다 돌은 후 체크사항
			//(1) 알파벳의 개수 > 0
			if (j == size - 1 && count > 0) {
				
				line_count++; //(설명)서로 다른 알파벳의 개수 세기
				
				if (line_count % 4 == 1) //(오류해결)5번째, 9번째, 13번째..줄 바꿈
					printf("\n");

				printf("%c : %d개 ", (char)i, count);
				count = 0;//(오류해결)초기화 
			}
			//(2) 알파벳의 개수 = 0
			//생략
		}

	}

	printf("\n");
	free(size_ptr); //동적으로 할당한 메모리 해제

	//if (i % 4 == 0) //i=4 or i=8...12 한 줄에 4개씩 끊어서 출력
	//	printf("\n");


	return 0;
}

