//구구단 출력 프로그램
// 1 * 1 = 1
// 1 * 2 = 2
// ...
//9 * 9 =81
#include <stdio.h>

void main(void) {
	
	int i, j, sum = 0;

	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) { 

			sum = i * j;
			printf("%d * %d = %d", i, j, sum);
			printf("\n"); //<주의> 1줄  출력 후 줄바꿈 잊지 않기!
			// i = 1(j=1, 2, 3, ,4, 5...9)
			// i = 2(j=1, 2, 3, 4, 5...9)
			//...
			// i = 9(j=1, 2, 3, 4, 5...9)
		}
	}

	return;
}