
//대문자 개수 입력 : 100

//*** 랜덤 알파벳 출력 ***
//W Q B E K B F T X Q Y I C W D M
//W O R J E P Q N M Q M K N R C C
//F P R M L Z M F R E S Z G U O I
//F N Y Z S D E L B F R C A V V U
//J T I C E S N P K X S C Q Z A E
//T T A R I K J F G P V Y Z R I K
//K G X T

//*** 각 알파벳의 개수 ***
//A : 00개 B : 00개 C : 00개 E : 00개
//F : 00개 H : 00개.....
//Z : 00개
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int input();
char * setSpace(int su);
void disp(char * pt, int su);
void checkNumber(char * pt, int su);

/*풀이
rand()
-어떠한 기준(seed)에 의해 0~36767까지의 정수값을 반환하는 함수
-srand() 함수를 통해 seed값을 정해야 한다.

srand()
-rand함수의 seed값을 설정하는 함수
-unsigned int의 정수값을 인자값으로 넣어주어야 한다.
-일반적으로 인자값은 time 함수의 반환값을 넣어준다.

time()
-1970년 1월 1일 0시 0분 0초부터 지금까지의 시간을 초단위로 반환하는 함수
-인자값은 NULL을 적어준다.

*/

int main(void) {

	int su = input();

	srand((unsigned)time(NULL));

	char * pt = setSpace(su);

	disp(pt, su);

	checkNumber(pt, su);


	free(pt);

}

int input() {
	int su;
	printf("대문자 개수 입력 : ");
	scanf_s("%d", &su);

	return su;
}

char * setSpace(int su) {
	char * pt = (char *)malloc(su);

	for (int i = 0; i < su; i++) {
		pt[i] = rand() % 26 + 65;
	}

	return pt;
}

void disp(char * pt, int su) {
	printf("*** 랜덤 알파벳 출력 ***\n");
	for (int i = 0; i < su; i++) {
		printf("%-2c", pt[i]);
		if (i % 16 == 15 || su - 1 == i) {
			puts("");
			//문자열을 출력하는 표준 출력함수...
			//\n을 기본적으로 포함한다...
		}
	}

}

void checkNumber(char * pt, int su) {
	int cnt = 0;
	puts("*** 각 알파벳의 개수 ***");
	for (char ch = 'A'; ch <= 'Z'; ch++) {
		int check = 0;
		for (int i = 0; i < su; i++) {
			if (pt[i] == ch) {
				check++;
			}
		}

		if (check != 0) {
			printf("%c : %-2d개 ", ch, check);
			cnt++;
			if (cnt % 4 == 0 || ch == 'Z') {
				puts("");
			}
		}
		else if (cnt % 4 != 0 && ch == 'Z') {
			puts("");
		}
	}
	printf("???????");
}
