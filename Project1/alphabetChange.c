#include <stdio.h>

void strInput(char* str) {
	printf("���ڿ� �Է� : ");
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

	//���ڿ� �Է�
	strInput(str);

	//���ڿ� ��ҹ��� ��ȯ
	swap(str);

	//���ڿ� ���
	printf("%s\n", str);

	return 0;
}