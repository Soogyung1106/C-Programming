//10~1���� ���ϱ�
#include <stdio.h>

void main(void) {

	int i, sum = 0; // ���� �����̴ϱ� �ʱ�ȭ
					//<?>return�Ϸ��� for���� ����� �������� ����� �� �ְ� for�� �ۿ��� ���������!

	for (i = 10; i > 0; i--) { //��, ��, ��

		sum += i; //sum = sum + i 
				  //sum = 0+ 10, 10+9, 10+9+8, ..., 10+9+...+2+1
	}

	printf("%d\n", sum);

	return ;
}
