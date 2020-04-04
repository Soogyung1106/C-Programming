#include <stdio.h>
/*Topic4 : 배열과 포인터, 문자열의 처리*/
void ary_prn(int *); //
double ary_avg(int *); //평균을 구하는 함ㄱ수
void input_growth(double *);
double average_growth(double *);
int extra_growth(double *, double);
double ary_min(double *);

int main(void) {
	/* 주제1 : 포인터로 배열 다루기
	
	*/
	
	/*
	double ary[] = { 1.5, 20.1, 16.4, 2.3, 3.5 };
	double tot = 0;
	double avg;
	int i;

	for (i = 0; i < 5; i++)
		tot += *(ary + i);

	avg = tot / 5;
	printf("평균값 : %.2lf\n", avg);
	*/

	/*실습 : 배열의 요소 역순으로 출력하기
	double ary[] = { 1.5, 20.1, 16.4, 2.3, 3.5 };
	double *ap = ary + 4; //포인터 변수 ap에 배열의 5번째 요소의 주소 저장
	int i;

	for (i = 0; i < 5; i++) {
		printf("%.1lf  ", *ap);
		ap--;
	}
	*/




	/*실습1
	int ary[5] = { 10, 20,30,40,50 };
	int *ap = ary;
	int i;

	for (i = 0; i < 5; i++) {
		printf("%5d", *ap);
		ap++;
	}
	*/





	/*주제2 : 배열을 처리하는 함수
	
	*/

	/*실습
	int ary[5] = { 10,20,30,40,50 }; //배열의 선언과 초기화
	ary_prn(ary); //(POINT) 호출할 때는 배열명만 넣어주기 -> BUT 함수의 매개변수는 포인터 변수 *로 표시하기
	*/

	/*실습
	int ary[] = { 75,80,92,88,98 };
	double res; //리턴값을 저장할 변수
	res = ary_avg(ary); //전달인자는 배열명, 함수의 매개변수는 포인터변수
	printf("배열의 평균은 : %.2lf\n", res);
	*/
	
	/*
	double growth[10];
	double avg;
	int ext;

	input_growth(growth); //배열을 매개변수로 넘겨줌
	avg = average_growth(growth);
	ext = extra_growth(growth, avg);

	printf("평균 경제성장률 : %.1lf\n", avg);
	printf("평균 경제성장률을 초과한 횟수 : %.d\n", ext);
	*/

	/*
	double ary[] = { 1.5, 20.1,16.4, 2.3,3.5 };
	double res;

	res = ary_min(ary);
	printf("배열의 최소값 : %.1lf\n", res);
	*/




	return 0;
}

void ary_prn(int *ap) { // (POINT1)배열을 전달인자로 받으므로 매개변수는 포인터변수를 선언한다.
	int i;
	for (i = 0; i < 5; i++) {
		printf("%5d", ap[i]); //(POINT2)포인터변수를 마치 배열명처럼 사용한다.
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
	printf("10년간 경제성장률을 입력하세요 : ");
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