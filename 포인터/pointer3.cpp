//���� : ������ p�� �̿��ؼ� �迭 ����� ������ �ٲ� ��, �� ����� ����ϴ� ���α׷�
#include <stdio.h>

int main(void) {

	int arr[5] = { 1,2,3,4,5 };
	int *ptr = arr;

	//�ٲ�� ��
	for (int i = 0; i < 5; i++) {
		printf("%d\n", ptr[i]);
	}

	puts("");

	//�迭 ����� ���� �ٲٱ�
	/*(����)
	ptr[i]�� ptr[4-i]�� ���� �ڸ� �ٲ�
	*/
	for (int i = 0; i <= 1; i++) {
		int temp = ptr[i]; //<�����ذ�> �ڸ� �ٲ� �� temp �� 3�� �� ���� 
		ptr[i] = ptr[4 - i];
		ptr[4 - i] = temp;
	}

	//�ٲ� �� ���
	for (int i = 0; i < 5; i++) {
		printf("%d\n", ptr[i]);
	}

	return 0;
}