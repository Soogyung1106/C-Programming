#include <stdio.h> // standard input output ������� ���п� -> printf ���ɾ�� scanf ���ɾ� �� �� �ִ� ����

void main(void) {

	/*
	<���� Tip>
	1. 
	¦, Ȧ ���� : 2�� �������� �� �������� 0, 1
	ex) 10 % 3 = 1(3�� ��� x), 9 % 2 = 1(Ȧ��)
	2. 
	N % 45 -> 0���� 44������ ��
	N % 45 + 1 -> 1���� 45������ ��
	N % 100 -> 0���� 99������ �� 

	*/

	/*int n1 = 20, n2 = 3;
	printf("%d %% %d = %d\n", n1, n2, n1%n2);*/ // <����> %�� ����ϰ� ���� ��� 2�� �����! \
											// /(��������)�� ����ϰ� ���� ��� 2�� ����� �Ǵ� ��ó��!
	/*int n1 = 5;
	int n2 = 5;
	printf("n1 + 1 = %d\n", n1 += 1);
	printf("n1 - 1 = %d\n", n1 -= 1);
	printf("n1 * n2 = %d\n", n1 *= n2);
	printf("n1 / n2 = %d\n", n1 /= n2);
	printf("n1 %% n2 = %d\n", n1 %= n2); *///<����> " "ū ����ǥ �ȿ��� %�� ����ϰ� ���� ��� %�� �ݵ�� 2�� �����!!!
	
	/*
	< ��ġ����, ��ġ���� >
	: ++a, a++, --a, a-- (�����ڰ� �տ� �ֳ� �ڿ� �ֳ�)
	������ ���� �ѱ��, �ѱ� �� �����ϳ�
	*/
	//int n1 = 5;
	//printf("n1 : %d\n", ++n1); //������ ����� �ѱ��
	//printf("%d\n", n1);

	//int n2 = 5;
	//printf("n2 : %d\n", n2++); // �ѱ� ������ �����ϱ�(�� �����!)
	//printf("%d\n", n2); //�� �����

	int n1 = 9, n2 = 3;

	//<����> ���� �����ڴ� ���ǽ��̴�! ��, ����� ���� -> ��½� ����� 0, 1�θ� ��ȯ�� (�׷��� %d �׸����� ����)
	/*printf("n1 < n2 : %d\n", n1 < n2);
	printf("n1 > n2 : %d\n", n1 > n2);
	printf("n1 == n2 : %d\n", n1 == n2);
	printf("n1 != n2 : %d\n", n1 != n2);*/

	//������(OR) ������ : || -> ��(1), ����(0)�� ���� ����� ��ȯ�Ѵٰ� �ؼ�!
	//printf("�� || �� : %d\n", 10 > 0 || 10 < 50);
	//printf("�� || ���� : %d\n", 10 > 0 || 10 > 50);
	//printf("���� || �� : %d\n", 10 < 0 || 10 < 50);
	//printf("���� || ���� : %d\n", 10 < 0 || 10 > 50);

	//printf("=============================================\n");

	////������(AND) ������ : && -> ��(1), ����(0)�� ���� ����� ��ȯ�Ѵٰ� �ؼ�!
	//printf("�� && �� : %d\n", 10 > 0  && 10 < 50);
	//printf("�� && ���� : %d\n", 10 > 0 && 10 > 50);
	//printf("���� && �� : %d\n", 10 < 0 && 10 < 50);
	//printf("���� && ���� : %d\n", 10 < 0 && 10 > 50);

	//printf("=============================================\n");

	////��������(�ݴ�) ������ : !() -> 0�̸� 1�� 1�̸� 0�� ������ �ٲ���
	//printf("����(��) : %d\n", !(10 > 0));
	//printf("����(����) : %d\n", !(10 < 0));

	/*while (1) {
		printf("true, 1 Ȯ��\n");
	}*/

	//while (true) { //<����> C������ �ڹٿ����� �޸� true, false ���ǵǾ� ���� ����..�� ���� ����� 0�� 1�θ� ��ȯ�� ��!
					//�׷��� int %d�� �׸����� ���� 
	//				//���� C���� true, false ǥ�� ���x
	//	printf("true, 1 Ȯ��\n");
	//}

	//<����> ��ǻ�ʹ� 0�� �ƴ� ���� ��� ���� ��(1)�� ����Ѵ�.
	//printf("%d\n", 1 && 0); //0
	//printf("%d\n", 1 && 2); //1
	//printf("%d\n", 1 && -4); //1


	//���α׷����� '�ݺ�'�� '����� ��'�� �����̴�!

	//int a = 10;
	//int b = 4;

	//a > 0 ? printf("��\n") : printf("����\n");
	//a % 2==0 ? printf("¦��\n") : printf("Ȧ��\n");

	//int res;
	//res =a > b ? a : b; //2�� �߿� ū ���� ����� ��ڴ�
	////a > b ? res = a : res = b; // <����> ������ �켱���� ������
	////<����> ��� ���� ��� ���� ��쿡�� ���� ���� ��� ��!
	//printf("ū �� : %d\n", res);

	printf("|%d|\n", 10);
	printf("|%5d|\n", 10); //���� ����
	printf("|%-5d|\n", 10);//������ ����

	printf("|%f|\n", 123.456); //�Ǽ��� �Ҽ��� 6��° �ڸ����� �ݵ�� ���
	printf("|%.3f|\n", 123.456); // �Ҽ��� 3��° �ڸ������� ��½�Ű�� �ʹ�.
	printf("|%.2f|\n", 123.456); // 2��° �ڸ����� �ݿø�
	printf("|%10.2f|\n", 123.456); //���� ����
	printf("|%-10.2f|\n", 123.456);//������ ����

	//< �Է� ���ɾ� scanf���� ���ǻ��� >
	//(1) double -> %lf, float -> %ff	
	//(2) (�ּ� ������) &�� �迭�� ���¸� ���� ��츦 �����ϰ� �ݵ�� �� �������! (�迭�� �ᵵ �ǰ� �� �ᵵ ��!)

	//int a;
	//printf("���� �Է��ϼ���.\n");
	//scanf("%d", &a);  //<����> �ٹٲ� ������ \n ��� x
	//printf("a : %d\n", a);

	//double b;
	//printf("�Ǽ� �Է� : ");
	//scanf("%lf", &b);
	//printf("a : %f\n", b); //<����> �ݵ�� �Է¸��ɾ� scanf������ �Ǽ��� ���� �׸����� f�� l �������!

	/*char c;
	printf("���� �Է� : ");
	scanf("%c", &c);
	printf("c : %c\n", c);*/

	/*char d[30];
	printf("���ڿ� �Է� : ");
	scanf("%s", &d);
	printf("d : %s\n", d);*/


}