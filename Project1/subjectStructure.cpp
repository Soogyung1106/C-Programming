/*���� ����Ʈ
: �����Ҵ� + ����ü �迭 + ���� ã�� 
<��������> ���ڰ� ����ϱ�
*/
#include <stdio.h>
#include <stdlib.h> //malloc(), free()

typedef struct Info { //�л��� ���� 
	char name[30];
	int kor = 0;
	int eng = 0;
	int math = 0;
	int total = 0; //���� 
	int rank = 0; //���� -> ����ڿ��� �Է¹��� ������ �Է�
}IN;


void input(IN*, int);
void rank(IN*, int);
void print(IN*, int);

int main(void) {

	int num; //�Է¹޴� �ο���	
	IN * x; //(����) heap������ �����Ҵ��� �ؼ� �ּҸ� ������ ������ 
	// temp; //(����)������ �ٲ� �� �ʿ��� �ӽ� ������ ����ü ����
						   

	//1. �ο��� ����
	printf("�ο����� �Է� : ");
	scanf_s("%d", &num);

	//2.(����) �Է¹��� ũ�⸸ŭ ����ü �迭 �����Ͽ� �����Ҵ�
	x = (IN *)malloc(sizeof(IN*)*num); 

	//3. ������ ����ü �迭�� ������ ����ֱ�
	input(x, num); //�Ű������� ������ ����ü �迭 �Է�

	//4. ������ �������� �����ؼ� '����'�� ����ü �迭�� ����
	rank(x, num);

	//5. ����ü�� ����� �л��� ��� ���� ���
	print(x, num);

	//6. heap�޸𸮿� �����Ҵ��� �� ����
	free(x); 

	return 0;
}

void input(IN *x, int num) {

	for (int i = 0; i < num; i++) { //�Է¹��� ����ŭ ������
		//_flushall(); //scanf() �Լ��� \n�� �Է¹��ۿ� �״�� ���ܵα� ������ �� \n�� ������� ��
		printf("%d��° ����� �̸� : ", i + 1);
		scanf_s("%s", x[i].name, 30); //<�����ذ�> �޸��� ũ�� sizeof ���Խ�Ű��
		
		//����ó��(1)
		while (1) {
			printf("%d��° ����� �������� : ", i + 1);
			scanf_s("%d", &x[i].kor);
			if (x[i].kor > 100 || x[i].kor < 0) {
				printf("0�̻� 100������ ������ �Է� �����մϴ�.\n");
				printf("�ٽ� �Է��ϼ���.\n");
			}
			else
				break;
		}
		
		//����ó��(2)
		while (1) {
			printf("%d��° ����� �������� : ", i + 1);
			scanf_s("%d", &x[i].eng);
			if (x[i].eng > 100 || x[i].eng < 0) {
				printf("0�̻� 100������ ������ �Է� �����մϴ�.\n");
				printf("�ٽ� �Է��ϼ���.\n");
			}
			else
				break;
		}
		
		//����ó��(3)
		while (1) {
			printf("%d��° ����� �������� : ", i + 1);
			scanf_s("%d", &x[i].math);
			if (x[i].math > 100 || x[i].math < 0) {
				printf("0�̻� 100������ ������ �Է� �����մϴ�.\n");
				printf("�ٽ� �Է��ϼ���.\n");
			}
			else
				break;
		}

		int tot = x[i].kor + x[i].eng + x[i].math;
		x[i].total = tot; //���� ����ؼ� ������ ����
	}
}


void rank(IN* x, int num) {

	//for (int i = 0; i < num - 1; i++) { //(����) total ū ������ ���ĵ�
	//	for (int j = 0; j < num - 1; j++) {
	//		if (x[j].total < x[j + 1].total) { //(����)a<b�� ��� a�� b�� ��ġ�� �������ϰڴ�. 
	//			temp = x[j];						//�� ���ĵǾ����� b>a ������ �����.
	//			x[j] = x[j + 1];
	//			x[j + 1] = temp;
	//		}
	//	}
	//}

	//for (int i = 0; i < num; i++) {
	//	x[i].rank = i+1; //(����)���� �ޱ��
	//}

	/*(����) 
	1. ����ü �迭�� ù��° ��Ұ� 1���̶�� ����
	2. �迭�� �� ���� ��ҿ� ���Ͽ� �� ������Ұ� ũ�ٸ� ��� +1�����ν� ��� �з�������
	3. ��� �迭�� ��Ҹ� �迭�� 0���� ������ ���� ���ϴ� �۾�
	*/
	int count;//�迭�� �� ����� ����� ī��Ʈ�ϱ� ���� ����
	for (int i = 0; i < num; i++) {
		count = 1; //(����)for�� ���� �� �� �ʱ�ȭ, ��� ó���� 1��(���� ũ�ٰ�)�̶�� ����
		for (int j = 0; j < num; j++) {
			if (x[i].total < x[j].total) //(����) x[0].total = x[0].total �� ���� �˾Ƽ� ���ܵ�
				count++;
		}
		//x[0].total�� ( x[0].total~x[num-1].total ) �迭�� �տ������� ������ �������� �� ��
		x[i].rank = count; //ī��Ʈ�� ��� ����ü �迭�� �����ϱ�
	}
}

void print(IN* x, int num) {

	printf("\n�̸�  ����  ����  ����  ����  ����\n");
	
	for (int i = 0; i < num; i++) {
		printf("%s %-4d %-4d %-4d %-4d %-d\n", x[i].name, x[i].kor, x[i].eng, x[i].math, x[i].total, x[i].rank);
	}
}
