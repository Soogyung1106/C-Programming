
//�빮�� ���� �Է� : 100

//*** ���� ���ĺ� ��� ***
//W Q B E K B F T X Q Y I C W D M
//W O R J E P Q N M Q M K N R C C
//F P R M L Z M F R E S Z G U O I
//F N Y Z S D E L B F R C A V V U
//J T I C E S N P K X S C Q Z A E
//T T A R I K J F G P V Y Z R I K
//K G X T

//*** �� ���ĺ��� ���� ***
//A : 00�� B : 00�� C : 00�� E : 00��
//F : 00�� H : 00��.....
//Z : 00��
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int input();
char * setSpace(int su);
void disp(char * pt, int su);
void checkNumber(char * pt, int su);

/*Ǯ��
rand()
-��� ����(seed)�� ���� 0~36767������ �������� ��ȯ�ϴ� �Լ�
-srand() �Լ��� ���� seed���� ���ؾ� �Ѵ�.

srand()
-rand�Լ��� seed���� �����ϴ� �Լ�
-unsigned int�� �������� ���ڰ����� �־��־�� �Ѵ�.
-�Ϲ������� ���ڰ��� time �Լ��� ��ȯ���� �־��ش�.

time()
-1970�� 1�� 1�� 0�� 0�� 0�ʺ��� ���ݱ����� �ð��� �ʴ����� ��ȯ�ϴ� �Լ�
-���ڰ��� NULL�� �����ش�.

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
	printf("�빮�� ���� �Է� : ");
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
	printf("*** ���� ���ĺ� ��� ***\n");
	for (int i = 0; i < su; i++) {
		printf("%-2c", pt[i]);
		if (i % 16 == 15 || su - 1 == i) {
			puts("");
			//���ڿ��� ����ϴ� ǥ�� ����Լ�...
			//\n�� �⺻������ �����Ѵ�...
		}
	}

}

void checkNumber(char * pt, int su) {
	int cnt = 0;
	puts("*** �� ���ĺ��� ���� ***");
	for (char ch = 'A'; ch <= 'Z'; ch++) {
		int check = 0;
		for (int i = 0; i < su; i++) {
			if (pt[i] == ch) {
				check++;
			}
		}

		if (check != 0) {
			printf("%c : %-2d�� ", ch, check);
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
