/*int 변수 a,b,result1를 선언하고 초기화하여 a와 b의 +,-,*의 결과를,
float 변수 c,d,result2를 선언하고 초기화하여 c와 d의 /의 결과를 출력하기*/

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
//10 포맷 지정자 순서와 개수에 맞게 변수명 씀