/*int ���� a,b,result1�� �����ϰ� �ʱ�ȭ�Ͽ� a�� b�� +,-,*�� �����,
float ���� c,d,result2�� �����ϰ� �ʱ�ȭ�Ͽ� c�� d�� /�� ����� ����ϱ�*/

#include<stdio.h>
int main(void) {
	int a = 3, b = 7, result1;
	float c = 2.3, d = 3.5, result2 = c / d;

	printf("a: %d, b: %d\n", a, b);
	result1 = a + b; printf("%d + %d = %d\n", a, b, result1);
	result1 = a - b; printf("%d - %d = %d\n", a, b, result1);
	result1 = a * b; printf("%d * %d = %d\n", a, b, result1);

	printf("c: %.1f, d: %.1f\n", c, d);
	printf("%.1f / %.1f = %f", result2 = c, d, c / d);
}
//10 ���� ������ ������ ������ �°� ������ ��