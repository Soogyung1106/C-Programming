#include <stdio.h>

void strInput(char* str) {
	printf("문자열 입력 : ");
	gets_s(str, 100);
}

void swap(char* str) {
	int i = 0;
	while (str[i]) {
		if (str[i] >= 65 && str[i] <= 90) {
			str[i] += 32;
		}
		else if (str[i] >= 'a'&&str[i] <= 'z') {
			str[i] -= 32;
		}

	}
}

int main(void) {


	char str[100];

	//문자열 입력
	strInput(str);

	//문자열 대소문자 변환
	swap(str);

	//문자열 출력
	printf("%s\n", str);

	return 0;
}