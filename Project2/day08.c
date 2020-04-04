#include <stdio.h>

void main(void) {

	/*
	반복문 종류 3가지 : for > while > do~while (사용 빈도수)
	*/

	/*
	int cnt = 1;
	while (1){ //<주의> while문 사용시 애초에 무한루프로 조건에1 넣어주고 '종료 조건'을 달아주는 것이 흔함!
		if (cnt > 10) {
			printf("while문 종료");
			break;  //<주의> if문 안에 명령어 1줄인 경우 중괄호 안 적어줘도 된다!
		}			// 무한 반복을 종료하는 방법 : break	

		//방법1
		printf("%d번째 while문 실행\n", cnt);  //<기억>이 두 줄 한 번에 적을 수 있음-> 아래 방법2
		cnt++; //후치 연산						
		
		//방법2
		//printf("%d번째 while문 실행\n", cnt++);  // 집어넣고 증감  ++cnt쓰면 안됨 -> 활용할 줄 알아야!
		
	}
	*/

	
	/* 1~100까지의 합을 계산
	int num = 1;
	int sum = 0;	//누적변수 -> <주의>누적변수는 반드시 초기화되어 있어야 함! (쓰레기끼리 더하지 않도록!)

	while (1) {
		sum += num; // sum = 0+1, 1+2, 1+2+3,.....1+2+3+..+100
		num++;

		if (num > 100)
			break;
	}
	printf("총합 : %d\n", sum);
	*/

	/*
	//<문제1>
	int input;

	while (1) {
		printf("입력 : ");
		scanf("%d", &input);

		if (input == 0){
			printf("프로그램 종료\n");
			break;
		}
	}
	*/

	/*
	//<문제2> 누적합과 누적 평균을 계산하는 프로그램 만들기 (종료값 : 0 또는 음수)
	int input;
	int sum = 0; //합계 <주의> 누적변수이므로 초기화 
	double aver; //평균
	int cnt = 0; //올라가는 횟수

	while (1) {
		printf("숫자 입력 : ");
		scanf("%d", &input);

		if (input <= 0 ) {  // 입력값이 0또는 음수인 경우
			printf("합계 = %d\n", sum); // 아무것도 입력하지 않았을 경우 내가 초기화시킨 0값이 잘 출력됨!
			
			if (sum == 0) { //(사고1)처음부터 0이나 음수를 눌렀을 경우(즉, 아무것도 입력하지 않고 0이나 음수를 눌러서 종료할 경우)
				printf("0/0이므로 평균은 구할 수 없습니다.\n");
				break;
			}
			else { //(사고2) 두 번째부터 0이나 음수를 눌렀을 경우
				aver = (double)sum / cnt;
				printf("평균 = %.1f\n", aver);
				break;
			}
		}
		
		sum += input; // sum = sum + input
		cnt++; // <주의> 종료 조건문 아래에 적어야! -> 0을 입력했을 때는 횟수가 증감하지 않도록!

	}
	*/

	/*
	//<문제3> 분을 입력받아 시간 단위로 변환하는 프로그램
	int input;  //입력값
	int minute; //변환되었을 때의 분
	int hour; //변환되었을 때의 시간

	while(1) {
		printf("분 입력(종료시 0) :");
		scanf("%d", &input);

		if (input < 0) {
			printf("음수는 입력할 수 없습니다.\n");
			printf("다시 입력해주세요.\n");
		}

		if (input == 0) {
			printf("프로그램 종료!\n");
			break;
		}
		if(input > 0) {
			hour = input / 60;  //200 나누기 60은 3
			minute = input % 60; //200을 60으로 나누었을 때 나머지 20
			printf("%d분은 %d시간 %d분 입니다.\n", input, hour, minute);
		}

	}
	*/

}