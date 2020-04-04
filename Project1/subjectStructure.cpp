/*문제 포인트
: 동적할당 + 구조체 배열 + 순위 찾기 
<수정사항> 예쁘게 출력하기
*/
#include <stdio.h>
#include <stdlib.h> //malloc(), free()

typedef struct Info { //학생의 정보 
	char name[30];
	int kor = 0;
	int eng = 0;
	int math = 0;
	int total = 0; //총점 
	int rank = 0; //순위 -> 사용자에게 입력받은 다음에 입력
}IN;


void input(IN*, int);
void rank(IN*, int);
void print(IN*, int);

int main(void) {

	int num; //입력받는 인원수	
	IN * x; //(생각) heap영역에 동적할당을 해서 주소를 저장할 포인터 
	// temp; //(생각)순서를 바꿀 때 필요한 임시 공간인 구조체 생성
						   

	//1. 인원수 설정
	printf("인원수를 입력 : ");
	scanf_s("%d", &num);

	//2.(생각) 입력받은 크기만큼 구조체 배열 생성하여 동적할당
	x = (IN *)malloc(sizeof(IN*)*num); 

	//3. 생성한 구조체 배열에 데이터 집어넣기
	input(x, num); //매개변수로 선언한 구조체 배열 입력

	//4. 총점을 기준으로 정렬해서 '순위'를 구조체 배열에 저장
	rank(x, num);

	//5. 구조체에 저장된 학생의 모든 정보 출력
	print(x, num);

	//6. heap메모리에 동적할당한 것 해제
	free(x); 

	return 0;
}

void input(IN *x, int num) {

	for (int i = 0; i < num; i++) { //입력받은 수만큼 돌리기
		//_flushall(); //scanf() 함수가 \n을 입력버퍼에 그대로 남겨두기 때문에 이 \n을 없애줘야 함
		printf("%d번째 사람의 이름 : ", i + 1);
		scanf_s("%s", x[i].name, 30); //<오류해결> 메모리의 크기 sizeof 포함시키기
		
		//예외처리(1)
		while (1) {
			printf("%d번째 사람의 국어점수 : ", i + 1);
			scanf_s("%d", &x[i].kor);
			if (x[i].kor > 100 || x[i].kor < 0) {
				printf("0이상 100이하의 점수만 입력 가능합니다.\n");
				printf("다시 입력하세요.\n");
			}
			else
				break;
		}
		
		//예외처리(2)
		while (1) {
			printf("%d번째 사람의 영어점수 : ", i + 1);
			scanf_s("%d", &x[i].eng);
			if (x[i].eng > 100 || x[i].eng < 0) {
				printf("0이상 100이하의 점수만 입력 가능합니다.\n");
				printf("다시 입력하세요.\n");
			}
			else
				break;
		}
		
		//예외처리(3)
		while (1) {
			printf("%d번째 사람의 수학점수 : ", i + 1);
			scanf_s("%d", &x[i].math);
			if (x[i].math > 100 || x[i].math < 0) {
				printf("0이상 100이하의 점수만 입력 가능합니다.\n");
				printf("다시 입력하세요.\n");
			}
			else
				break;
		}

		int tot = x[i].kor + x[i].eng + x[i].math;
		x[i].total = tot; //총점 계산해서 데이터 저장
	}
}


void rank(IN* x, int num) {

	//for (int i = 0; i < num - 1; i++) { //(생각) total 큰 값부터 정렬됨
	//	for (int j = 0; j < num - 1; j++) {
	//		if (x[j].total < x[j + 1].total) { //(생각)a<b일 경우 a와 b의 위치를 스와핑하겠다. 
	//			temp = x[j];						//즉 정렬되었을시 b>a 순서로 저장됨.
	//			x[j] = x[j + 1];
	//			x[j + 1] = temp;
	//		}
	//	}
	//}

	//for (int i = 0; i < num; i++) {
	//	x[i].rank = i+1; //(생각)순위 메기기
	//}

	/*(생각) 
	1. 구조체 배열의 첫번째 요소가 1등이라고 가정
	2. 배열의 그 다음 요소와 비교하여 그 다음요소가 크다면 등수 +1함으로써 등수 밀려나가기
	3. 모든 배열의 요소를 배열의 0부터 끝까지 돌려 비교하는 작업
	*/
	int count;//배열의 각 요소의 등수를 카운트하기 위한 변수
	for (int i = 0; i < num; i++) {
		count = 1; //(생각)for문 돌고 난 후 초기화, 등수 처음에 1등(가장 크다고)이라고 가정
		for (int j = 0; j < num; j++) {
			if (x[i].total < x[j].total) //(생각) x[0].total = x[0].total 이 경우는 알아서 제외됨
				count++;
		}
		//x[0].total과 ( x[0].total~x[num-1].total ) 배열의 앞에서부터 끝까지 차례차례 비교 후
		x[i].rank = count; //카운트된 등수 구조체 배열에 저장하기
	}
}

void print(IN* x, int num) {

	printf("\n이름  국어  영어  수학  총점  순위\n");
	
	for (int i = 0; i < num; i++) {
		printf("%s %-4d %-4d %-4d %-4d %-d\n", x[i].name, x[i].kor, x[i].eng, x[i].math, x[i].total, x[i].rank);
	}
}
