#include <stdio.h>
/*Topic4 : �迭�� ������, ���ڿ��� ó��*/
void ary_prn(int *); //
double ary_avg(int *); //����� ���ϴ� �Ԥ���
void input_growth(double *);
double average_growth(double *);
int extra_growth(double *, double);
double ary_min(double *);

int main(void) {
	/* ����1 : �����ͷ� �迭 �ٷ��
	
	*/
	
	/*
	double ary[] = { 1.5, 20.1, 16.4, 2.3, 3.5 };
	double tot = 0;
	double avg;
	int i;

	for (i = 0; i < 5; i++)
		tot += *(ary + i);

	avg = tot / 5;
	printf("��հ� : %.2lf\n", avg);
	*/

	/*�ǽ� : �迭�� ��� �������� ����ϱ�
	double ary[] = { 1.5, 20.1, 16.4, 2.3, 3.5 };
	double *ap = ary + 4; //������ ���� ap�� �迭�� 5��° ����� �ּ� ����
	int i;

	for (i = 0; i < 5; i++) {
		printf("%.1lf  ", *ap);
		ap--;
	}
	*/




	/*�ǽ�1
	int ary[5] = { 10, 20,30,40,50 };
	int *ap = ary;
	int i;

	for (i = 0; i < 5; i++) {
		printf("%5d", *ap);
		ap++;
	}
	*/





	/*����2 : �迭�� ó���ϴ� �Լ�
	
	*/

	/*�ǽ�
	int ary[5] = { 10,20,30,40,50 }; //�迭�� ����� �ʱ�ȭ
	ary_prn(ary); //(POINT) ȣ���� ���� �迭�� �־��ֱ� -> BUT �Լ��� �Ű������� ������ ���� *�� ǥ���ϱ�
	*/

	/*�ǽ�
	int ary[] = { 75,80,92,88,98 };
	double res; //���ϰ��� ������ ����
	res = ary_avg(ary); //�������ڴ� �迭��, �Լ��� �Ű������� �����ͺ���
	printf("�迭�� ����� : %.2lf\n", res);
	*/
	
	/*
	double growth[10];
	double avg;
	int ext;

	input_growth(growth); //�迭�� �Ű������� �Ѱ���
	avg = average_growth(growth);
	ext = extra_growth(growth, avg);

	printf("��� ��������� : %.1lf\n", avg);
	printf("��� ����������� �ʰ��� Ƚ�� : %.d\n", ext);
	*/

	/*
	double ary[] = { 1.5, 20.1,16.4, 2.3,3.5 };
	double res;

	res = ary_min(ary);
	printf("�迭�� �ּҰ� : %.1lf\n", res);
	*/




	return 0;
}

void ary_prn(int *ap) { // (POINT1)�迭�� �������ڷ� �����Ƿ� �Ű������� �����ͺ����� �����Ѵ�.
	int i;
	for (i = 0; i < 5; i++) {
		printf("%5d", ap[i]); //(POINT2)�����ͺ����� ��ġ �迭��ó�� ����Ѵ�.
	}
}

double ary_avg(int *ap) {
	int i, tot = 0;
	double average;
	for (i = 0; i < 5; i++)
		tot += ap[i];
	average = tot / 5.0; 
	return average;
}

void input_growth(double *gp) {

	int i;
	printf("10�Ⱓ ����������� �Է��ϼ��� : ");
	for (i = 0; i < 10; i++) {
		scanf_s("%lf", gp + i);
	}
}

double average_growth(double *gp) {
		double tot = 0;
		int i;

		for (i = 0; i < 10; i++) {
			tot += gp[i];
		}
		return tot / 10;
}

int extra_growth(double *gp, double avg) {
	int count = 0;
	int i;

	for (i = 0; i < 10; i++) {
		if (gp[i] > avg)
			count++;
	}
	return count;
}

double ary_min(double *ap) {
	int i;
	double min;

	min = ap[0];

	for (i = 1; i < 5; i++) {
		if (ap[i] < min)
			min = ap[i];
	}
	return min;

}