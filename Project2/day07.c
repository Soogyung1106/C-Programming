#include <stdio.h>

void main(void) {

	//int rank;
	//printf("�� �̹��� �ζǿ��� ����ߴ�?");
	//scanf("%d", &rank);

	//switch (rank) {  //<����> switch~case�� break�� �׻� ��Ʈ�� ����!! 
	//case 1:
	//	printf("������ ����\n");
	//	break; //<����> break�� ������ �ƴ϶� �� ���̽����� �ʼ������� �ݵ�� �־�� �Ǵ� ��! ������ �� ��!
	//			//<����>��ĳ�ʰ� �� �Ʒ��� �������� �д� ���� ���� ��
	//case 2:
	//	printf("���̸� ����");
	//	break;
	//case 3:
	//	printf("������ ����");
	//	break;
	//default:
	//	printf("��������");
	//}

	//<?>��ĳ��


	//<����1>
	/*
	int a, b;
	int res = 0;  //a�� b �� ���� ������ ������ ���
	char math;

	printf("ù ��° ���� �� ��° ������ ũ����!\n");
	printf("�� �� �Է� :");
	scanf("%d%d", &a, &b);

	getchar();  //1����Ʈ ��������!  -> <����> ���ڿ��� �Է¹��� ���� �� �ص���!! ���� 1���� �Է� ���� ��쿡��!
	printf("������ ���� : ");
	scanf("%c", &math);

	switch (math) {
	case '+':
	res = a + b;
	printf("���� ��� : %d\n", res);
	break;
	case '-':
	res = a - b;
	printf("���� ��� : %d\n", res);
	break;
	case '*':
	res = a * b;
	printf("���� ��� : %d\n", res);
	break;
	case '/':
	if (b == 0) {
	printf("0���� ���� �� �����ϴ�.\n");
	}
	else {
	res = a / b;
	printf("���� ��� : %d\n", res);
	}
	break;
	case '%':
	if (b == 0) {
	printf("0���� ���� �� �����ϴ�.\n");
	}
	else {
	res = a % b;
	printf("���� ��� : %d\n", res);
	}
	break;
	default:
	printf("�����ڸ� �߸� �����̽��ϴ�.\n");
	}
	*/

	//<����2> switch~case �̿�
	//�� ����(����, ����, ����) ���� �Է� -> �հ�, ��� ��� -> ���� ���

	int kor, eng, math;
	int total;
	double aver;

	printf("����, ����, ���� ���� �Է� : ");
	scanf("%d%d%d", &kor, &eng, &math);

	total = kor + eng + math;
	printf("�հ� : %d\n", total);

	aver = (double)(kor + eng + math) / 3;  // ��������ȯ
	printf("��� : %.2f\n", aver);

	//switch ���ǹ��� ������ ����! -> ǥ���� ��Ģ�� ã�ƾ�!
	//<���� ���� ����>
	//100~90 aver+0 ~ aver+10
	//89~80  aver+11 ~ aver+20
	//79~70
	//69~60
	//59~0

	// ����(���� Ȥ�� ����)
	switch (100 - aver) {
	case(0):
		printf("���� : A\n");
		break;
	case(21):
		printf("���� : B\n");
		break;
	case(31):
		printf("���� : C\n");
		break;
	case(31):
		printf("���� : D\n");
		break;
	default:
		printf("���� : F\n");

	}


}