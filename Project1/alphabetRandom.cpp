/*
�빮�� ���� �Է� : 100 //�����Ҵ�

***���� ���ĺ� ���*** //rand�Լ� �̿�
A B C D D E A F
B C D E F X D F
A C E F E S K F

***�� ���ĺ��� ����***
A : 4�� B : 20�� C : 3�� E:50��  //1�ٿ� 4������ ���, ���� �ÿ� ���X
F :
...

*/
#include <stdio.h>
#include <stdlib.h> //malloc(), rand()
#include <time.h> //time()

int main(void) {

	int size;

	//1. �����Ҵ�
	printf("�빮�� ���� �Է� : ");
	scanf_s("%d", &size);
	printf("\n");
	char* size_ptr = (char*)malloc(sizeof(char)*size); //(�����ذ�) ->�Է¹��� ������ŭ ���� �Ҵ�

	//2. rand �Լ� -> <?>�����͸� 1���� �迭ó�� ���

	printf("*** ���� ���ĺ� ��� ***\n");

	srand((unsigned)time(NULL)); //<?> unsigned�� null

	for (int i = 0; i < size; i++) { //�Է¹��� ũ�⸸ŭ rand �Լ��� �� �Ҵ�

		if (i % 10 == 0) //i=4 or i=8...12 �� �ٿ� 10���� ��� ���
			printf("\n");


		//���ĺ��� 65~90
		size_ptr[i] = rand() % (90 + 1 - 65) + 65; //'����' <?> �迭ó�� ���???
		//(����Ʈ)rand�Լ� ���� ���� ����
		printf("%c ", size_ptr[i]);  //ȭ�鿡 ���

	}

	

	//3. �� ���ĺ��� ���� ���
	printf("\n\n*** �� ���ĺ��� ���� ***\n\n");

	
	/*(����)
	26�� for�� ������ 
	'A'==size_ptr[i]
	65 == (int)size_ptr[i]
	66 == (int)size_ptr[i]
	...
	*/
	int count = 0; //(����)���ĺ��� ������ ���� ���� ����
	int line_count = 0; //(����)�ٿ� �� �� ������ ���� ���� ����

	for (int i = 65; i <= 90; i++) { //i=65('A'�� ���)

		for (int j = 0; j < size; j++) { //size_ptr[j] ó������ ������ ���鼭 65�� ������ �� �ִ��� count ������ �����ؼ� ���
			if ((int)size_ptr[j] == i)
				count++;
			
			//(����) i=65�� �� size_ptr[j] ÷���ͱ��� ������ �� ���� �� üũ����
			//(1) ���ĺ��� ���� > 0
			if (j == size - 1 && count > 0) {
				
				line_count++; //(����)���� �ٸ� ���ĺ��� ���� ����
				
				if (line_count % 4 == 1) //(�����ذ�)5��°, 9��°, 13��°..�� �ٲ�
					printf("\n");

				printf("%c : %d�� ", (char)i, count);
				count = 0;//(�����ذ�)�ʱ�ȭ 
			}
			//(2) ���ĺ��� ���� = 0
			//����
		}

	}

	printf("\n");
	free(size_ptr); //�������� �Ҵ��� �޸� ����

	//if (i % 4 == 0) //i=4 or i=8...12 �� �ٿ� 4���� ��� ���
	//	printf("\n");


	return 0;
}

