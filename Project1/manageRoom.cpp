/* �� ���� ���α׷�
1. �Խ� 2. ��� 3. ���� 4. ����

(����)
�Խ� �Լ� : �迭�� �߰�
��� �Լ� : �迭���� ����
���� �Լ� : �迭�� ��� ��� ���

*/


/*�ڵ� ¥�鼭 ����
return 0�� exit(0)�� ����
break���� ����
*/
#include <stdio.h>
#include <stdlib.h> //malloc(), free(), exit()

void menu(int, int *); //�޴� �Լ�
void add(int, int *); //�Խ� �Լ�
void minus(int, int *); //��� �Լ�
void print(int, int*); //���� �Լ�

int main(void) {

	int num; //���� ����
	int *x; //�� ������ �����Ҵ��� �޸��� �ּҸ� �������� ���� 


	printf("���� ���� ���� : ");
	scanf_s("%d", &num);

	x = (int *)malloc(sizeof(int)*num); //�����Ҵ�


	//(����) ����� '���(0��)'���� ��� �ʱ�ȭ
	for (int i = 0; i < num; i++) {
		x[i] = 0;
	}

	//�޴� ȣ��
	menu(num, x);


	return 0;
}

void menu(int num, int * x) {

	while (1) {

		int choice;
		printf("\n<�޴�>\n");
		printf("1. �Խ� 2. ��� 3. ���� 4. ����\n");
		printf("���� : ");
		scanf_s("%d", &choice);
		if (choice == 1)
			add(num, x);
		else if (choice == 2)
			minus(num, x);
		else if (choice == 3)
			print(num, x);
		if (choice == 4) {  //���� �ݺ��� ���� ����
			printf("���α׷��� �����մϴ�.\n"); //free(); //���� �Ҵ� ����
			//<�����ذ�>break; break��� exit()�Լ��� ����Ѵ�.
			free(x);// �����Ҵ��� �޸� �����ϰ� ���α׷� ����
			exit(0); //(����)�������� ���������� ���α׷��� ������ �����մϴ�.
			//break;  ????�� ���� �� ��??
		}
		//(����ó��)
		else {
			printf("**1, 2, 3, 4 ���� Ű�� ���� �� �����ϴ�!!**\n");
			menu(num, x); //(����) �ʿ��ϴٸ�..�Լ� �ȿ��� �ڱ�� �Ȱ��� �Լ��� �ٽ� ȣ���� �� ����!
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
				printf("���α׷��� �����մϴ�.\n"); //free(); //���� �Ҵ� ����
				exit(0);
			defalut
				printf("**1, 2, 3, 4 ���� Ű�� ���� �� �����ϴ�!!**\n");
				menu(num, x);
		}
		*/


	}
}

void add(int num, int * x) { //�Խ� �Լ�

	int number; //�迭�� �ε����� ����

	printf("�Խ��Ͻ� ���� ��ȣ��?");
	scanf_s("%d", &number);

	//(����ó��)���� ��ȣ�� �迭�� �ε��� �ʰ��ع��ų� �� �̸��� ���
	if (number - 1 < 0 || number - 1 > num - 1) {
		printf("**�׷� �� ��ȣ�� �����ϴ�. ���� ��ȣ�� 1������ %d������ �ֽ��ϴ�.**\n", num);
		add(num, x);
	}

	//�̹� ������� ���� ���
	if (x[number - 1] == 1) {
		printf("���� ������� ���Դϴ�.\n");
		//�޴� ȣ��
		menu(num, x);
	}
	else if (x[number - 1] == 0)
	{
		x[number - 1] = 1; //(����) ����� �Խ��ϸ� 1�� �Է�
		printf("%dȣ�ǿ� �Խ��ϼ̽��ϴ�.\n", number);
		menu(num, x);
	}

}

void minus(int num, int * x) {//��� �Լ�

	int number; //�迭�� �ε����� ����

	printf("����Ͻ� ���� ��ȣ��?");
	scanf_s("%d", &number);

	//(����ó��)���� ��ȣ�� �迭�� �ε��� �ʰ��ع��ų� �� �̸��� ���
	if (number - 1 < 0 || number - 1 > num - 1) {
		printf("**�׷� �� ��ȣ�� �����ϴ�. ���� ��ȣ�� 1������ %d������ �ֽ��ϴ�.**\n", num);
		minus(num, x);
	}

	if (x[number - 1] == 0) {//�� ���� ���
		printf("�� ���Դϴ�.\n");
		//�޴� ȣ��
		menu(num, x);
	}
	else if (x[number - 1] == 1) {//�� ���� �ƴ� ��� -> �迭���� ���� 0���� �ʱ�ȭ 
		x[number - 1] = 0; //(����) ����� ����ϸ� 0���� �Է�
		printf("%dȣ�ǿ��� ����ϼ̽��ϴ�.\n", number);
		menu(num, x);
	}


}

void print(int num, int * x) {//���� �Լ�

	for (int i = 0; i < num; i++) {

		if (x[i] == 0)
			printf("%dȣ�� - ���\n", i + 1);
		else if (x[i] == 1)	//(��������) �ܼ� if���� else if�� ����!
			printf("%dȣ�� - �����\n", i + 1);
	}

	menu(num, x);
}